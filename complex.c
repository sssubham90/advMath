#include <stdio.h>
#include <math.h>
#include "advMath.h"

void printComplex(struct Complex c){
    printf("%f + %fi",c.a,c.b);
}

struct Complex createComplex(int a,int b){
    struct Complex c;
    c.a=a;
    c.b=b;
    return c;
}

struct Complex addComplex(struct Complex c1,struct Complex c2){
    struct Complex c3;
    c3.a=c1.a+c2.a;
    c3.b=c1.b+c2.b;
    return c3;
}

struct Complex subComplex(struct Complex c1,struct Complex c2){
    struct Complex c3;
    c3.a=c1.a-c2.a;
    c3.b=c1.b-c2.b;
    return c3;
}

struct Complex multiplyComplex(struct Complex c1,struct Complex c2){
    struct Complex c3;
    c3.a=c1.a*c2.a-c1.b*c2.b;
    c3.b=c1.a*c2.b+c1.b*c2.a;
    return c3;
}

struct Complex divideComplex(struct Complex c1,struct Complex c2){
    struct Complex c3;
    c3.a=c2.a/(c2.a*c2.a + c2.b*c2.b);
    c3.b=-1*c2.b/(c2.a*c2.a + c2.b*c2.b);
    return multiplyComplex(c1,c3);
}

struct Complex conjugateComplex(struct Complex c){
    c.b=-1*c.b;
    return c;
} 
