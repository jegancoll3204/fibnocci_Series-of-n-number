#include<stdio.h>
int main()
{
 int f1,f2,f3;
 int j,n,i;
 f1=f2=1;
 printf("How much series should you want?:");
 scanf("%d",&n);

    printf("\n1)  %d",  f1);
    printf("\n2)  %d",  f2);
 
 for(i=3;i<=n;i++) 
 {
     f3=f1+f2;
     printf("\n%d) %d",i,  f3);
     f1=f2;
     f2=f3;    
 }

}

