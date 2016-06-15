#include <iostream>
#include "Student.h"
#include "StudentList.h"
#include <fstream>

using namespace std;

int main()
{
    fstream file;
    StudentList classList;
    file.open("information",ios::in);
    if(!file){
        cout<<"There is not list in the working dictionary.We will build a new list while you exit."<<endl;
    }else{
        while(!file.eof()){
            string name;
            string mOrFm;
            int number;
            int source;
            file>>number>>name>>source>>mOrFm;
            classList.append(number,mOrFm,name);
            classList.inputValue(number,source);
        }
    }
    file.close();
    int option;
    int xunhuan=1;
    while(xunhuan){
        cout<<endl<<"Switch the option:"<<endl<<"1.Show the list."<<endl<<"2.Add student"<<endl<<"3.Delete student."<<endl<<"4.Input source."<<endl<<"5.Exit"<<endl;
        cin>>option;
        switch(option){
            case 1:
                classList.show();
                break;
            case 2:
                {
                    string name;
                    string maleOrFemale;
                    int number;
                    cout<<"Please input the information of the student"<<endl;
                    cin>>number>>name>>maleOrFemale;
                    classList.append(number,maleOrFemale,name);
                    break;
                }
            case 3:
                {
                    int number;
                    cout<<"Please input the student number of the student"<<endl;
                    cin>>number;
                    classList.out(number);
                    break;
                }
            case 4:
                {
                    int number;
                    int source;
                    char sign='n';
                    do{
                        cout<<"Please input the first student's number and source"<<endl;
                        cin>>number>>source;
                        classList.inputValue(number,source);
                        cout<<"Continue?[Y/n]";
                        cin>>sign;
                    }while(sign=='Y');
                    break;
                }
            case 5:
                xunhuan=0;
                break;
            default:
                cout<<"Wrong option"<<endl;
                break;
        }
    }
    file.open("information",ios::out|ios::trunc);
    if(!file){
        cout<<"Fail to save"<<endl;
        return 1;
    }else{
        streambuf *backup;
        backup=cout.rdbuf();
        cout.rdbuf(file.rdbuf());
        classList.save();
        cout.rdbuf(backup);
        cout<<"Successful to save"<<endl;
    }
    file.close();
    return 0;
}
