#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "singleton.cpp"

/*
    How to run: 
        g++ main.cpp -o main
        ./main
*/

int main()
{

    // starting program prompts
    std::vector<std::string> introduction;
    introduction.push_back("\nWelcome to my simple program to demo design patterns");
    introduction.push_back("1. How to use");
    introduction.push_back("2. Pick a design pattern");
    introduction.push_back("3. Further learning");
    introduction.push_back("4. Possible future updates");
    introduction.push_back("5. Quit");

    // further options
    std::vector<std::vector<std::string>> options;
    // how to
    options.push_back({"Pick a design pattern via option 2. Upon picking a pattern you will be presented with: a short paragraph explaining the pattern along with my perceived dificulty implementing it (Easy, Moderate, Difficult), an ascii UML diagram and written description, and options to further interact with the design pattern. Some will be very straight forward, others a lot more involved. Press any key to quit."});
    // list of patterns
    options.push_back({"0. Back", "1. Singleton", "2. Factory Method", "3. Abstract Factory", "4. Builder Pattern", "5. Prototype Pattern"});

    // user input
    int userSays = 0;


    for(int i = 0; i < introduction.size(); i++){
        std::cout << introduction[i] << std::endl;
    }

    while(userSays != 5) {
        std::cout << "\nYour Selection: ";
        std::cin >> userSays;
        Singleton& Number = Singleton::get_inst();
        
        switch (userSays) {
            case 1: 
                std::cout << "\n******************************************" << std::endl;
                std::cout << "Your current design pattern options are... " << std::endl;
                std::cout << "******************************************" << std::endl;
                for(int i = 0; i < options[1].size(); i++){
                    std::cout << options[1][i] << std::endl;
                }
                
                std::cout << "\nPick an option or quit: ";
                std::cin >> userSays;

                switch (userSays) {
                    case 1:
                        std::cout << "\n***Singleton***" << std::endl;
                        // demo code out
                        std::cout << "The singleton pattern only allows you to create one instance of the object that will be shared as long as the object's deconstructor is not called." << std::endl;
                        
                        break;
                    default:
                        std::cout << "Let's pretend this does things..." <<std::endl; 
                        break;
                }
                break;
            case 2: 
                std::cout << "Option 2" << std::endl;
                break;
            case 3: 
                std::cout << "Option 3" << std::endl;
                break;
            case 4: 
                std::cout << "Option 4" << std::endl;
                break;        
            }
    }

    return 0;
}