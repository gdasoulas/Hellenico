#include <stdio.h>  
  
int main()  
{  
  
FILE* in=fopen("time.in","r");  
FILE* out=fopen("time.out","w");  
  
int a=-1;  
int b=-1;  
int c=-1;  
int S;  
  
fscanf (in,"%d:%d:%d",&a,&b,&c);  
S=a*3600+b*60+c;    
S=S*2;    
a=S/3600;    
b=(S%3600)/60;    
c=S%60;  
  
if (a<=9) fprintf(out,"0%d:",a);    
else fprintf(out,"%d:",a);    
if (b<=9) fprintf(out,"0%d:",b);    
else fprintf(out,"%d:",b);    
if(c<=9) fprintf(out,"0%d\n",c);    
else fprintf(out,"%d\n",c);  
  
fclose(in); fclose(out);  
return 0 ;  
}  
