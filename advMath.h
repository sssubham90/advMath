/* 
 * File:   advMath.h
 * Author: KIIT -DEVIL
 *
 * Created on 25 August, 2017, 8:02 PM
 */

#ifndef ADVMATH_H
#define ADVMATH_H

struct Complex{
    float a;
    float b;
};

struct Matrix{
    int nr;
    int nc;
    float m[100][100];
};

struct AG{
    float A[100];
    float d;
    int n;
    float a;
};

int factorial(int n);//returns factorial of n

int permutation(int n,int r);//returns nPr

int combination(int n,int r);//returns nCr




float min(float a[],int n);//returns min element of array

float max(float a[],int n);//returns max element of array

float mean(float a[],int n);//returns mean of array

float range(float a[],int n);//returns range of array

void sort(float a[],int n);//sorts the array upto n elements in ascending order given as parameter

void sortD(float a[],int n);//sorts the array upto n elements in descending order given as parameter

float median(float a[],int n);//returns the median of the given sorted function

float mode(float a[],int n);//returns the mode of the given array

void showArray(float a[],int n);//displays the elements of the array

float lowerQuartile(float a[],int n);//returns the lower quartile of an array

float upperQuartile(float a[],int n);//returns the upper quartile of an array

float interQuartileRange(float a[],int n);//returns the inter quartile range of an array



float perimeter(float sides[],int n); //gives perimeter of a polygon of n sides passed as parameter sides.

float triangle_area(float a,float b,float c); //gives the area of triangle with sides a.b and c

float square_area(float s); //gives area of square with side s

float rect_area(float l, float b); //gives area of rectangle with dimension (l x b)

float circle_area(float r); //gives area of circle with radius r

float circle_perimeter(float r); //gives perimeter of circle with radius r

int check_triangle(int a,int b,int c); //returns 1 if triangle with given sides is possible else 0

float sphere_surface_area(float r); //returns surface area of sphere with radius r

float sphere_volume(float r); //returns volume of sphere with radius r

float hemisphere_surface_area(float r); //returns surface area of hemisphere with radius r

float hemisphere_volume(float r); //returns volume of hemisphere

float cube_volume(float s); //returns volume of cube with side s

float cube_surface_area(float s); //returns surface area of cube with radius s

float cuboid_volume(float l, float b, float h); //returns volume of the cuboid with dimensions (l x b x h)

float cuboid_surface_area(float l, float b, float h); //returns surface area of cuboid with dimensions (l x b x h)

float cylinder_volume(float r,float h); //returns volume of the cylinder with radius r and height h

float cylinder_surface_area(float r,float h); //returns surface area of the cylinder with radius r and height h

float cylinder_CSA(float r,float h); //returns curved surface area of the cylinder with radius r and height h

float cone_volume(float r, float h); //returns volume of cone with radius r and height h

float cone_surface_area(float r,float h); //returns surface area of cone with radius r and height h

float cone_CSA(float r,float h); //returns curved surface area of cone with radius r and height h






float root(float a,int n);  //gives nth root of a




int checkGP(float a[],int n); //checks if the array passed as parameter is a GP

struct AG createGP_from_Array(float a[],int n); //creates and return GP from Array

struct AG createGP(float a,int n,float d); //creates a GP structure with a as beginner n as no. of elements and common ratio d

float Nth_Element_GP(struct AG gp,int n); //returns Nth element of GP

void print_Nth_Element_GP(struct AG gp,int n); //prints the Nth element of the GP

void print_ratio_GP(struct AG gp); //prints the common ratio of GP

float ratio_GP(struct AG gp); //returns the common ratio of GP

void print_Sum_GP(struct AG gp); //prints sum of the GP

float Sum_GP(struct AG gp); //returns the sum of the GP

void printGP (struct AG gp); //prints the Geometric Progression

struct AG geometricMeans (float a,float b,int n); //returns a GP which has the n Geometric Means between a and b






int checkAP(float a[],int n); // checks if the array passed as parameter is an AP

struct AG createAP_from_Array(float a[],int n); //creates and return AP from Array

struct AG createAP(float a,int n,float d); //creates an AP structure with a as beginner n as no. of elements and common difference d  

float Nth_Element_AP(struct AG ap,int n); //returns Nth element of AP

void print_Nth_Element_AP(struct AG ap,int n); //prints the Nth element of the AP

void print_diff_AP(struct AG ap); //prints the common difference of AP

float diff_AP(struct AG ap); //returns the common difference of AP

float Sum_AP(struct AG ap); //returns sum of the AP

void print_Sum_AP(struct AG ap); //prints the sum of the AP

void printAP (struct AG ap); //prints the Arithmetic Progression

struct AG arithmeticMeans (float a,float b,int n); //returns an AP which has the n Arithmetic Means between a and b 





struct Matrix createMatrix(int nr,int nc, float m[nr][nc]); //creates a matrix from an array

struct Matrix createMatrix_from_number(int nr,int nc, float n);//creates matrix of order (nr x nc) from the given number n of form n x I.

struct Matrix addMatrix(struct Matrix a,struct Matrix b); // adds matrices given as parameters

struct Matrix subMatrix(struct Matrix a,struct Matrix b); // subtracts matrices given as parameters

struct Matrix multiplyMatrix(struct Matrix a,struct Matrix b);// multiplies matrices given as parameters

struct Matrix divideMatrix(struct Matrix a,struct Matrix b);// divide matrix a by matrix b

struct Matrix transposeMatrix(struct Matrix a); // returns transpose of matrix given as input

struct Matrix findMinor(int I,int J,struct Matrix a);// returns a matrix that is minor of the matrix from the given position

float determinant(struct Matrix a);//returns determinant of the matrix

struct Matrix adjointMatrix(struct Matrix a);//returns adjoint matrix of the matrix

struct Matrix inverseMatrix(struct Matrix a);//returns inverse of matrix 

void printMatrix(struct Matrix a); // displays the matrix given as parameter





struct Complex createComplex(int a,int b);//creates a complex number

struct Complex addComplex(struct Complex c1,struct Complex c2);//adds 2 complex number

struct Complex subComplex(struct Complex c1,struct Complex c2);//subtracts 2 complex number

struct Complex multiplyComplex(struct Complex c1,struct Complex c2);//multiplies 2 complex number

struct Complex divideComplex(struct Complex c1,struct Complex c2);//divides 2 complex number

struct Complex conjugateComplex(struct Complex c);//returns conjugate of complex number





void print_GCD_of_Array(int a[],int n);//prints the GCD of all the elements of the array until the nth number

void print_GCD(int a,int b);//prints the GCD of two numbers given as parameters

int GCD_of_Array(int a[],int n);//gives the GCD of all the elements of the array until the nth number

int GCD(int a,int b);//gives the GCD of two numbers given as parameters




void print_LCM_of_Array(int a[],int n);//prints the LCM of all the elements of the array until the nth number

int LCM_of_Array(int a[],int n);//gives the LCM of all the elements of the array until the nth number

void print_LCM(int a,int b);//prints the LCM of two numbers given as parameters

void LCM(int a,int b);//gives the LCM of two numbers given as parameters





void print_Prime_in_Range(int s,int e);//prints prime numbers between two numbers including the two numbers.

void print_Prime_within(int n);//print prime numbers between 1 and n including n

void print_isPrime(int n);// prints true if number is prime else false

int isPrime(int n);//returns 1 if no. is prime else returns 0

void primeFactorisation(int n);//prints the prime factorization of a number.

#endif /* ADVMATH_H */