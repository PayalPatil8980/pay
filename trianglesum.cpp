#include<iostream>
using namespace std;
int main(){
    int i,j,arr[3][3],upper=0,lower=0,diagonal=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"Enter the elements "<<i<<" and "<<j<<":";
            cin>>arr[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i<j){
                upper+=arr[i][j];
            }
            else if(i>j){
                lower+=arr[i][j];
            }
            else{
                diagonal+=arr[i][j];
            }
        }
    }
    cout<<"Upper: "<<upper<<endl;
    cout<<"lower: "<<lower<<endl;
    cout<<"Diagonal: "<<diagonal<<endl;
}