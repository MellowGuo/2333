#include<stdio.h> 
	int main()
	{
		int x=0, i=0, t=0;
		int a[5]={0};
		printf("������һ����������λ����������");
		scanf("%d",&x);
		for(i=4;x>0;i--)
		{
			a[i] = x % 10;
			x /= 10;
		//	printf("%d ",x);
			t++;
		}
		printf("�������һ��%dλ��\n����",t);
		for(i=5-t;i<5;i++)
		{ 
				printf("%d ",a[i]);
		}
		printf("\n����");
		for(i=4;i>4-t;i--)
		{
			printf("%d ",a[i]);
		}
	}
