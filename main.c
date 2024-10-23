#include<stdio.h>
int multiply(int a,int b)
{
    int result = 0;
    for(int i=0;i<b;i++)
    {
        result += a;
    }
    return result;
}
int main()
{
    int n1,n2;
    printf("Enter the two numbers : ");
    scanf("%d %d",&n1,&n2);

    int result;
    if(n2 < 0)
    {
        result = -multiply(n1,-n2);
    }
    else{
        result = multiply(n1,n2);
    }

    printf("The Result is %d\n",result);

    return 0;
}