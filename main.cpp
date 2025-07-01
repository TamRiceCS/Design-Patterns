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
    std::vector<std::string> introduction;
    std::vector<std::vector<std::string>> designPatterns;
    std::string userInput = "0"; // even though user input is a char, we are using a string as a safety measure in case users try to enter more than one char

    std::cout << "\n********************************************************************************************" << std::endl;
    introduction.push_back("Welcome to my design patterns demo, it is a simple demonstration of knowledge and skill.");
    introduction.push_back("Please pick a category of design pattern to explore any pattern under that category.");
    introduction.push_back("To quit this simple terminal program press \"q\", thank you!");

    for(int i = 0; i < introduction.size(); i++) {
        std::cout << introduction[i] << std::endl;
    }

    designPatterns.push_back({"1. Creational", "1. Singleton" , "2. Factory Method", "3. Abstract Factory", "4. Builder Pattern", "5. Prototype Pattern"});
    designPatterns.push_back({"2. Behavioral", "1. Chain of Responsibility", "2. Command Pattern", "3. Template Pattern", "4. Mediator Pattern", "5. Momento Pattern", "6. Observer Pattern", "7. State Pattern", "8. Strategy Pattern", "9. Visitor Pattern"});
    designPatterns.push_back({"3. Structural", "1. Adapter Pattern", "2. Bridge Pattern", "3. Composite Pattern", "4. Decorator Pattern", "5. Facade Pattern", "6. Flyweight Pattern", "7. Proxy Pattern"});

    for(int i = 0; i < designPatterns.size(); i++) {
        std::cout << designPatterns[i][0] << std::endl;
    }

    std::cout << "\nYour input: ";
    std::cin >> userInput;

    while(userInput != "q") {
        // using an if statement instead of switch because the compiler will get mad at class objects instantiated in the switch. there is no need to have every class variable initialized at start.
        if(userInput == "1") {
            std::cout << "********************************************************************************************" << std::endl;
            std::cout << "Please pick a creational pattern to explore, enter \"b\" to go back to the main menu." << std::endl;
            for(int i = 1; i < designPatterns[0].size(); i++) {
                std::cout << designPatterns[0][i] << std::endl;
            }

            // take in a user input of which pattern to use
            while(userInput != "b") {
                // execute code based on which pattern is chosen.
                // user hits b to exit the pattern
                    // immediately set it to 0, another b is needed to hit the main menu.
                // place all the intro code at the end of the loop
                // if b is set at the end, exit to main while loop
            }
        }
        else if(userInput == "2") {
            std::cout << "********************************************************************************************" << std::endl;
            std::cout << "Please pick a creational pattern to explore, enter \"b\" to go back to the main menu." << std::endl;
            for(int i = 1; i < designPatterns[1].size(); i++) {
                std::cout << designPatterns[1][i] << std::endl;
            }
        }
        else if(userInput == "3"){
            std::cout << "********************************************************************************************" << std::endl;
            std::cout << "Please pick a creational pattern to explore, enter \"b\" to go back to the main menu." << std::endl;
            for(int i = 1; i < designPatterns[2].size(); i++) {
                std::cout << designPatterns[2][i] << std::endl;
            }
        }
        else{
            std::cout << "Hmmmm, this does not look like a valid input. Please try again!" << std::endl;
        }

        std::cout << "\nYour input: ";
        std::cin >> userInput;
    }



    return 0;
}