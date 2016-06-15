#ifndef STUDENTLIST_H
#define STUDENTLIST_H
#include <vector>
#include "Student.h"
#include <string>
class StudentList
{
    public:
        StudentList();
        void append(int number,std::string maleOrFemale,std::string name);
        void out(int number);
        void inputValue(int number,int source);
        void show();
        void save();
        virtual ~StudentList();

    protected:

    private:
       std::vector<Student> students;
};

#endif // STUDENTLIST_H
