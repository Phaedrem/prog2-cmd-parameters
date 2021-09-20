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
        std::cout << "The length of the first parameter is " << string_length(argv[1]) << std::endl;
    } else {
        cout << "There are no command line parameters after the program name." << endl;
    }


    return 0;
}
