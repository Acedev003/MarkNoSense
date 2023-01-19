#include<iostream>

#include "Markov/markov.hpp"

int main(int argc,char **argv)
{
    Markov markov;
    markov.train("../dataset/data.txt");
    
    return EXIT_SUCCESS;
}