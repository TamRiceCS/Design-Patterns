#include <iostream>
#include <string>
#include "pattern.cpp"

// probably going to want to rewrite this  (have it extend the pattern class) c:

class Singleton : public Pattern {
    public:
        Singleton(){
            name = "Singleton";
            description = "A singleton class is meant to only allow one instance of itself to exist for the duration of the program. Let's say you are creating a model of Planet Earth. Every instance of Earth you work on, naturally, should be the same model. Can you imagine painting the oceans and seas blue on one model, painting in grass on continents on another, etc. After doing all that work you'd look back and not have a complete model. The singleton class would make only one shared (static) model avaliable at a time. The ONLY defined operation is how the object is created.";
            uml = "link";
            operations = {"1. Create"};
        }

        std::vector<std::string> getOperations(){
            return operations;
        }
    private:
};