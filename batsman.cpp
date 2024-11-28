#include<iostream>
using namespace std;

class Bat{
    private:
    int bcode;
    char bname[20];
    int innings,notout,runs;
    float batavg;
    int calcavg(int innings,int notout,int runs);
    public:
    void readdata(){
        cout<<"Enter the Bcode:";
        cin>>bcode;
        cout<<"Enter the Bname:";
        cin>>bname;
        cout<<"Enter the innings:";
        cin>>innings;
        cout<<"Enter the Notot:";
        cin>>notout;
        cout<<"Enter the runs:";
        cin>>runs;
    }
    void displaydata(){
        cout<<"Bcode: "<<bcode<<endl;
        cout<<"Bname: "<<bname<<endl;
        cout<<"Innings: "<<innings<<endl;
        cout<<"Notout: "<<notout<<endl;
        cout<<"Runs: "<<runs<<endl;
        batavg=calcavg(innings,notout,runs);
        cout<<"Average: "<<batavg<<endl;
    }

};

int Bat::calcavg(int innings,int notout,int runs){
    batavg=runs/(innings-notout);
    return batavg;
}
int main(){
    Bat s1;
    s1.readdata();
    s1.displaydata();
}