#include <stdio.h>
#include <math.h>
#include "advMath.h"

int checkGP(float a[],int n){
    float d = a[1]/a[0];
    for(int i=2;i<n;i++)
        if(d!=a[i]/a[i-1]) return 0;
    return 1;
}

struct AG createGP_from_Array(float a[],int n){
    struct AG gp;
    if(checkGP(a,n)){
        gp.a=a[0];
        gp.d=a[1]/a[0];
        gp.n=n;
        for(int i=0;i<n;i++)
        gp.A[i]=gp.a*pow(gp.d,i);
    }
    return gp;
}

struct AG createGP(float a,int n,float d){
    struct AG gp;
    gp.a=a;
    gp.d=d;
    gp.n=n;
    for(int i=0;i<n;i++)
        gp.A[i]=a*pow(d,i);
    return gp;
}

float Nth_Element_GP(struct AG gp,int n){
    return gp.A[n];
}

void print_Nth_Element_GP(struct AG gp,int n){
    printf("%.2f ",gp.A[n]);
}

void print_ratio_GP(struct AG gp){
    printf("%.2f ",gp.d);
}

float ratio_GP(struct AG gp){
    return gp.d;
}

void print_Sum_GP(struct AG gp){
    if(gp.d!=1)
        printf("%.2f ",gp.a*(pow(gp.d,gp.n)-1)/(gp.d-1));
    else 
        printf("%.2f ",gp.a*gp.n);
}

float Sum_GP(struct AG gp){
    if(gp.d!=1)
        return(gp.a*(pow(gp.d,gp.n)-1)/(gp.d-1));
    else 
        return(gp.a*gp.n);
}

void printGP (struct AG gp){
    for(int i=0;i<gp.n;i++)
        printf("%.2f ",gp.A[i]);
}

struct AG geometricMeans (float a,float b,int n){
    float d=b/a;
    float x=root(d,n+1);
    return createGP(a*x,n,x);
} 