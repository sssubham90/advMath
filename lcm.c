#include<stdio.h>

void print_LCM_of_Array(int a[],int n){
    int lcm=a[0];
    for(int i=1;i<n-1;i++){
        lcm=LCM(lcm,a[i]);
    }
    printf("%d",lcm);
}

int LCM_of_Array(int a[],int n){
    int lcm=a[0];
    for(int i=1;i<n-1;i++){
        lcm=LCM(lcm,a[i]);
    }
    return lcm;
}

void print_LCM(int a,int b){
    int t=a;
    if(a>b)
        for(int i=1;((t=(a*i))%b)!=0;i++);
    else if(b>a)    
        for(int i=1;((t=(b*i))%a)!=0;i++);
    printf("%d",t);    
}

int LCM(int a,int b){
    int t=a;
    if(a>b)
        for(int i=1;((t=(a*i))%b)!=0;i++);
    else if(b>a)    
        for(int i=1;((t=(b*i))%a)!=0;i++);
    return t;    
}