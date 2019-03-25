#include<stdio.h> 
	int main()
	{
		int x=0, i=0, t=0;
		int a[5]={0};
		printf("请输入一个不多于五位的正整数：");
		scanf("%d",&x);
		for(i=4;x>0;i--)
		{
			a[i] = x % 10;
			x /= 10;
		//	printf("%d ",x);
			t++;
		}
		printf("这个数是一个%d位数\n正序：",t);
		for(i=5-t;i<5;i++)
		{ 
				printf("%d ",a[i]);
		}
		printf("\n倒序：");
		for(i=4;i>4-t;i--)
		{
			printf("%d ",a[i]);
		}
	}
