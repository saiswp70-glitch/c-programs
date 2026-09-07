#include<stdio.h>
int main()
{
   int marks;
   printf("Enter the marks");
    scanf("%d" , &marks);
    
    if(marks>=90)
    
    printf("a grade");
    

    else if(marks>=70)

    printf(" b grade");
    
    else if(marks>=40)
    printf(" cgrade");
    else if(marks<40)
    printf(" d grade");
    else
    printf("fail");
    return 0;

}