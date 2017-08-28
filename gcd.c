#include <stdio.h>

void print_GCD_of_Array(int a[],int n){
    int gcd=a[0];
    for(int i=1;i<n-1;i++){
        gcd=GCD(gcd,a[i]);
    }
    printf("%d",gcd);
}

void print_GCD(int a,int b){
    int t;
    if(a>b) {
        while((t=a%b)!= 0){
            a=b;
            b=t;
        }
        printf("%d",b);
    }
    else if(b>a){
        while((t=b%a)!= 0){
            b=a;
            a=t;
        }
        printf("%d",a);
    }
    else 
        printf("%d",a);
}

int GCD_of_Array(int a[],int n) {
    int gcd=a[0];
    for(int i=1;i<n-1;i++){
        gcd=GCD(gcd,a[i]);
    }
    return gcd;
}

int GCD(int a,int b){
    int t;
    if(a>b) {
        while((t=a%b)!= 0){
            a=b;
            b=t;
        }
        return b;
    }
    else if(b>a){
        while((t=b%a)!= 0){
            b=a;
            a=t;
        }
        return a;
    }
    else 
        return a;
}