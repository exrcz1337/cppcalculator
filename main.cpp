#include <iostream>
#include <string>
using namespace std;

int main () {
    int num1, num2, result = 0;
    char znak;
    cout << "Введите 1 число" << endl;
    cin >> num1;
    cout << "Введите 2 число" << endl;
    cin >> num2;
    cout << "Введите знак" << endl;
    cin >> znak;
    
    switch (znak) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
    }

    cout << "Результат: " << result << endl;
    return 0;
}