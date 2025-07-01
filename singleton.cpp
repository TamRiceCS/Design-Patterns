#include <iostream>
#include "pattern.cpp"

// probably going to want to rewrite this  (have it extend the pattern class) c:

class Singleton : private Pattern {
    // protected instance of singleton class (private and can't be inherited)
    protected:
        Singleton(){}; // constructor is private
        Singleton(Singleton&) = delete; // does not allow you to have multiple references to the same singleton
    public:
        std::string name;
        static Singleton& get_inst() {
            static Singleton instance; // shared instance for everyone
            return instance; // return it
        }
};