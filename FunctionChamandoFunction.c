/*
Matheus Menecucci


*/
#include <stdio.h>
int mdc3(int,int,int);
int mdc(int,int);

int main()
{
    int a;
    printf("%d\n",mdc3(120, 236, 36));//4
    printf("%d\n", mdc3(115, 300, 458));//1
    return 0;
}
int mdc(int n1, int n2){
	while(n2 != 0){
		int resto = n1 % n2;
		n1 = n2;
		n2 = resto;
	}
	return n1;
}
int mdc3(int n1, int n2,int n3){
    return mdc(n1,mdc(n2,n3));
}

