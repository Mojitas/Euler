#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Euler project 4
/*

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

int isPal(int number){

    char* num = (char*)malloc(8);
    int length = strlen(num), modCut=10;

    for (int j = 0; j <length ; j++) {
        char[j] = itoa(number%modCut);
        modCut=modCut*10;
    }

    puts(num);
    exit(EXIT_SUCCESS);



    for (int i = 0; i<length ; i) {


        if(num[i]==num[length-i])
            i++;

        else
            return 0;
    }
    return 1;
}


int numberGenerator(void){
    int a=999,pal;
    for (int i = 999; i>99 ; i--) {
        pal=a*i;
        if(isPal(pal))
            return pal;
    }
}

int main() {
    int number;


    //number = numberGenerator();
    //printf("Biggest palindromic number constisting of the product of two 3-digit numbers: %d\n",number);

    return 0;
}