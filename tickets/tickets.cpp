#include <stdio.h>  
  
int main()  
{  
  
FILE * in=fopen("tickets.in","r");  
FILE * out=fopen("tickets.out","w");  
  
int n,a,b,c,d,least;  
fscanf(in,"%d%d%d%d%d",&n,&a,&b,&c,&d);  
  
least= n*10;  
  
if (n<a){  
  
if ((least)>(a*9)) least=a*9;  
if ((least)>(b*8)) least=b*8;  
if ((least)>(c*7)) least=c*7;  
if ((least)>(d*5)) least=d*5;  
  
}  
  
else if (n<b)  
{  
  
least = n*9;  
if ((least)>(b*8)) least=b*8;  
if ((least)>(c*7)) least=c*7;  
if ((least)>(d*5)) least=d*5;  
  
}  
  
else if (n<c)  
{  
  
least = n*8;  
if ((least)>(c*7)) least=c*7;  
if ((least)>(d*5)) least=d*5;  
  
}  
  
else if (n<d)  
{  
  
least =n*7;  
if ((least)>(d*5)) least=d*5;  
  
}  
  
else least=n*5;  
  
fprintf(out,"%d\n",least);  
  
return 0;  
  
} 
