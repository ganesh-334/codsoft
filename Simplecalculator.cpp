#include <iostream>
using namespace std;
int main() {
    char opr;
    float n1, n2;
    cout << "Enter operator: +, -, *, /: ";
    cin >> opr;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    switch(opr) {
        case '+':
            cout << n1 << " + " << n2 << " = " << n1 + n2;
            break;
        case '-':
            cout << n1 << " - " << n2 << " = " << n1 - n2;
            break;
        case '*':
            cout << n1 << " * " << n2 << " = " << n1 * n2;
            break;
        case '/':
            if (n2 != 0)
                cout << n1 << " / " << n2 << " = " << n1 / n2;
            else
                cout << "Math Error!\(can\'t be divided by zero\)";
            break;
        default:
            cout << "Invalid operator";
            break;
    }

    return 0;
}
