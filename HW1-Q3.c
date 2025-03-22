#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int popularity;
    int size;
    int homeaValue;
    printf("Enter the popularity:");
    scanf("%d",&popularity);
    printf("Enter the size:");
    scanf("%d",&size);
    homeaValue=(popularity*popularity*popularity+size*size)*10000 ;
    printf("Home value is:%d",homeaValue);
    return 0;
}
