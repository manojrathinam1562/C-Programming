#include <stdio.h>
#include <stdlib.h>

double add(double a,double b){
    double sum = a + b;
    return sum;
}

double sub(double a,double b){
    double diff = a - b;
    return diff;
}

double multiply(double a,double b){
    double product = a * b;
    return product;
}

double divide(double a,double b){
    double div = a / b;
    return div;
}

int main(){
    char op;
    double num_1, num_2;
    printf("Enter the operator (+,-,*,/,Q(quit)) : ");
    scanf("%c",&op);
    if(op == '+' || op == '-' || op == '*' || op == '/'){
        printf("\nEnter the operands : ");
        scanf("%lf%lf",&num_1,&num_2);
        switch(op){
        case '+':
            printf("Sum is %.2lf",add(num_1, num_2));
            break;
        case '-':
            printf("Difference is %.2lf",sub(num_1, num_2));
            break;
        case '*':
            printf("Multiplication is %.2lf",multiply(num_1, num_2));
            break;
        case '/':
            if(num_2 == 0){
                printf("Error");
            }
            else{
                printf("Division is %.2lf",divide(num_1, num_2));
            }
            break;
        }
    }
    else if(op == 'Q'){
        exit(0);
    }
    else{
        printf("operation doesn't exist");
    }
    return 0;
}
