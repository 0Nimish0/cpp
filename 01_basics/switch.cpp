#include <iostream>

int main()
{

    int month;
    std::cout << " Enter a month ( 1 - 12 ) : ";
    std::cin >> month;

    switch (month)
    {
        case 1 :
            std::cout << "Month is January";
            break;

        case 2 :
            std::cout << "Month is February";
            break;

        case 3 :
            std::cout << "Month is March";
            break;

        case 4 :
            std::cout << "Month is April";
            break;

        case 5 :
            std::cout << "Month is May";
            break;

        case 6 :
            std::cout << "Month is June";
            break;

        case 7 :
            std::cout << "Month is July";
            break;

        case 8 :
            std::cout << "Month is Augest";
            break;

        case 9 :
            std::cout << "Month is September";
            break;

        case 10 :
            std::cout << "Month is October";
            break;

        case 11 :
            std::cout << "Month is November";
            break;

        case 12 :
            std::cout << "Month is December";
            break;
        
        default:
            std:: cout << " please enter a month's no ( 1 - 12 )";
    }

    return 0;
}