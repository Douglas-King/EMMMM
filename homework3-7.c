#include <stdio.h>

int main()
{
	int time,second,minute,hour;                                                                /*�������*/ 
	printf("Input the time in second:\n");                                                      /*��ӡ��ʾ*/ 
	scanf("%d",&time);                                                                          /*����Ҫת����ʱ��*/ 
	minute=time/60;                                                                           
	second=time%60;
	hour=minute/60;
	minute=minute%60;
	printf("Time is %d hour %d minute %d second \n",hour,minute,second);                        /*��ӡ���*/ 
	system("pause");
	return 0;
}
