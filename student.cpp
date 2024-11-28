#include<iostream>

using namespace std;

class Student{
    private:
    int adnum;
    char sname[20];
    float eng,math,science;
    float total=0;
    float per=0;
    float ctotal(float eng,float math,float science);

    public:
    void takeData(){
        cout<<"Enter Adnumber:";
        cin>>adnum;
        cout<<"Enter sname:";
        cin>>sname;
        cout<<"Enter marks of English:";
        cin>>eng;
        cout<<"Enter marks of math:";
        cin>>math;
        cout<<"Enter marks of science:";
        cin>>science;

    }
    void showDate(){
        cout<<"Adnumber:"<<adnum<<endl;
        cout<<"sname:"<<sname<<endl;
        cout<<"English:"<<eng<<endl;
        cout<<"Math:"<<math<<endl;
        cout<<"science:"<<science<<endl;
        cout<<"Total:"<<ctotal(eng,math,science)<<endl;
        per=ctotal(eng,math,science)/3;
        cout<<"Per:"<<per<<endl;
    }
};
float Student::ctotal(float eng,float math,float science){
    return eng+math+science;
}
int main(){
    Student s1;
    s1.takeData();
    s1.showDate();
}