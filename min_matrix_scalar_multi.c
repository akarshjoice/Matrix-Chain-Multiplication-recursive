#include <stdio.h>
#include<limits.h>
int main(void) 
{ int n;
printf("Enter no.oF matrices:");
  scanf("%d",&n);
  int p[n+1];
  printf("Enter row and column of first matrix,followed by rows of all other matrices:");
  for(int i=0;i<=n;i++)
   {
     scanf("%d",&p[i]);
   }
   
 printf("Minimum no of scalar matrix multiplication:%d ",multiply(p,1,n));
}
int multiply(int p[],int i,int n)
   { //p[-1]=0;
     if(n<=i) return 0;
     else
       {  int min=INT_MAX;
         for(int j=i;j<n;j++)
           { 
            if( (multiply(p,i,j)+multiply(p,j+1,n)+(p[i-1]*p[j]*p[n])) < min )
                     {
                      min= multiply(p,i,j)+multiply(p,j+1,n)+(p[i-1]*p[j]*p[n]);  
                     // printf("%d ",min);
                     }
                     
          if(j==n-1)
                   return min;
           }
       }
   }