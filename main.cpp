/*********************
Name: Darren Bowers
Coding 02
Purpose: Program to analyze and report back command line parameters. 
**********************/

#include "main.h"

int main(int argc, char** argv){
    cout << "My Command line analyzer" << endl;
    cout << "The number of command line parameters are: " << argc <<endl;
    cout << "The length of the name of the program is: " << string_length(argv[0]) << std::endl;
    if(argc >1){
        for(int i=1; i<argc; i++){
        std::cout << "The length of the parameter " << i << " is " << string_length(argv[i]) << std::endl;
        }
    }
    return 0;
}
