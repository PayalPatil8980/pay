#include<iostream>
using namespace std;

class Bank{
    int p001=001;
    int p002=002;
    int p003=003;
    int bal1=20000;
    int bal2=30000;
    int bal3=40000;
    public:
     int n1,n2,n3,m1,m3,totalbal,diposit1;
    void with(int pin){
       
        if(pin==p001){
            cout<<"Enter the Amouunt for withdraw: ";
            cin>>n1;
        totalbal=bal1-n1;
        }
        else if(pin==p002){
            cout<<"Enter the Amouunt for withdraw: ";
            cin>>n1;
        totalbal=bal2-n1;
        }
        else if(pin==p003){
            cout<<"Enter the Amouunt for withdraw: ";
            cin>>n1;
        totalbal=bal3-n1;
        }
        cout<<"Total is"<<totalbal<<endl;

    }
    void diposit(int pin){
        int n2;
        if(pin==p001){
            cout<<"Enter the Amouunt for diposit: ";
            cin>>n2;
        diposit1=bal1+n2;
        }
        else if(pin==p002){
            cout<<"Enter the Amouunt for diposit: ";
            cin>>n2;
        diposit1=bal1+n2;
        }
        else if(pin==p003){
            cout<<"Enter the Amouunt for diposit: ";
            cin>>n2;
        diposit1=bal1+n2;
        }
        cout<<"Total deposit is: "<<diposit1<<endl;
    }
    void balance(int pin){
        
        if(pin==p001){
            if(bal1>totalbal){
                m1=bal1-totalbal;
                cout<<"Current balace is: "<<m1<<endl;
            }
            else if(bal1<diposit1){
                m3=bal1+diposit1;
                cout<<"current balance is: "<<m3<<endl;
            }
            else{
                cout<<"current balance is: "<<bal1;
            }
        }
        else if(pin==p002){
            if(bal1>totalbal){
                m1=bal1-totalbal;
                cout<<"Current balace is: "<<m1<<endl;
            }
            else if(bal1<diposit1){
                m3=bal1+diposit1;
                cout<<"current balance is: "<<m3<<endl;
            }
            else{
                cout<<"current balance is: "<<bal1<<endl;
            }
        }
        else if(pin==p003){
            if(bal1>totalbal){
                m1=bal1-totalbal;
                cout<<"Current balace is: "<<m1<<endl;
            }
            else if(bal1<diposit1){
                m3=bal1+diposit1;
                cout<<"current balance is: "<<m3<<endl;
            }
            else{
                cout<<"current balance is: "<<bal1<<endl;
            }
        }
    }
};
int main(){
    Bank b1;
    int n,pin;
    cout<<"Enter the pin: ";
    cin>>pin;
    if(pin==001){
            cout<<"Payal-20000"<<endl;
        }
    if(pin==002){
            cout<<"Kunal-30000"<<endl;
        }
    if(pin==003){
            cout<<"Krishna-40000"<<endl;
        }
        
    cout<<"1 for withdraw"<<endl;
    cout<<"2 for Diposit"<<endl;
    cout<<"3 for Blance Check"<<endl;
    cout<<"4 for Exit"<<endl;
    if(pin==001||pin==002||pin==003){
    while(n!=0){
        cout<<"Enter your choice:";
        cin>>n;
        switch (n)
        {
        case 1:
            b1.with(pin);
            break;
        case 2:
            b1.diposit(pin);
            break;
        case 3:
            b1.balance(pin);
            break;
        default:
            break;
        }
    }
    }
    else{
        cout<<"Accont not available";
    }
}