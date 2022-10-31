#include<stdio.h>
void main()
int a,b,sum
{
printf("ënter the num");
scanf("%d",&a);
printf("ënter the num");
scanf("%d",&b);
sum=a+b;
printf("the sum of the number is %d",sum);
}

#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // true if num is perfectly divisible by 2
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    
    return 0;
}
