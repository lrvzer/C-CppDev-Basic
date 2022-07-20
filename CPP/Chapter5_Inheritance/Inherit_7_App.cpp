#include <iostream>

using namespace std;

class Birthday {
        friend ostream &operator<<(ostream &out, Birthday &birth) {
            out << "birth: " << birth._year << "-" << birth._month << "-" << birth._day;
            return out;
        }
    public:
        explicit Birthday(int year = 1997, int month = 1, int day = 1) : _year(year), _month(month), _day(day) {
            cout << "Birthday(int year = 1997, int month = 1, int day = 1)" << endl;
        }

        Birthday(const Birthday &another) {
            cout << "Birthday(const Birthday &another)" << endl;
            this->_year = another._year;
            this->_month = another._month;
            this->_day = another._day;
        }

        Birthday &operator=(const Birthday &another) {
            cout << "Birthday &operator=(const Birthday &another)" << endl;
            if (this != &another) {
                this->_year = another._year;
                this->_month = another._month;
                this->_day = another._day;
            }
            return *this;
        }

        ~Birthday() {
            cout << "~Birthday()" << endl;
        }
    private:
        int _year;
        int _month;
        int _day;
};

class Student {
        friend ostream &operator<<(ostream &out, Student &student) {
            out << "Student(" << student._name << ", " << student._sex << ", " << student._score << ")";
            return out;
        }
    public:
        Student(string name, char sex, float score) : _name(name), _sex(sex), _score(score) {
            cout << "Student(string name, char sex, float score)" << endl;
        }

        Student(const Student &another) {
            cout << "Student(const Student &another)" << endl;
            this->_name = another._name;
            this->_sex = another._sex;
            this->_score = another._score;
        }

        Student &operator=(const Student &another) {
            cout << "Student &operator=(const Student &another)" << endl;
            if (this != &another) {
                this->_name = another._name;
                this->_sex = another._sex;
                this->_score = another._score;
            }
            return *this;
        }

        ~Student() {
            cout << "~Student()" << endl;
        }
    private:
        string _name;
        char _sex;
        float _score;
};

class Graduate : public Student {
        friend ostream &operator<<(ostream &out, Graduate &graduate) {
            out << static_cast<Student &>(graduate) << endl;
            out << graduate._birth << endl;
            out << "salary [" << graduate._salary << "]" << endl;
            return out;
        }

    public:
        Graduate(string name, char sex, float score, int year, int month, int day, float salary)
            : Student(name, sex, score), _birth(year, month, day), _salary(salary) {
            cout << "Graduate(string name, char sex, float score, int year, int month, int day, float salary)" << endl;
        }

        Graduate(const Graduate &another) : Student(another), _birth(another._birth) {
            cout << "Graduate(const Graduate &another)" << endl;
            this->_salary = another._salary;
        }

        Graduate &operator=(const Graduate &another) {
            cout << "Graduate &operator=(const Graduate &another)" << endl;
            if (this != &another) {
                Student::operator=(another);
                this->_birth = another._birth;
                this->_salary = another._salary;
            }
            return *this;
        }

        ~Graduate() {
            cout << "~Graduate()" << endl;
        }
    private:
        float _salary;
        Birthday _birth;
};

int main() {
    Graduate gra("zhang_san", 'f', 90, 1997, 5, 12, 1000);
    cout << gra;

    Graduate gra_copy(gra);

    gra_copy = gra;

    return 0;
}