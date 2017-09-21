#include <stdio.h>

#include "advMath.h"

float min(float a[],int n){
    float MIN=a[0];
    for(int i=0;i<n;i++)
        if(a[i]<MIN)
            MIN=a[i];
    return MIN;
}

float max(float a[],int n){
    float MAX=a[0];
    for(int i=0;i<n;i++)
        if(a[i]>MAX)
            MAX=a[i];
    return MAX;
}

float mean(float a[],int n){
    float s=0;
    for(int i=0;i<n;i++)
        s+=a[i];
    return s/n;
}

float range(float a[],int n){
    return max(a,n)-min(a,n);
}

void sort(float a[],int n){
    int i,j,p;
    float min;
    for(i=0;i<n;i++){
        min=a[i],p=i;
        for(j=i;j<n;j++)
            if(a[j]<min){
                min=a[j];
                p=j;
            }
        a[p]=a[i];
        a[i]=min;
    }
}

void sortD(float a[],int n){
    int i,j,p;
    float max;
    for(i=0;i<n;i++){
        max=a[i],p=i;
        for(j=i;j<n;j++)
            if(a[j]>max){
                max=a[j];
                p=j;
            }
        a[p]=a[i];
        a[i]=max;
    }
}

float median(float a[],int n){
    sort(a,n);
    int mid1=n/2,mid2=mid1-1;
    if(n%2==0) return (a[mid1]+a[mid2])/2.0;
    else return (a[mid1]);
}

float mode(float a[],int n){
    sort(a,n);
    int i=0,f=0,M,F=0;
    float t=a[i];
    while(i<n){
        if(a[i]==t) f++;
        else{
            if(f>F)M=t;
            f=0;
            t=a[i];
        }
        i++;
    }
    return M;
}

void showArray(float a[],int n){
    for(int i=0;i<n;i++) printf("%0.2f ",a[i]);
}

float lowerQuartile(float a[],int n){
    sort(a,n);   
    int m;
    if(n%2==0) m=(n/2);
    else m=(n/2)+1;
    int mid1=m/2,mid2=mid1-1;
    if(m%2==0) return (a[mid1]+a[mid2])/2.0;
    else return (a[mid1]);
}

float upperQuartile(float a[],int n){
    sort(a,n);
    int m;
    if(n%2==0) m=(n/2);
    else m=(n/2)+1;
    int mid1=(m+n)/2,mid2=mid1-1;
    if(((m+n)/2)%2==0) return (a[mid1]);
    else return (a[mid1]+a[mid2])/2.0;
}

float interQuartileRange(float a[],int n){
    return upperQuartile(a,n)-lowerQuartile(a,n);
}