#include <stdio.h>
#include <stdlib.h>

int main()
{ int l=0,g[4],p2[2][2]; //p2 - пустой массив для обратного пререхода
    int p[2][2] = {{2,3},{22,23}};
     for (int i=0;i<2;i++)                    //Туда
       for (int j=0; j<2; j++,l++) g[l]=p[i][j];
    for (int i=0;i<4;i++) printf("%d ",g[i]);
l=0;
printf("\n");
    for (int i=0;i<2;i++)                    //Обратно
       for (int j=0; j<2; j++,l++) p2[i][j]=g[l];
    for (int i=0;i<2;i++)
    { printf("\n");
       for (int j=0; j<2; j++,l++) printf("%d ", p2[i][j]);
    }
    return 0;
}
