/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
void distancia(float,float,float,float,float,float, float *, float *, float *);
int main()
{
    float x1,x2,y1,y2,z1,z2,d;
    float x,y,z;
    
    scanf("%f",&x1);
    scanf("%f",&y1);
    scanf("%f",&z1);
    
    scanf("%f",&x2);
    scanf("%f",&y2);
    scanf("%f",&z2);
    x=0;
    y=0;
    z=0;
    distancia(x1,y1, z1, x2,y2, z2,&x,&y,&z);
    printf("%f %f %f",x,y,z);

    return 0;
}
void distancia(float x1,float y1, float z1, float x2,float y2, float z2,float *x,float *y,float *z){
    
    *x = (x1+x2)/2;
    *y = (y1+y2)/2;
    *z = (z1+z2)/2;
    
    
}

    