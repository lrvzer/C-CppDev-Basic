#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <curses.h>

enum Direction {
    UP = 119,
    DOWN = 115,
    LEFT = 97,
    RIGHT = 100
};

enum FoodType {
    LEVELONE, LEVELTWO
};

enum SnakeBodyType {
    HEAD, BODY, TAIL
};

typedef struct _pos {
    int x_;
    int y_;
} Pos;

typedef struct _food {
    Pos pos_;
    enum FoodType ft_;
} Food;

typedef struct _snake {
    Pos pos_;
    enum SnakeBodyType sbt_;
    struct _snake *next;
} Snake;

void getDirection(enum Direction *dir);
void flushScreen(Snake *snake, Food *fd);
void initFood(Food *fd);
void initSnake(Snake **head, Food *fd);
int isSnakePart(Snake *sh, int x, int y, enum SnakeBodyType *type);
void initDirection(enum Direction *p_direction);
int snakeMove(Snake *snake, Food *food, const enum Direction *dir);

int isMeetWall(Snake *p_snake);
int isBitSelf(Snake *p_snake);
int isFood(Snake *sh, Food *fd);
void eatFood(Snake *sh, Food *fd);
void generateFood(Snake *sh, Food *fd);
int isFoodOnSnakeBody(Snake *sh, Food *fd);
int main(int argc, char *argv[]) {
    srand(time(NULL));
    Food fd;
    initFood(&fd);

    Snake *snake;
    initSnake(&snake, &fd);

    enum Direction dir;
    initDirection(&dir);

    while (1) {
        system("clear");
        getDirection(&dir); // 非阻塞的获取方向 Controller
        if (snakeMove(snake, &fd, &dir) == -1) { // 链表的数据在发生变化 model
            break;
        }
        flushScreen(snake, &fd); // 呈现链表的变化状态 view
        usleep(1000 * 50);
    }
    return 0;
}
void initDirection(enum Direction *dir) {
    switch (rand() % 4) {
        case 0:*dir = UP;
            break;
        case 1:*dir = DOWN;
            break;
        case 2:*dir = LEFT;
            break;
        case 3:*dir = RIGHT;
            break;
    }
}

void initSnake(Snake **head, Food *fd) {
    *head = (Snake *) malloc(sizeof(Snake));
    do {
        (*head)->pos_.x_ = rand() % 10 + 3;
        (*head)->pos_.y_ = rand() % 10 + 3;
        (*head)->sbt_ = HEAD;
    } while ((*head)->pos_.x_ == fd->pos_.x_ && (*head)->pos_.y_ == fd->pos_.y_);
    (*head)->next = NULL;
}

void flushScreen(Snake *snake, Food *fd) {
    enum SnakeBodyType type;
    for (int i = 0; i < 16; ++i) {
        for (int j = 0; j < 16; ++j) {
            if (i == 0 || j == 0 || i == 15 || j == 15) {
                printf(" #");
            } else if (isSnakePart(snake, i, j, &type)) {
                switch (type) {
                    case HEAD:printf(" @");
                        break;
                    case BODY:printf(" *");
                        break;
                    case TAIL:printf(" ^");
                        break;
                }
            } else if (fd->pos_.x_ == i && fd->pos_.y_ == j) {
                printf(" &");
            } else {
                printf("  ");
            }
        }
        putchar(10);
    }
}
int isSnakePart(Snake *sh, int x, int y, enum SnakeBodyType *type) {

    while (sh) {
        if (sh->pos_.x_ == x && sh->pos_.y_ == y) {
            *type = sh->sbt_;
            return 1;
        }
        sh = sh->next;
    }
    return 0;
}

void initFood(Food *fd) {
    fd->pos_.x_ = rand() % 14 + 1;
    fd->pos_.y_ = rand() % 14 + 1;
    fd->ft_ = LEVELONE;
}

int snakeMove(Snake *snake, Food *food, const enum Direction *dir) {
    Pos prePos = snake->pos_;
    switch (*dir) {
        case UP:snake->pos_.x_--;
            break;
        case DOWN:snake->pos_.x_++;
            break;
        case LEFT:snake->pos_.y_--;
            break;
        case RIGHT:snake->pos_.y_++;
            break;
    }
    // 撞墙
    if (isMeetWall(snake)) {
        return -1;
    }

    // 吃到自己
    if (isBitSelf(snake)) {
        return -1;
    }

    // 吃到食物
    if (isFood(snake, food))
        eatFood(snake, food);

    // 移动
    Pos curPos;
    while (snake->next) {
        curPos = snake->next->pos_;
        snake->next->pos_ = prePos;
        prePos = curPos;
        snake = snake->next;
    }
    return 0;
}

void eatFood(Snake *sh, Food *fd) {
    while (sh->next) {
        sh = sh->next;
    }

    Snake *node = (Snake *) malloc(sizeof(Snake));
    sh->next = node;
    node->next = NULL;

    if (sh->sbt_ == HEAD) {
        node->sbt_ = TAIL;
    } else {
        sh->sbt_ = BODY;
        node->sbt_ = TAIL;
    }
    generateFood(sh, fd);
}

void generateFood(Snake *sh, Food *fd) {
    do {
        fd->pos_.x_ = rand() % 14 + 1;
        fd->pos_.y_ = rand() % 14 + 1;
        fd->ft_ = LEVELONE;
    } while (isFoodOnSnakeBody(sh, fd));
}

int isFoodOnSnakeBody(Snake *sh, Food *fd) {
    while (sh) {
        if (sh->pos_.x_ == fd->pos_.x_ && sh->pos_.y_ == fd->pos_.y_) {
            return 1;
        }
        sh = sh->next;
    }
    return 0;
}

int isFood(Snake *sh, Food *fd) {

    if (sh->pos_.x_ == fd->pos_.x_ && sh->pos_.y_ == fd->pos_.y_) {
        return 1;
    }
    return 0;
}

int isBitSelf(Snake *sh) {
    Pos pos = sh->pos_;
    sh = sh->next;

    while (sh) {
        if (sh->pos_.x_ == pos.x_ && sh->pos_.y_ == pos.y_) {
            return 1;
        }
        sh = sh->next;
    }

    return 0;
}
int isMeetWall(Snake *sh) {
    if (sh->pos_.x_ == 0 || sh->pos_.x_ == 15 || sh->pos_.y_ == 0 || sh->pos_.y_ == 15)
        return 1;
    return 0;
}

void getDirection(enum Direction *dir) {
    enum Direction newDir;
    while (kbhit()) {
        newDir = getch();
        if (newDir == UP || newDir == DOWN || newDir == LEFT || newDir == RIGHT) {
            *dir = newDir;
        }
    }
}