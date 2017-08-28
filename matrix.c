#include <stdio.h>
#include "advMath.h"

struct Matrix createMatrix_from_number(int nr,int nc, float n){
    struct Matrix matrix;
    matrix.nr=nr;
    matrix.nc=nc;
    int i,j;
    for(i=0;i<nr;i++)
        for(j=0;j<nc;j++)
            if(i==j)
                matrix.m[i][j]=n;
    return matrix;
}

struct Matrix createMatrix(int nr,int nc, float m[nr][nc]){
    struct Matrix matrix;
    matrix.nr=nr;
    matrix.nc=nc;
    int i,j;
    for(i=0;i<nr;i++)
        for(j=0;j<nc;j++)
            matrix.m[i][j]=m[i][j];
    return matrix;
}

struct Matrix addMatrix(struct Matrix a,struct Matrix b){
    if(a.nr!=b.nr||a.nc!=b.nc){
        printf("Matrix Addition Not Possible");
        return a;
    }
    else{
        float t[a.nr][a.nc];
        int i,j;
        for(i=0;i<a.nr;i++)
            for(j=0;j<a.nc;j++)
                t[i][j]=a.m[i][j]+b.m[i][j];
        return createMatrix(a.nr,a.nc,t);
    }
}

struct Matrix subMatrix(struct Matrix a,struct Matrix b){
    if(a.nr!=b.nr||a.nc!=b.nc){
        printf("Matrix Subtraction Not Possible");
        return a;
    }
    else{
        float t[a.nr][a.nc];
        int i,j;
        for(i=0;i<a.nr;i++)
            for(j=0;j<a.nc;j++)
                t[i][j]=a.m[i][j]-b.m[i][j];
        return createMatrix(a.nr,a.nc,t);
    }
}

struct Matrix multiplyMatrix(struct Matrix a,struct Matrix b){
    if(a.nc!=b.nr){
        printf("Matrix Multiplication/Division Not Possible");
        return a;
    }
    else{
        float t[a.nr][b.nc],s;
        int i,j,k,l;
        for(i=0;i<a.nr;i++)
            for(j=0;j<b.nc;j++)
            {
                s=0;
                for(k=0,l=0;k<a.nc&&l<a.nr;k++,l++){
                    s+=a.m[i][k]*b.m[l][j];
                }
                t[i][j]=s;
            }
        return createMatrix(a.nr,a.nc,t);
    }
}

struct Matrix transposeMatrix(struct Matrix a){
    float t[a.nr][a.nc];
        int i,j,x;
        for(i=0;i<a.nr;i++)
            for(j=0;j<a.nc;j++)
                t[i][j]=a.m[j][i];
        return createMatrix(a.nr,a.nc,t);
}

void printMatrix(struct Matrix a){
    int i,j;
    for(i=0;i<a.nr;i++){
        for(j=0;j<a.nc;j++)
            printf("%.2f ",a.m[i][j]);
        printf("\n");
    }    
}

struct Matrix findMinor(int I,int J,struct Matrix a){
    int r=a.nr-1;
    int c=a.nc-1;
    float t[r][c];
    int i,j,k,l;
    for(i=0,k=0;i<a.nr;i++)
        if(i==I) continue;
        else
        {
            for(j=0,l=0;j<a.nc;j++)
                if(j==J)continue;
                else 
                { 
                    t[k][l]=a.m[i][j];
                    l++;
                }
            k++;
        }
    return createMatrix(r,c,t);        
}

struct Matrix adjointMatrix(struct Matrix a){
    float t[a.nr][a.nc],s=1;
    int  i,j;
    for(i=0;i<a.nr;i++){
        for(j=0;j<a.nc;j++){
            t[i][j]=s*determinant(findMinor(i,j,a));
            s*=-1;
        }
    }    
    return transposeMatrix(createMatrix(a.nr,a.nc,t));
}

struct Matrix inverseMatrix(struct Matrix a){
    struct Matrix t=adjointMatrix(a);
    int d=determinant(a);
    if(d==0){
        float e[][1]={{0.0}};
        return createMatrix(1,1,e);
    }
    int i,j;
    for(i=0;i<a.nr;i++)
        for(j=0;i<a.nc;j++)
            t.m[i][j]/=d;
    return t;
}

float determinant(struct Matrix a){
    float r=0;
    if(a.nc!=a.nr) return -1;
    if(a.nr==1) return a.m[0][0];
    int s=1;
    for(int i=0;i<a.nc;i++){
        r+=s*determinant(findMinor(0,i,a))*a.m[0][i];
        s*=-1;        
    }
    return r;   
}

struct Matrix divideMatrix(struct Matrix a,struct Matrix b){
    return multiplyMatrix(a,inverseMatrix(b));
}