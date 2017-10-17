#include <stdio.h>

int main()
{
	int time,second,minute,hour;                                                                /*定义变量*/ 
	printf("Input the time in second:\n");                                                      /*打印提示*/ 
	scanf("%d",&time);                                                                          /*输入要转换的时间*/ 
	minute=time/60;                                                                           
	second=time%60;
	hour=minute/60;
	minute=minute%60;
	printf("Time is %d hour %d minute %d second \n",hour,minute,second);                        /*打印结果*/ 
	system("pause");
	return 0;
}
