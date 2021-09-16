#include <stdio.h>

//function to swap two numbers
void swap(int first, int second){
    int temp;
    temp = first;
    first = second;
    second = temp;
    printf("values after swapping : a = %d, b = %d\n", first, second);
}
int main(){
    int a, b;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    printf("values before swapping : a = %d, b = %d\n",a,b);
    swap(a,b);
    return 0;
}
