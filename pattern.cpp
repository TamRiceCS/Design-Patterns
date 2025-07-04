#include <iostream>
#include <vector>
#include <string>

class Pattern{
    protected:
        std::string name;
        std::string description; 
        std::string uml; // this will most likely be a link, could also use img to ascii services to directly output, but messy
        std::string useCases;
        std::vector<std::string> operations;
    };