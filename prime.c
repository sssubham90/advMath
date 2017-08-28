#include <stdio.h>

#include "advMath.h"

void print_Prime_in_Range(int s,int e){
    for(int i=s;i<=e;i++)
        if(isPrime(i)) printf("%d ",i);
}

void print_Prime_within(int n){
    for(int i=2;i<=n;i++)
        if(isPrime(i)) printf("%d ",i);
}

void print_isPrime(int n){
    if(isPrime(n)) printf("true");
    else printf("false");
}

int isPrime(int n){
    for(int i=2;i<n-1;i++)
        if(n%i==0) 
            return 0;
    return 1;
}

void primeFactorisation(int n){
    int i=2;
    while(!isPrime(n)){
        if(isPrime(i)){
            while(n%i==0&&!(isPrime(n))){
                printf("%d * ",i);
                n=n/i;
            }
        }
        i++;
    }
    printf("%d",n);
}