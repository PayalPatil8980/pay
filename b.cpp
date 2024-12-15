#include<iostream>
using namespace std;

class Bank{
    private:
    int pins[4]={1,2,3,4};
    int balance[4]={100000,80000,40000,50000};
    string name[4]={"Krishna","Payal","Namdev","Kunal"};
    public:
    void withdraw(int pin){
        int i,amount;
            for(i=0;i<4;i++){
            if(pins[i]==pin){
                
                cout<<"Enter the amount for withdraw:";
                cin>>amount;

                if(amount>0 && balance[i]>=amount){
                    balance[i]=balance[i]-amount;
                    cout << "--------------------------------------------------" << endl;
                    cout<<"withdraw successfull! Remaining Balance: "<<balance[i]<<endl;
                    cout << "--------------------------------------------------" << endl;
                }
                else{
                    cout<<"You don't have inuf balance"<<endl;

                }
                return;
            }
           
    
        }
        cout<<"Invalid Pin!"<<endl;
    }
    void diposit(int pin){
        int i,amount1;
        for(i=0;i<4;i++){
        if(pins[i]==pin){

            cout<<"Enter the amout for diposit:";
            cin>>amount1;

            if(amount1>0){
                balance[i]=balance[i]+amount1;
                cout << "----------------------------------------------------------" << endl;
                cout<<"Amount diposit Successfully! your current Balance: "<<balance[i]<<endl;
                cout << "----------------------------------------------------------" << endl;
            }
            else{
                cout<<"Enter the relevent amount!"<<endl;
            }
            return;
        }
      
       
        }
        cout<<"Invalid Pin!"<<endl;
    }
    void bal(int pin){
        int i;
        for(i=0;i<4;i++){
            if(pins[i]==pin){
                cout << "------------------------------" << endl;
                cout<<"Account Holder Name: "<<name[i]<<endl;
                cout<<"Total balance is: "<<balance[i]<<endl;
                cout << "------------------------------" << endl;
                return;
            }
            
        }

        cout<<"Invalid pin"<<endl;
        
    }
};

int main(){

    int n;
    int pin;
    Bank s1;
    cout<<"Enter the pin: ";
    cin>>pin;
    cout << "------------------" << endl;
    cout << "1 for withdraw" << endl;
    cout << "2 for Diposit" << endl;
    cout << "3 for Blance Check" << endl;
    cout << "0 for Exit" << endl;
    cout << "------------------" << endl;
    while (n!=0)
    {
        cout<<"Enter your choice: ";
        cin>>n;

        switch (n)
        {
        case 1:
            s1.withdraw(pin);
            break;
        case 2:
            s1.diposit(pin);
            break;
        case 3:
            s1.bal(pin);
            break;
        case 0:
            cout<<"Thanks for visiting!";
            break;
        default:
            break;
        }
    }
    
}