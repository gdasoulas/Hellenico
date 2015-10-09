#include <stdio.h>  
#include <stdlib.h>  
  
  
int main()  
  
{  
  
FILE * in=fopen("goldbach.in","r");  
FILE * out=fopen("goldbach.out","w");  
  
int n;  
fscanf(in,"%d",&n);  
  
  
unsigned long long int i,j;  
int *primes;  
int *primetable;  
int z = 0;  
  
primes = malloc(sizeof(int)*n);  
primetable=malloc(sizeof(int)*n);     
for(i=0;i<=n-1;i++)primetable[i]=0;  
  
      
for (i=2;i<n;i++)  
 primes[i]=1;  
  
 for (i=2;i<n;i++)  
   if (primes[i])  
     for (j=i;i*j<n;j++)  
         primes[i*j]=0;  
  
for (i=2;i<n;i++)  
   if (primes[i])  
      primetable[(z++)]=i;        
  
  
//for(i=0;i<=z-1;i++) printf("%d\n",primetable[i]);  
  
  
for(i=0;i<=z-2;i++)  
    for(j=i+1;j<=z-1;j++)  
        if((primetable[i]+primetable[j])==n) {fprintf(out,"%d %d\n",primetable[i],primetable[j]); fclose(in); fclose(out); return 0; }  

