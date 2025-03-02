#include <iostream>
#include <time.h>
#include <random>   
#include <string>

#define RED "\033[1m\033[31m" 
#define WHITE "\033[0m"
#define GREEN "\033[1m\033[32m"

void PlayGame(bool isSinglePlayer);
void MultiPlayerMode();
bool GameMode();

int main(){
    srand(time(NULL));


    PlayGame(GameMode());

    return 0;
}
void SinglePlayerMode() {
    int player, computer;
    int playerScore = 0;
    int ComputerScore = 0;
    int randomNumber;
    char userInput;
    char isPlayingAgain = true;

    while (isPlayingAgain = true) {

    std::cout << "You:\n1-Rock\n2-Paper\n3-Scissors\nchoose one: ";


    while(std::cin >> player,player !=1 && player !=2 && player !=3){

        std::cin.clear();
         std::cin.ignore();
        std::cerr << RED "Choose again, correctly. : " WHITE;
    }
    switch(player){
        case 1:
        player = 1;
            std::cout << GREEN "You" << WHITE " are now rock  \\\\ "  ;
            break;
        case 2:
        player = 2;
            std::cout << GREEN "You" << WHITE " are now paper  \\\\ "  ;
            break;
        case 3:
        player = 3;
            std::cout << GREEN "You" << WHITE " are now scissors  \\\\ "  ;
            break;
    }

        randomNumber = (rand() % 3) + 1;
        computer = randomNumber;

 switch(computer){
        case 1:
            computer = 1;
            std::cout << RED "Computer" << WHITE " is rock\n";
            break;
        case 2:
            computer = 2;
            std::cout << RED "Computer" << WHITE " is paper\n";
            break;
        case 3:
            computer = 3;
            std::cout << RED "Computer" << WHITE " is scissors\n";
            break;
 }
        if (player == computer){

            std::cout << "\n\033[1m\033[33mTie!\n\n" WHITE;
            player = 0;
        }

        else if((player == 1) && (computer == 3)){
            playerScore+=1;
            std::cout << GREEN "\nyou win!" WHITE << "   Your score: " << GREEN << playerScore << WHITE << "\n\n";
            player = 0;
        }
        else if ((player == 3) && (computer == 2)){
            playerScore+=1;
            std::cout << GREEN "\nyou win!" WHITE << "   Your score: " << GREEN << playerScore << WHITE << "\n\n";
            player = 0;

        }
        else if((player == 2) && (computer == 1)){
            playerScore+=1;
            std::cout << GREEN "\nyou win!" WHITE << "   Your score: " << GREEN << playerScore << WHITE << "\n\n";
            player = 0;

        }
        else {
            ComputerScore+=1;
            
            std::cout << RED "\nyou lost!" WHITE << "   Computer score: " << RED << ComputerScore << WHITE << "\n\n";
            player = 0;

        }
         if (playerScore == 5){
                bool looped = true;
                std::cout << "You won the game!   Final score : "<< "Player: " GREEN << playerScore << WHITE " \\\\ Computer: " << RED << ComputerScore << WHITE "\n Do you want to play another game? \033[1m\033[33mY/N " WHITE;
                while (looped == true){
                std::cin >> isPlayingAgain;

        switch (isPlayingAgain) {

            case 'y': case 'Y':
                std::cout << "\n\n\n";
                looped = false;
                playerScore = 0;
                ComputerScore = 0;
                break;
            case 'n': case 'N':
                std::cout << "\nThanks for playing!\n\n";
                isPlayingAgain = false;
                looped = false;
                return PlayGame(GameMode());
            default:
                std::cerr << "Invalid input. try again.";
                std::cin.clear();
                std::cin.ignore();
                break;
        }
        }
            }

    if (ComputerScore == 5){
        bool looped = true;
        std::cout << "You lost the game!   Final score : "<< "Player: " GREEN << playerScore << WHITE " \\\\ Computer: " << RED << ComputerScore << WHITE "\n Do you want to play another game? \033[1m\033[33mY/N " WHITE;
        while (looped == true){std::cin >> isPlayingAgain;
        switch (isPlayingAgain) {

            case 'y': case 'Y':
                std::cout << "\n\n\n";
                looped = false;
                playerScore = 0;
                ComputerScore = 0;
                break;
            case 'n': case 'N':
                std::cout << "\nThanks for playing!\n\n";
                isPlayingAgain = false;
                looped = false;
                return PlayGame(GameMode());
            default:
                std::cerr << "Invalid input. try again.";
            

        }
        }
        }
    }
    }
    

