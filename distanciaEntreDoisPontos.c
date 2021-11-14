/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
float distancia(int,int,int,int,int,int);
int main()
{
    float x1,x2,y1,y2,z1,z2,d;
    
    scanf("%f",&x1);
    scanf("%f",&y1);
    scanf("%f",&z1);
    
    scanf("%f",&x2);
    scanf("%f",&y2);
    scanf("%f",&z2);
    printf("%.1f",distancia(x1,y1, z1, x2,y2, z2));

    return 0;
}
float distancia(int x1,int y1, int z1, int x2,int y2, int z2){
    
    float x,y,z;
    
    x = x1-x2;
    y = y1-y2;
    z = z1-z2;
    
   return sqrt((pow(x,2)) + (pow(y,2)) + (pow(z,2)));
    
    
}

    