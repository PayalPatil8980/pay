#include<iostream>
#include<string>
using namespace std;

class Restro{
    private:
    int i;
    string menuitem[4]={"pizzza","Burger","Cocola","friess"};
    float menuprice[4]={8.99, 5.49, 1.99, 2.99};
    int menuquanty[4]={0,0,0,0};
    float totalbill=0.0;
    public:
    void view(){
        for(i=0;i<4;i++){
            cout<<i+1<<"."<<menuitem[i]<<" -"<<" $"<<menuprice[i]<<endl;
        }
    }
    void take(){
        int ch,qty;
        cout<<"Enter the item no to order(1-4): ";
        while(true){
            cin>>ch;
            if(ch==0) break;
            if(ch<1 ||ch>4){
                cout<<"invalid choice";
                continue;
            }
            cout<<"Enter the quantity "<<menuitem[ch-1]<<":";
            cin>>qty;
            menuquanty[ch-1]=menuquanty[ch-1]+qty;
            totalbill=totalbill+menuprice[ch-1]*qty;
            cout << "Item added! Order another or enter 0 to finish: ";

        }
        

    }
    void bill(){
        cout << "\n--- Final Bill ---\n";
        cout << "Item         Qty   Price   Total\n";
        cout << "--------------------------------------------\n";
        for(i=0;i<4;i++){
            float itemtotal=menuprice[i]*menuquanty[i];
            cout<<menuitem[i]<<"       "<<menuquanty[i]<<"        "<<"$"<<menuprice[i]<<"       "<<"$"<<itemtotal<<"\n";
        }
        cout<<"----------------------------------------------"<<endl;
        cout<<"Total bill is: "<<"$"<<totalbill<<endl;
    }
};
int main(){
    int n;
    Restro s1;
    cout<<"1 for View menu"<<endl;
    cout<<"2 for Take Order"<<endl;
    cout<<"3 for Final Bill"<<endl;
    cout<<"0 for Exit"<<endl;

    while (n!=0)
    {
        cout<<"Enter your choice: ";
        cin>>n;

        switch (n)
        {
        case 1:
            s1.view();
            break;
        case 2:
            s1.take();
            break;
        case 3:
            s1.bill();
            break;
        default:
            break;
        }
    }
    
}