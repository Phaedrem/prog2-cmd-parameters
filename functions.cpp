/*********************
Name: Darren Bowers
Coding 02
Purpose: Program to analyze and report back command line parameters. 
**********************/

#include "functions.h"

int string_length(const char *str){
    int count = 0;
    while(str[count] != '\0'){
        count++;
    }
    return count;
}

