#include <stdio.h>
int main(){
   int a,b,theLarger;                                               /*定义变量*/
   printf("Input two integers:");                                   /*打印提示*/
   scanf("%d %d",&a,&b);                                            /*输入要比较的整数*/
   if(a>b){                                     
      printf("The larger one is %d",a);
	}  
     else if (a==b)
	       {
         printf("The two intengers are the same.");}
	  else if (a<b)
	       {printf("The larger one is %d",b);}                   /*比较大小并输出结果*/
   system("pause");
   return 0;
}
