#include <iostream>
#include <ctime>
using namespace std;

class Library {
    int id[4] = {1, 2, 3, 4};                     // Book IDs
    string bname[4] = {"java", "html", "css", "react"}; // Book names
    string username;                             // Signed-up username
    string password;                             // Signed-up password
    string inputusername;                        // Login username
    string inputpassword;                        // Login password
    bool isLoggedIn = false;                     // Login status

    string users[10];                            // Users who issued books
    string issuedBooks[10];                      // Issued books
    time_t issueTimes[10];                       // Time books were issued
    bool returned[10] = {false};                 // Tracks if a book is returned
    int totalIssued = 0;                         // Total issued books counter

public:
    // Function to display book information
    void view() {
        cout << "Book Information:" << endl;
        for (int i = 0; i < 4; i++) {
            cout << id[i] << " - " << bname[i] << endl;
        }
    }

    // Function to sign up
    void signup() {
        cout << "Enter a username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;
        cout << "Confirm your password: ";
        string confirmpassword;
        cin >> confirmpassword;

        if (confirmpassword == password) {
            cout << "Your account has been created successfully!" << endl;
        } else {
            cout << "Passwords do not match! Please try again." << endl;
        }
    }

    // Function to log in
    void login() {
        cout << "Enter your username: ";
        cin >> inputusername;
        cout << "Enter your password: ";
        cin >> inputpassword;

        if (inputusername == username && inputpassword == password) {
            cout << "You are logged in successfully!" << endl;
            isLoggedIn = true;
        } else {
            cout << "Incorrect username or password!" << endl;
            isLoggedIn = false;
        }
    }

    // Function to issue a book
    void take(int bid) {
        if (!isLoggedIn) {
            cout << "Access Denied! You must log in first to issue a book." << endl;
            return;
        }

        bool bookFound = false;
        for (int i = 0; i < 4; i++) {
            if (id[i] == bid) {
                cout << "Book issued successfully: " << bname[i] << endl;
                users[totalIssued] = inputusername;
                issuedBooks[totalIssued] = bname[i];
                issueTimes[totalIssued] = time(0); // Store the current time
                returned[totalIssued] = false;    // Mark as not returned
                totalIssued++;
                bookFound = true;
                break;
            }
        }

        if (!bookFound) {
            cout << "Invalid Book ID!" << endl;
        }
    }

    // Function to return a book
    void returnBook(int bid) {
        if (!isLoggedIn) {
            cout << "Access Denied! You must log in first to return a book." << endl;
            return;
        }

        bool bookFound = false;
        for (int i = 0; i < totalIssued; i++) {
            if (issuedBooks[i] == bname[bid - 1] && users[i] == inputusername && !returned[i]) {
                time_t now = time(0);
                double minutesPassed = difftime(now, issueTimes[i]) / 60; // Calculate time difference in minutes

                cout << "\nReturn Information:" << endl;
                cout << "User: " << users[i] << endl;
                cout << "Book: " << issuedBooks[i] << endl;
                cout << "Time Elapsed: " << minutesPassed << " minutes" << endl;

                if (minutesPassed > 3) { // Check if time exceeded 3 minutes
                    double fine = (minutesPassed - 3) * 10; // Fine calculation
                    cout << "Book returned late! You have a fine of Rs. " << fine << endl;
                } else {
                    cout << "Book returned on time. No fine!" << endl;
                }

                returned[i] = true; // Mark the book as returned
                bookFound = true;
                break;
            }
        }

        if (!bookFound) {
            cout << "No such issued book found for you, or it has already been returned!" << endl;
        }
    }

    // Function to show issued books
    void showIssuedBooks() {
        cout << "\nBooks Issued by Users:" << endl;
        for (int i = 0; i < totalIssued; i++) {
            if (!returned[i]) { // Show only books not yet returned
                cout << "User: " << users[i] << " - Book: " << issuedBooks[i] << endl;
            }
        }
    }
};

int main() {
    int choice = -1;
    int bid;
    Library s1;

    cout << "Welcome to the Library System!" << endl;
    cout << "1. View Book Information" << endl;
    cout << "2. Issue a Book" << endl;
    cout << "3. Sign Up" << endl;
    cout << "4. Log In" << endl;
    cout << "5. Show Issued Books" << endl;
    cout << "6. Return a Book" << endl;
    cout << "0. Exit" << endl;

    while (choice != 0) {
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                s1.view();
                break;
            case 2:
                cout << "Enter Book ID to issue: ";
                cin >> bid;
                s1.take(bid);
                break;
            case 3:
                s1.signup();
                break;
            case 4:
                s1.login();
                break;
            case 5:
                s1.showIssuedBooks();
                break;
            case 6:
                cout << "Enter Book ID to return: ";
                cin >> bid;
                s1.returnBook(bid);
                break;
            case 0:
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
                break;
        }
    }

    return 0;
}
