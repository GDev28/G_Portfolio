#include <iostream>
#include <string>
#include <ctime>

int main(){

    int tries = 10;
    int num;
    int guess;
    std::string where = "???";
   
    srand(time(0));
    num = (rand() % 100) + 1;
    std::cout << num;

    for(tries; tries > 0; tries--) {
        std::cout << "The number is " << where << " than the last try" << "\n";
        std::cout << "You only have " << tries << " tries left!" << "\n";      
        std::cout << "What is your guess? " << "\n";
        std::cout << ">> ";
        std::cin >> guess;


        if(num == guess){
            std::cout << "You got the right anwser!" << "\n";
            std::cout << "Your accuracy " << (tries - (10 - tries)/tries) * 10 << "%";
            break;
        }
        else{
            if(num < guess){
                where = "lower";
            }
            else{
                where = "higher";
            }

        }
    }




    return 0;
}

