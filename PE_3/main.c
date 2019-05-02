#include <stdio.h>

/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

//finds the prime divisiors of a number
void dividePrime(int pArr[],int pDivisors[],long int bigNum){
    int pos=0;
    for (int i = 0; i < 10000; ++i) {
        if(bigNum%pArr[i]==0){
            pDivisors[pos] = pArr[i];
            bigNum = bigNum / pArr[i];
            if(bigNum==1)
                return;
            pos++;

        }

    }
}

//prints the array of primes
void printArr(int arr[],long int bigNum){

    printf("Prime number divisors of %ld:\n",bigNum);
    for (int i = 0; arr[i]>0; ++i) {
        printf("%d\n",arr[i]);
    }
}


//function for finding primes and filling an array with the first 100
void findPrime(int arr[]){
    int arrPos=0;

    for (int i = 2; i<=1000000; i++) { //i is our potential prime

        for (int j = 2; j <= i ; j++) {

            if(i%j==0) {
                if(j<i){
                    break;
                }

                else if(j==i) {
                    arr[arrPos] = i;
                    arrPos++;
                    if(arrPos==10000) { //100 is outside the array so quit when we get there
                        return;
                    }

                }

            }
        }
    }
}

int main() {

    int primeArray[10000]={},primeDivisors[10000]={};
    long int bigNum = 600851475143;

    findPrime(primeArray);
    dividePrime(primeArray,primeDivisors,bigNum);
    printArr(primeDivisors,bigNum);


}