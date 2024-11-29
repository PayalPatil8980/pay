#include<iostream>

using namespace std;

class Book{
    private:
    int bookno;
    char booktitle[20];
    float price;
    int n;
    float totalcost(int n,float price);
    public:

    void input(){
        cout<<"Enter book no:";
        cin>>bookno;
        cout<<"Enter booktitle:";
        cin>>booktitle;
        cout<<"Enter book price:";
        cin>>price;
    }
    void purchase(){
        cout<<"Enter the no of coppies:";
        cin>>n;
        cout<<"Total cost is:"<<totalcost(n,price);
    }
};

float Book::totalcost(int n,float price){
    return price*n;
}

int main(){
    Book s1;
    s1.input();
    s1.purchase();
}