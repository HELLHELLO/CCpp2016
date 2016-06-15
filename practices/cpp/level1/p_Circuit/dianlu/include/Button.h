#ifndef BUTTON_H
#define BUTTON_H
class Unit
{
    public:
        virtual void on()=0;
        virtual void off()=0;
        Unit();
        ~Unit();

};

class Fan:public Unit
{
    public:
        void on();
        void off();
        Fan();
        ~Fan();
    private:
        bool flag;
};

class Door:public Unit
{
    public:
        void on();
        void off();
        Door();
        ~Door();
    private:
        bool flag;
};


class Button
{
    public:
        Button();
        virtual ~Button();
        void bind(Unit* x);
        void on();
        void off();
    private:
        Unit* target;
};



#endif // BUTTON_H
