
#include <stdlib.h>
#include <iostream>

int getNumber() {
    int x{0};
    std::cin >> x;
    return x;
}

int main()
{
    int trys{0}, nSecret{}, x{11};

    std::cout << "Hello, ";

    srand(time(NULL));
    nSecret = rand() % 10 + 1;

    do {
        
        std::cout << "I'm thinking of a full number between 1 and 10, Take a guess what it is: ";

        do {
            x = getNumber();
            trys++;
            if (x < nSecret) {
                std::cout << '\n' << "Too low, try again: ";
            }
            else if (x > nSecret) {
                std::cout << '\n' << "Too high, try again: ";
            }
        } while (x != nSecret);

        std::cout << '\n' << "YOU WIN!!!!" << '\n';

        if (trys > 1) {
            std::cout << '\n' << "This has taken you " << trys << " trys to get the correct number." << '\n';
        }
        else {
            std::cout << '\n' << "HOW DID YOU DO IT IN ONE TRY!?" << '\n';
        }

        trys = 0;
        nSecret = rand() % 10 + 1;
        std::cout << '\n' << "Would you like to play again? Yes - 1 / No - 0 : ";
        x = getNumber();
        std::cout << '\n' << '\n' << '\n';

    } while (x >= 1);

    std::cout << "Goodbye. \n";

    return 0;
}
