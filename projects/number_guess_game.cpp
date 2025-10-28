#include <iostream>
#include <ctime>

int main ()
{
    int num;
    int guess;
    int tries{}; // {} -  tells 'tries' value is zero 

    srand(time(NULL));
    num = (rand () % 100) + 1 ;

    std :: cout << " ******* Game start ****** '\n' ";

    do{
        std:: cout << " Enter your no (1 - 100) : ";
        std:: cin >> guess;
        tries++;

        if( num > guess){
            std::cout << " no is too small '\n'" ;
        }
        else if( num < guess){
            std::cout << " no is too big '\n'" ;
        }
        else{
            std::cout << " correct guess ** no of tries " << tries << '\n';
        }

    } while (guess != num);

    return 0;
    
}