#include <stdio.h>

int factorial(int n){
    int s=1;
    while(n){
        s*=n;
        n--;
    }
    return s;
}

int permutation(int n,int r){
    int s=1;
    for(int i=n-r+1;i<=n;i++)s*=i;
    return s;
} 

int combination(int n,int r){
    int s=1;
    for(int i=n-r+1;i<=n;i++)s*=i;
    return s/factorial(r);
}