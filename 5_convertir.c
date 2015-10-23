# include <stdio.h>
/*
*/
int main ()
{//inicio
  float nb,b,d;
    int e,f;
   printf ( "Dame valor de megabytes para conovertirlo \n bytes \n kilobytes\n gigabytes\n terabytes\n" );
   scanf ( "%f" , & nb );
   e=nb*1024;  
   f=nb*1024/1024; 
   b=nb/1024; 
   d=nb/1024/1024; 
   printf ( "Sus equivalencias son:\n" );
   printf ( "bytes: %d \n",e);
   printf ( "kilobytes: %d \n",f);
   printf ( "gigas: %f \n",b);
   printf ( "teras: %lf \n",d);
}//fin


