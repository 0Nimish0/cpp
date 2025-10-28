#include <iostream>

int main ()
{
    int rows;
    int columns;
    char symbol;

    std:: cout << " Enter no of rows : ";
    std:: cin >> rows;

    std:: cout << " Enter no of columns : ";
    std:: cin >> columns;

    std:: cout << " Enter no of symbol : ";
    std:: cin >> symbol;


    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= columns; j++){
            std:: cout << symbol;
        }
        std:: cout << '\n'; 
    }

    return 0;
}