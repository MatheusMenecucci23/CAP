/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int hms_para_s(int,int,int);
void s_para_hms(int , int *, int *, int *);
int main()
{
    int total_segundos = hms_para_s(14, 12, 3);
    
    printf("%d\n", total_segundos); 
    
    int horas, minutos, segundos;
    
    s_para_hms(total_segundos, &horas, &minutos, &segundos);
    
    printf("%02d:%02d:%02d\n", horas, minutos, segundos);
        
 
    return 0;
}
int hms_para_s(int h, int m, int s){
    h = (h* 60)*60;
    m = m*60;
    int segundos_total = h+ m+ s;
    return segundos_total;
}
void s_para_hms(int total_segundos, int *h, int *m, int *s )
{
    *h = total_segundos/3600;
    *m = (total_segundos - *h*3600)/60;
    *s =(total_segundos - *h*3600 - *m*60);
}

    