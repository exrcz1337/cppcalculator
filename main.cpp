#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main () {
    float num1, num2, result = 0;
    char znak;
    bool isNumber = true;
    cout << "Введите число: " << endl;
    while (!(std::cin >> num1)) {
        std::cin.clear(); 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Вы ввели не число, попробуйте еще раз: " << endl;
    }
    cout << "Введите 2 число: " << endl;
    while (!(std::cin >> num2)) {
        std::cin.clear(); 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Вы ввели не число, попробуйте еще раз: " << endl;
    }
   
    cout << "Введите знак: " << endl;                                                                                                                                                                 
    cin >> znak;
    while (znak != '/' && znak != '*' && znak != '+' && znak != '-') {
        cout << "Вы ввели что то помимо /*-+, попробуйте еще раз: " << endl;
        cin >> znak;
    }
    
    switch (znak) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '/':
            if (num2 == 0) {
                cout << "На 0 делить нельзя!" << endl;
            } else {
                result = num1 / num2;
            }
            break;
        case '*':
            result = num1 * num2;
            break;
    }
    cout << "Результат: " << result << endl;
    return 0;
}