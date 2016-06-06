#ifndef STUDENT_H
#define STUDENT_H

enum sex{MALE,FEMALE};

typedef struct{
    bool isOrNot;
    int source;
} subject;

class Student
{
    public:
        Student();
        void setting()
        virtual ~Student();

    protected:

    private:
        subject cpp;
        subject math;
        subject English;
        int number;
        bool maleOrFemale;
        char name[50];

};

#endif // STUDENT_H
