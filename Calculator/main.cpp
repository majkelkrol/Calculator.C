//
//  main.cpp
//  Calculator
//
//  Created by Majkel on 15/10/2021.
//

#include <iostream>
using namespace std;

int main() {
    
    int numb1, numb2;
    char q;

    cout << "Enter first number: ";
    cin >> numb1;
    
    cout << "Enter operator: ";
    cin >> q;
    
    cout << "Enter secound number: ";
    cin >> numb2;
    
    int result;
    if (q == '+') {
        result = numb1 + numb2;
    } else if (q == '-') {
        result = numb1 - numb2;
    } else if (q == '*') {
        result = numb1 * numb2;
    } else if (q == '/') {
        result = numb1 / numb2;
    } else {
        cout << "Invalid operation";
    }
    cout << "The result: " << result << endl;

    return 0;
}
