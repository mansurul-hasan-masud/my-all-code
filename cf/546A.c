#include<stdio.h>
int main()
{
   int k,n,w,s;
   scanf("%d%d%d",&k,&n,&w);
   s=k*(w*w+w)/2;
   if(s<=n)
   {
       printf("%d",0);
   }
   else{
   printf("%d",s-n);
   }

}

