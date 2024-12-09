#include <iostream>
using namespace std;

class Numbers {
private:
    int num1, num2, num3;

public:
    // Constructor to initialize the numbers
    Numbers(int n1, int n2, int n3) {
        num1 = n1;
        num2 = n2;
        num3 = n3;
    }

    // Declare friend function
    friend int findLargest(Numbers n);
};

// Friend function to find the largest of three numbers
int findLargest(Numbers n) {
    int largest = n.num1;

    if (n.num2 > largest) {
        largest = n.num2;
    }

    if (n.num3 > largest) {
        largest = n.num3;
    }

    return largest;
}

int main() {
   
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    Numbers n(a, b, c);

    int largest = findLargest(n);


    cout << "The largest number is: " << largest << endl;

    return 0;
}
