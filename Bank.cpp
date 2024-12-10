#include <iostream>
using namespace std;
class Balance{
    public:
    int p0001=20000;
    int k0002=30000;
    int n0003=12322;
};
class Withdraw:public Balance{
    public:
    int n,totalbal,t1;
    void printdata(){
    cout<<"Enter amount for withdraw: ";
    cin>>n;
    totalbal=p0001-n;
    cout<<"Total balance is: "<<totalbal<<endl;
    }
    void diposit(){
        int money;
        int n1;
        cout<<"Enter no for diposit money: ";
        cin>>n1;
        money=totalbal+n1;
        cout<<"Total balance of the Account:"<<money<<endl;
    }
    void display(){

        cout<<"current Balance is: "<<p0001<<endl;
    }
};/*
class Totalbill:public Withdraw{
    public:
    void display(){
        cout<<"current Balance is: "<<totalbal<<endl;
    }
};
*/
void pindata()
{
    int i, pin;
    cout << "Enter your pinno:";
    cin >> pin;
    if (pin == 0001)
    {
        cout << "Payal-20000" << endl;
    }
    else if (pin == 0002)
    {
        cout << "kunal-10000" << endl;
    }
    else
    {
        cout << "Accocunt no is not available";
    }
}
int main()
{
    int n;
    Withdraw s1;
   // Totalbill s2;
    pindata();
    cout << "1 for withdraw" << endl;
    cout << "2 for diposit" << endl;
    cout << "3 for balance check" << endl;
    cout << "0 for exit" << endl;

    while (n != 0)
    {
        cout << "Enter your choice: ";
        cin >> n;
        switch (n)
        {
        case 1:
           
            s1.printdata();
            break;
        case 2:
            s1.display();
            break;
        case 3:
            s1.diposit();
            break;
    
        default:
            cout<<"choice is not accepatable"<<endl;
            break;
        }
    }
}