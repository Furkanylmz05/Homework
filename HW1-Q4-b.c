#include <stdio.h>
#include <math.h>

void computeHomeValue(int popularity, int size, int *homeValue);  

int main()
{
    int popularity, size;
    int homeValue;  

    printf("Enter popularity: ");
    scanf("%d", &popularity);

    printf("Enter size: ");
    scanf("%d", &size); 

    computeHomeValue(popularity, size, &homeValue); 
    printf("Home value is: %d\n", homeValue); 

    return 0;
}

void computeHomeValue(int popularity, int size, int *homeValue) 
{
    int sizepow = pow(size, 2);        
    int popularitypow = pow(popularity, 3);  

    *homeValue = (popularitypow + sizepow) * 10000; 
}

