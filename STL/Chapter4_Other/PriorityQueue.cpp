#include <iostream>
#include <queue>

using namespace std;

struct Node {
    Node(int nri, char *pszName) {
        priority = nri;
        strcpy(szName, pszName);
    }
    char szName[20];
    int priority;
};

//结构体的比较方法改写operator()
class NodeCmp {
    public:
        bool operator()(const Node &na, const Node &nb) {
            if (na.priority != nb.priority)
                return na.priority > nb.priority;
            else
                return strcmp(na.szName, nb.szName) < 0;
        }
};

void printfNode(const Node &na) {
    printf("%s-%d\n", na.szName, na.priority);
}

void priority_queue_application() {
    //优先级队列默认是使用vector作容器，底层数据结构为堆。
    priority_queue<Node, vector<Node>, NodeCmp> a;
    //有5个人进入队列
    a.push(Node(5, "abc"));
    a.push(Node(3, "bac"));
    a.push(Node(1, "cba"));
    a.push(Node(5, "aaa"));
    //队头的2个人出队
    printfNode(a.top());
    a.pop();
    printfNode(a.top());
    a.pop();
    printf("--------------------\n");
    //再进入3个人
    a.push(Node(2, "bbb"));
    a.push(Node(2, "ccc"));
    a.push(Node(3, "aaa"));
    //所有人都依次出队
    while (!a.empty()) {
        printfNode(a.top());
        a.pop();
    }
    //2ccc    2bbb    3aaa    5abc    5aaa
}

void priority_queue_use() {
    priority_queue<int> pqi;
    pqi.push(1);
    pqi.push(3);
    pqi.push(5);
    pqi.push(7);
    pqi.push(9);
    pqi.push(2);
    pqi.push(4);
    pqi.push(6);
    pqi.push(8);
    pqi.push(10);

    while (!pqi.empty()) {
        cout << pqi.top() << " ";
        pqi.pop();
    }
}

int main() {
//    priority_queue_use();
    priority_queue_application();
    return 0;
}
