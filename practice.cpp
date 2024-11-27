#include<iostream>
using namespace std;

int main(){
    int i,j,arr[3][3],sum=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"Enter the elements: "<<i<<"and"<<j;
            cin>>arr[i][j];
        }
        cout<<"\n";
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum+=arr[i][j];
        }
    }
    cout<<"The sum of elements of matrix: "<<sum;
}