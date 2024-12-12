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
            if(bal1>n1){
                bal1=bal1-n1;
                cout<<"------------------------"<<endl;
                cout<<"Remain Balace: "<<bal1<<endl;
                cout<<"------------------------"<<endl;
            }
            else{
                cout<<"you don't have inuf balance"<<endl;
            }
        //totalbal=bal1-n1;
        }
        else if(pin==p002){
            cout<<"Enter the Amouunt for withdraw: ";
            cin>>n1;
            if(bal2>n1){
                bal2=bal2-n1;
                cout<<"------------------------"<<endl;
                cout<<"Remain Balance: "<<bal2<<endl;
                cout<<"------------------------"<<endl;
            }
            else{
                cout<<"you don't have inuf balance"<<endl;
            }
        //totalbal=bal2-n1;
        }
        else if(pin==p003){
            cout<<"Enter the Amouunt for withdraw: ";
            cin>>n1;
            if(bal3>n1){
                bal3=bal3-n1;
                cout<<"------------------------"<<endl;
                cout<<"Remain Balance: "<<bal3<<endl;
                cout<<"------------------------"<<endl;
            }
            else{
                cout<<"you don't have inuf balance";
            }
        //totalbal=bal3-n1;
        }
        

    }
    void diposit(int pin){
        int n2;
        if(pin==p001){
            cout<<"Enter the Amouunt for diposit: ";
            cin>>n2;
            bal1=bal1+n2;
            cout<<"------------------------"<<endl;
            cout<<"diposit Money is: "<<n2<<endl;
            cout<<"------------------------"<<endl;
        }
        else if(pin==p002){
            cout<<"Enter the Amouunt for diposit: ";
            cin>>n2;
            bal2=bal2+n2;
            cout<<"------------------------"<<endl;
            cout<<"diposit Money is: "<<n2<<endl;
            cout<<"------------------------"<<endl;
        }
        else if(pin==p003){
            cout<<"Enter the Amouunt for diposit: ";
            cin>>n2;
            bal3=bal3+n2;
            cout<<"------------------------"<<endl;
            cout<<"diposit Money is: "<<n2<<endl;
            cout<<"------------------------"<<endl;
        }
        
    }
    void balance(int pin){
        
        if(pin==p001){
            //cout<<"------------------------"<<endl;
            cout<<"current balance is :"<<bal1<<endl;
            cout<<"------------------------"<<endl;
        }
        else if(pin==p002){
            //cout<<"------------------------"<<endl;
            cout<<"current balance is :"<<bal2<<endl;
            cout<<"------------------------"<<endl;
        }
        else if(pin==p003){
            //cout<<"------------------------"<<endl;
            cout<<"current balance is :"<<bal3<<endl;
            cout<<"------------------------"<<endl;
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
    cout<<"------------------"<<endl; 
    cout<<"1 for withdraw"<<endl;
    cout<<"2 for Diposit"<<endl;
    cout<<"3 for Blance Check"<<endl;
    cout<<"4 for Exit"<<endl;
    cout<<"------------------"<<endl;
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