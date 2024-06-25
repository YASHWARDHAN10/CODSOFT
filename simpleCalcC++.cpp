#include<iostream>
using namespace std;

int main() {
    int a, b;
    int choice;
    char c;
    cout << "enter the value of the 1st number:";
    cin >> a;
    cout << "enter the value of the 2nd number:";
    cin >> b;
    cout << "The Operations that can be performed are:";
    cout << "\n1.) Addition \n2.)Subtraction\n3.) Multiplication \n4.)Division";

    cout << "\nEnter the Index of the Operation to be performed:";
    cin >> choice;
   
    switch (choice) {
    case 1:
        cout << "Addition is:" << a + b;
        break;
    case 2:
        cout << "Subtraction is:" << a - b;
        break;
    case 3:
        cout << "Multiplication is:" << a * b;
        break;
    case 4:
        cout << "Division is:" << a / b;
        break;
    }

}