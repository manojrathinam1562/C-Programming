#include <stdio.h>

int main(){
    int value;
    printf("Enter the value to check whether it is odd or even\n");
    scanf("%d",&value);
    if(value % 2 == 0){
        printf("The given input is even");
    }
    else{
        printf("The given input is odd");
    }
    return 0;
}
