#include <stdio.h>
#include <math.h>

int computeHomeValue(int popularity, int size);  

int main()
{
    int popularity, size;
    int homeValue;  

    printf("Enter popularity: ");
    scanf("%d", &popularity);

    printf("Enter size: ");
    scanf("%d", &size); 

    homeValue = computeHomeValue(popularity, size); 
    printf("Home value is: %d\n", homeValue); 

    return 0;
}


int computeHomeValue(int popularity, int size) 
{
    int sizepow = pow(size, 2);        
    int popularitypow = pow(popularity, 3);  
	
    return (popularitypow + sizepow) * 10000; 
}
