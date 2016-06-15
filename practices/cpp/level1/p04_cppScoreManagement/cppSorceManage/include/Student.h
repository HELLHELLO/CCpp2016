#ifndef STUDENT_H
#define STUDENT_H
#include <string>

class Student
{
    public:
        Student(int number,std::string mOrFm,std::string s);
        void value(int theValue);
        void show();
        void save();
        int studentNumber();
        virtual ~Student();

    protected:

    private:
        int source;
        int number;
        std::string name;
        std::string maleOrFemale;

};

#endif // STUDENT_H
