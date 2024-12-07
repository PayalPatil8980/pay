#include <iostream>
using namespace std;

class Flight
{
private:
    int fno;
    char mdesc[30];
    float mdistance;
    float fuel;
    float calfuel(float mdistance);

public:
    void fdinfo()
    {
        cout << "Enter the fno:";
        cin >> fno;
        cout << "Enter the mdesc:";
        cin >> mdesc;
        cout << "Enter the mdistance:";
        cin >> mdistance;
    }
    void showinfo()
    {
        cout << "Fno: " << fno << endl;
        cout << "Mdesc: " << mdesc << endl;
        cout << "Mdistance: " << mdistance << endl;
        cout << "fuel is:" << calfuel(mdistance);
    }
};
float Flight::calfuel(float mdistance)
{
    if (mdistance <= 1000)
    {
        return 500;
    }
    else if (mdistance < 1000 && mdistance >= 2000)
    {
        return 1100;
    }
    else
    {
        return 2200;
    }
}

int main()
{
    Flight s1;
    s1.fdinfo();
    s1.showinfo();
}