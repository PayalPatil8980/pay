#include<iostream>
using namespace std;

class Complex{
    int x,y;
    public:
    Complex(){
        x=0;
        y=0;
    }
    Complex(int a,int b){
        x=a;
        y=b;
    }
    Complex operator+(Complex z){
        Complex t;
        t.x=x+z.x;
        t.y=y+z.y;
        return t;
    }
    void printdata(){
        cout<<"Value of X:"<<x<<endl;
        cout<<"Value of Y:"<<y<<endl;
    }
};
int main(){
    class Complex s1,s2,s3;
    s1=Complex(10,20);
    s2=Complex(30,40);
    cout<<"First object"<<endl;
    s1.printdata();
    cout<<"second object"<<endl;
    s2.printdata();
    s3=s1+s2;
    cout<<"third object"<<endl;
    s3.printdata();
}