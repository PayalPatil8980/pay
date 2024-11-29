#include<iostream>
using namespace std;
class Report{
    private:
    int adno;
    char name[20];
    float sub[5];
    float avarge=0;
    float getavg(float average);
    public:
    void read(){
        cout<<"Enter adno: ";
        cin>>adno;
        cout<<"Enter name: ";
        cin>>name;
        for(int i=0;i<5;i++){
            cout<<"Enter the marks of subject "<<i+1<<":";
            cin>>sub[i];
        }

    }
    void display(){
        cout<<"Adno:"<<adno<<endl;
        cout<<"Name:"<<name<<endl;
        for(int i=0;i<5;i++){
            cout<<"marks subject "<<i+1<<":"<<sub[i]<<endl;
        }
        cout<<"The average marks obtained are:"<<getavg(avarge);
    }
};
float Report::getavg(float avarge){
    avarge=sub[0]+sub[1]+sub[2]+sub[3]+sub[4];
    return avarge/5;
}


int main(){
    Report s1;
    s1.read();
    s1.display();
}
