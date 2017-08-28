#include <stdio.h>
#include <math.h>
float root(float a,int n){
    float i, c=1.0/n;
       for(i=1;pow(i,n)<=a;i++);
    if(pow(--i,n) == a)return i;
    else return pow(a,c);   
}