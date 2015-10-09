#include <stdio.h>  
#include <stdlib.h>  
  
  
int main()  
{  
  
FILE * in=fopen("downloads.in","r");  
FILE * out=fopen("downloads.out","w");  
  
int j,i,n,posmin,abswholet;  
float min,wholet,s[100],t[100],previous;  
  
wholet=0;  
fscanf(in,"%d",&n);  
//scanf("%d",&n);  
  
  
for(i=0;i<=n-1;i++){  
     fscanf(in,"%f %f",&s[i],&t[i]);  
     //scanf("%f %f",&s[i],&t[i]);  
}  
  
for(j=1; j<=n-1; j++)  
{  
    min=10000;  
    for (i=0;i<=n-1;i++)  
    {  
        if(t[i]!=(-1)) if(min>t[i]){ min=t[i]; posmin=i; }  
    }  
    t[posmin]=-1;  
    s[posmin]=s[posmin]/(n-j);  
    wholet=wholet+min;  
    for (i=0;i<=n-1;i++)  
    {  
        if(t[i]!=-1)  
        {  
            previous=s[i];  
            s[i]=s[i]+s[posmin];  
            t[i]=(t[i]-min)*(previous/s[i]);  
        }  
    }  
}  
for(i=0;i<=n-1;i++){if (t[i]!=-1) break;}  
wholet=wholet + t[i];  
abswholet=(int)(wholet+0.5);  
  
fprintf(out,"%d\n",abswholet);  
//printf("%d\n",abswholet);  
  
fclose(in); fclose(out);  
return 0;   
}  
