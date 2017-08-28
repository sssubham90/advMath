#include <stdio.h>
#include <math.h>

float perimeter(float sides[],int n){
    float p=0;
    for(int i=0;i<n;i++)p+=sides[i];
    return p;
}

float triangle_area(float a,float b,float c){
    float s=(a+b+c)/3.0;
    if(!check_triangle(a,b,c))
        return -1;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

float square_area(float s){
    return s*s;
}

float rect_area(float l, float b){
    return l*b;
}

float circle_area(float r){
    return 22*r*r/7;
}

float circle_perimeter(float r){
    return 44*r/7;
}

int check_triangle(int a,int b,int c){
    if(a+b>c&&a+c>b&&b+c>a) return 1;
    else return 0;
}

float sphere_surface_area(float r){
    return 88*r*r/7;
}

float sphere_volume(float r){
    return 22*r*r*r/7;
}

float hemisphere_surface_area(float r){
    return 66*r*r/7 ;
}

float hemisphere_volume(float r){
    return 11*r*r*r/7;
}

float cube_volume(float s){
    return s*s*s;
}

float cube_surface_area(float s){
    return 6*s*s;
}

float cuboid_volume(float l, float b, float h){
    return l*b*h;
}

float cuboid_surface_area(float l, float b, float h){
    return 2*(l*b + b*h + l*h);
}

float cylinder_volume(float r,float h){
    return 22*r*r*h/7;
}

float cylinder_surface_area(float r,float h){
    return 44*r*(r+h)/7;
}

float cylinder_CSA(float r,float h){
    return 44*r*h/7;
}

float cone_volume(float r, float h){
    return 22*r*r*h/21;
}

float cone_surface_area(float r,float h){
    return 22*r*(h+r)/7;
}

float cone_CSA(float r,float h){
    return 22*r*h/7;
}