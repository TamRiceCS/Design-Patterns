#include <iostream>
#include <string>
#include "pattern.cpp"

// probably going to want to rewrite this  (have it extend the pattern class) c:

class Singleton : public Pattern {
    public:
        // do not allow cloning
        // do not allow assignment
        static Singleton* getInstance();
        std::vector<std::string> getOperations(){
            return operations;
        }
    private:
        static Singleton* instance;
        int calls; // needed as Singleton is initiated ahead of time to get operations.

        Singleton(){
            name = "Singleton";
            description = "A singleton class is meant to only allow one instance of itself to exist for the duration of the program. Let's say you are creating a model of Planet Earth. Every instance of Earth you work on, naturally, should be the same model. Can you imagine painting the oceans and seas blue on one model, painting in grass on continents on another, etc. After doing all that work you'd look back and not have a complete model. The singleton class would make only one shared (static) model avaliable at a time. The ONLY defined operation is how the object is created.";
            uml = "link";
            operations = {"1. Create"};
            calls = 0;
        }

};

Singleton* Singleton::getInstance(){
    if(instance != nullptr && instance->calls == 0) {
        std::cout << "Creating your singleton, you only get one!" << std::endl;
        instance->calls++;
    }
    else if(instance == nullptr) {
        instance = new Singleton();
    }
    else{
        instance->calls++;
        std::cout << "You already have a singleton, work with what you have. You've called create " << instance->calls << " times." << std::endl;
    }
    return instance;
}

Singleton* Singleton::instance = nullptr;

