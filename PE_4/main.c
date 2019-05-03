#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Euler project 4
/*

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

int isPal(int number){

    char* num = (char*)malloc(7);


    sprintf(num,"%d",number);
    int length = strlen(num);
    num[length]='\0';



    for (int i = 0; i<length ; i) {


        if(num[i]==num[length-i-1])
            i++;

        else
            return 0;
    }
    return 1;
}


int numberGenerator(void){
    int pal,newPal;

    for (int i = 999; i>=100 ; i--) {
        for (int j = 999; j>=100; j--) {


            pal = j * i;
            if (isPal(pal)) {

                if (pal >= newPal)
                    newPal = pal;
            }
        }
    }
    return newPal;
}

int main() {
    int number;

    number = numberGenerator();
    if(number>0)
    printf("Biggest palindromic number constisting of the product of two 3-digit numbers: %d\n",number);

    else
        printf("No palindromic number found\n");

    return 0;
}