#include <iostream>
#include <vector>
#include <string>

class Pattern{
    private:
        std::string name;
        std::string description; 
        std::string uml; // this will most likely be a link, could also use img to ascii services to directly output, but messy
        std::vector<std::string> operations;
};