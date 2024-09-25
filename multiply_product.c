#include<stdio.h>

int main(void) {

int x;
int y;
int product = 0;

printf("Enter 2 space seperated integers:\n");
scanf("%d %d", &x, &y);

if(x != 0) {
    product = x * y;
    printf("The product of the 2 integers %d and %d is : product = %d\n", x, y, product);
    }
else {

printf("Product = %d\n", product);
}

return 0; 
}


