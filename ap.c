#include <stdio.h>
#include "advMath.h"

int checkAP(float a[],int n){
    float d = a[1]-a[0];
    for(int i=2;i<n;i++)
        if(d!=a[i]-a[i-1]) return 0;
    return 1;
}

struct AG createAP_from_Array(float a[],int n){
    struct AG ap;
    if(checkAP(a,n)){
        ap.a=a[0];
        ap.d=a[1]-a[0];
        ap.n=n;
        for(int i=0;i<n;i++)
        ap.A[i]=ap.a+(ap.d*i);
    }
    return ap;
}

struct AG createAP(float a,int n,float d){
    struct AG ap;
    ap.a=a;
    ap.d=d;
    ap.n=n;
    for(int i=0;i<n;i++)
        ap.A[i]=a+(d*i);
    return ap;
}

float Nth_Element_AP(struct AG ap,int n){
    return ap.A[n];
}

void print_Nth_Element_AP(struct AG ap,int n){
    printf("%.2f ",ap.A[n]);
}

void print_diff_AP(struct AG ap){
    printf("%.2f ",ap.d);
}

float diff_AP(struct AG ap){
    return ap.d;
}

void print_Sum_AP(struct AG ap){
    printf("%.2f ",ap.n*(2*ap.a+(ap.n-1)*(ap.d))/2);
}

float Sum_AP(struct AG ap){
    return ap.n*(2*ap.a+(ap.n-1)*(ap.d))/2.0;
}

void printAP (struct AG ap){
    for(int i=0;i<ap.n;i++)
        printf("%.2f ",ap.A[i]);
}

struct AG arithmeticMeans (float a,float b,int n){
    struct AG ap=createAP(a+(b-a)/(n+1),n,(b-a)/(n+1));
    return ap;
} 