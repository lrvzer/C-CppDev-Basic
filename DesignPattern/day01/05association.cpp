#include <iostream>
#include <vector>

using namespace std;

class Student;

class Teacher
{
public:
    void addStudent(Student *s)
    {
        vs.push_back(s);
    }

private:
    vector<Student *> vs;
};

class Student
{
public:
    void addTeacher(Teacher *t)
    {
        vt.push_back(t);
    }

private:
    vector<Teacher *> vt;
};

int main()
{
    Student *s1 = new Student, *s2 = new Student, *s3 = new Student, *s4 = new Student;
    Teacher *t1 = new Teacher, *t2 = new Teacher, *t3 = new Teacher, *t4 = new Teacher;

    s2->addTeacher(t1);

    return 0;
}