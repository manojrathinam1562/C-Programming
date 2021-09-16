#include<stdio.h>
const float PI=3.14;

int main(){
    float radius;
    printf("Enter the radius of the circle : ");
    scanf("%f",&radius);
    float area, perimeter;
    area = PI * radius * radius;
    perimeter = 2 * PI * radius;
    printf("\nperimeter of the circle : %.2f\n",perimeter);
    printf("area of the circle : %.2f",area);
    return 0;
}
