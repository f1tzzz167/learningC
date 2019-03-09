/***********************************************
 Author:    Ryan Fitgerald
 Date:      5/24/18
 Purpose:    Demonstrate printf function uses
Sources    of    Help:
Time    Spent:    20 min
********************************************
***/
#include <stdio.h>

int main(int argc, const char * argv[]) {

    printf("%d is an integer and should be printed using %%d\n",27);
    printf("The character %c can be printed using %%c\n",'L');
    printf("Floating point numbers use %%f. %f is an example\n", 3.14159);
    printf("Using placeholder %%%4.1f can display the value of %c number to an accuracy %s",4.2,'a',"of two decimal places\n");
    return 0;
}
/*
 27 is an integer and should be printed using %d.
 The character 'L' can be printed using %c.
 Floating point numbers use %f. 3.141590 is an example.
 Using placeholder % 4.2f can display the value of a number to an accuracy of two decimal places.
*/