void PlayGame(bool isSinglePlayer) {
    if (isSinglePlayer) {
        SinglePlayerMode();
    } else {
        MultiPlayerMode();
    }
}



void MultiPlayerMode() {
    int player1,player2;
    int player1Score = 0;
    int player2Score = 0;
    char retry = 'Y';

    while (retry == 'Y') {
    std::cout << "Player 1:\n\n1-Rock\n2-Paper\n3-Scissors\nchoose one: ";


    while(std::cin >> player1,player1 !=1 && player1 !=2 && player1 !=3){

        std::cin.clear();
        std::cin.ignore();
        std::cerr << RED "Choose again, correctly. : " WHITE;
    }
    switch(player1){
        case 1:
            std::cout << "You are now rock\n";
            break;
        case 2:
            std::cout << "You are now paper\n";
            break;
        case 3:
            std::cout << "You are now scissors\n";
            break;
    }

    std::cout << "Player 2:\n\n1-Rock\n2-Paper\n3-Scissors\nchoose one: ";
    while(std::cin >> player2, player2 !=1 && player2 !=2 && player2 !=3){
        std::cin.clear();
        std::cin.ignore();
        std::cerr << RED "Choose again, correctly. : " WHITE;
        }

        switch(player2){

            case 1:
                std::cout << "You are now rock\n";
                break;
            case 2:
                std::cout << "You are now paper\n";
                break;
            case 3:
                std::cout << "You are now scissors\n";
                break;
        }

        if (player1 == player2){

            std::cout << "\033[1m\033[33mTie!\n" WHITE;
            player1 = 0;
            player2 = 0;
        }

        else if((player1 == 1) && (player2 == 2)){
            player2Score++;
            std::cout << GREEN "Player 2 wins!\n" WHITE;
            player1 = 0;
            player2 = 0;
        }
        else if ((player1 == 2) && (player2 == 3)){
            player2Score++;
            std::cout << GREEN "Player 2 wins!\n" WHITE;
            player1 = 0;
            player2 = 0;
        }
        else if((player1 == 3) && (player2 == 1)){
            player2Score++;
            std::cout << GREEN "Player 2 wins!\n" WHITE;
            player1 = 0;
            player2 = 0;
        }
        else {
            player1Score++;
            std::cout << GREEN "Player 1 wins!\n" WHITE;
            player1 = 0;
            player2 = 0;
        }

        if (player1Score == 5){

        std::cout << "Player 1 won!\n Do you want to play another game? \033[1m\033[33mY/N\033[0m\n";
        std::cin >> retry;
        switch (retry) {

            case 'y': case 'Y':
                player1Score = 0;
                player2Score = 0;
                retry = 'Y';
                std::cout << "\n\n\n\n";
                break;
            case 'n': case 'N':
                std::cout << "Thanks for playing!\n\n";
                return PlayGame(GameMode());
        }
            }

    if (player2Score == 5){

        std::cout << "Player 2 won!!\n Do you want to play another game? \033[1m\033[33mY/N\033[0m\n";
        std::cin >> retry;
        switch (retry) {

            case 'y': case 'Y':
                retry = 'Y';
                player1Score = 0;
                player2Score = 0;
                std::cout << "\n\n\n\n";
                break;
            case 'n': case 'N':
                std::cout << "Thanks for playing!\n\n";
                return PlayGame(GameMode());
        }
    }
}
}
bool GameMode() {
    bool gameModeS;
    bool isInLoop = true;
    char userInput;

    std::cout << "Single player or Mulitplayer (or quit)? (S/M/Q): ";
    while (isInLoop) {
        std::cin >> userInput;
        switch (userInput)
        {
            case 'S': case 's':
                gameModeS = true;
                isInLoop = false;
                break;
            case 'M': case 'm':
                gameModeS = false;
                isInLoop = false;
                break;
            case 'Q': case 'q':
                isInLoop = false;
                std::cout << "\nBye!\n";
                system ("pause");
                exit(0);
            default:
                std::cout << RED "Invalid option, try again\n" WHITE;
                break;
        }
    }
return gameModeS;
}