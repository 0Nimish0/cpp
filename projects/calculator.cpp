#include <iostream>

int main (){

    char op;
    double num1;
    double num2;
    double result;

    std:: cout << " Enter the oprater : ( +, -, *, / ) : " ;
    std:: cin >> op ;

    std:: cout << " Enter a first No : ";
    std:: cin >> num1;

    std:: cout << " Enter a second No : ";
    std:: cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2 ;
        std:: cout << " The result is : " << result ;
        break;

    case '-':
        result = num1 - num2 ;
        std:: cout << " The result is : " << result ;
        break;

    case '*':
        result = num1 * num2 ;
        std:: cout << " The result is : " << result ;
        break;

    case '/':
        result = num1 / num2 ;
        std:: cout << " The result is : " << result ;
        break;
    
    default:
        std:: cout << " Please enter a valid oprater ";
        break;
    }

    return 0 ;
}