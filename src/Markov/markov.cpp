#include <iostream>
#include <fstream>
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

        

    return true;
}

bool Markov::generate()
{
    
    return true;
}