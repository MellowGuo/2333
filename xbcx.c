#include<stdio.h>
#include<stdlib.h>
#include<time.h>
	int main()
	{
		int x=0,z=0;
		int i=0,j=0,t=0; 
		int a[15];
		srand(time(NULL));
		for(i=0;i<15;i++)
		{
			a[i] = rand()%100;
			printf ("%2d ",a[i]);
		}
		printf("\n");
		for(i=0;i<15;i++)
		{
			for(j=i+1;j<15;j++)
			{
				if(a[i]<a[j])
				{
					t = a[i]; 
					a[i] = a[j]; 
					a[j] = t;
				}
			}
		printf("%2d ",a[i]);			//随机生成15个数并排序输出 
		}
		
		
		printf("\n请输入一个整数 ");
		scanf("%d",&x);
		z = 7;
		t = 7;		//初始化 
		for(i=0;i<8;i++)
		{
			if(x == a[t])
			{
				printf("是该数组的第%d个数\n",t+1);		//判断 
				break;
			}
			else if(x > a[t])
				{
					t = t - z ; 
				}
				else t = t + z ;
				
			if(t > 14) t = 6;
			printf("t=%d\n",t);
			z = (z+1)/2 ;
			
		}
		if(i == 8)
		{
			printf("无此数。");
		}
		return 0;
	 } 
