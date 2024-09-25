#include<stdio.h>

int main(void) {

float x, y;

printf("Enter 2 space seperated numbers: ");
scanf("%f %f",&x, &y);

y = (x - y);

if (y < 0) {

    y = y - (2*y);

    printf("The absolute differnce between the 2 numbers is: %.2f\n", y);
}
else {
    
    printf("The absolute differnce between the 2 numbers is: %.2f\n", y);
}  

return 0; 
}


