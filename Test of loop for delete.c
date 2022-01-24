#include<stdio.h>
int main (void)

   {
   int n,i,flag=0;
   printf("Please enter a number for testing");
   scanf("%d",&n);
   for(i=2;i<=n/2;i=i+1)

   if ((n%i)==0)

    {
     flag=1;
    }
    if(n==1)
    {
    printf("The number is not prime ");
    }

    else if (flag==0)
       {
       printf("The number is prime");
       }

       else
       {
        printf("The number is not prime");
       }
   }
