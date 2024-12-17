#include<iostream>
#include<string>
using namespace std;

class Login{
    string username;
    string password;
    string confirmpassword;
    public:
    void signup(){
        do{
        cout<<"Enter username: ";
        cin>>username;
        int lettercount=0,digitcount=0,alphacount=0;
        for(char c:username){
            if(isalpha(c))lettercount++;
            if(isdigit(c))digitcount++;
            if(c=='@') alphacount++;
        }
        if(lettercount>0 && digitcount>0 && alphacount>0){
            break;
        }
        else{
            cout<<"you must Enter character,@,numbers in username please try again!"<<endl;
        }

        }while (true);
        cout<<"Enter password: ";
        cin>>password;
        cout<<"confirm your password:";
        cin>>confirmpassword;
        if (confirmpassword==password){
            cout<<"Your account created successfully!"<<endl;   
        }
        else{
            cout<<"fill password correctly!"<<endl;
        }
        
        
        
    }
    void login(){
        string inputusername,inputpassword;
        cout<<"Enter username: ";
        cin>>inputusername;
        cout<<"Enter Password: ";
        cin>>inputpassword;
        if(inputusername==username && inputpassword==password){
            cout<<"you are logged in successfully!"<<endl;
        }
        else{
            cout<<"incorrect username or password!"<<endl;
        }
    }
    void forgetpassword(){
        string inputusername;

        cout<<"Enter the username: ";
        cin>>inputusername;

        if(inputusername==username){
            cout<<"your password is: "<<password<<endl;
        }
        else{
            cout<<"Invalid username first signup!"<<endl;
        }
    }
    void changepass(){
        string inputusername,newpassword;
        cout<<"Enter username: ";
        cin>>inputusername;

        if(inputusername==username){
            
            cout<<"Enter your new password: ";
            cin>>newpassword;
            password=newpassword;
            cout<<"your password changed: "<<password<<endl;
        }
        else{
            cout<<"please enter the correct username"<<endl;
        }
    }
};
int main(){
    int i,n;
    Login l1;
    cout<<"-------------------------"<<endl;
    cout<<"1 for signup"<<endl;
    cout<<"2 for login"<<endl;
    cout<<"3 for forgetpassword"<<endl;
    cout<<"4 for change password"<<endl;
    cout<<"5 for Logout"<<endl;
    cout<<"0 for Exit"<<endl;
    cout<<"-------------------------"<<endl;
    while(n!=0){
        cout<<"Enter your choice: ";
        cin>>n;

        switch (n)
        {
        case 1:
            l1.signup();
            break;
        case 2:
            l1.login();
            break;
        case 3:
            l1.forgetpassword();
            break;
        case 4:
            l1.changepass();
            break;
        default:
            cout<<"please enter the right choice"<<endl;
            break;
        }
    }
}