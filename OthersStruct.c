#include <stdio.h>

//definindo uma struct de uma outrta maneira
typedef struct {
    int length;
    int width;
}rectangle;

typedef struct{
    int x;
    int y;
}position;

typedef struct buildingPlan{
    rectangle rectangle1;
    position position1;
};
int main()
{
    //criando uma variável com a struct e atribuindo valores
    rectangle myRectangle = {5,10};

    //Acessando struct
    printf("length %d. width: %d\n", myRectangle.length, myRectangle.width);

    return 0;
}
