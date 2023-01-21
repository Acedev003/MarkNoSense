#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

#include "markov.hpp"

bool Markov::load_data()
{
    return true;
}

bool Markov::train(const std::string& dataset_path)
{
    std::ifstream file(dataset_path);
    if(!file)
    {
        this->err_code = ERROR_CODE::FILE_OPEN_FAIL;
        return false;
    }

    std::string buffer;
    while(std::getline(file,buffer))
    {
        std::stringstream ss(buffer);
        std::string token;
        std::string prev = "";
        while(std::getline(ss,token,' '))
        {
            if(prev == "")
            {
                prev = token;
                continue;
            }
            else
            {
                std::cout<<prev<<" "<<token<<"\n";
                prev = token;
            }
        }
        std::cout<<"\n";
    }

    return true;
}

bool Markov::generate()
{
    
    return true;
}