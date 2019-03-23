#include<stdio.h>
#include<stdlib.h>
#include<time.h>
	int main()
	{
		int an[10][10]={0,0};
		int amax = 0, amin = 0, ax = 0, ay = 0;
		int i = 0, j = 0 , k =0;
		  srand(time(NULL));
			for(i=0;i<10;i++)
			{
				for(j=0;j<10;j++)
				{
					an[i][j] = rand()%101;
					printf("%2d ",an[i][j]);
				}
				printf("\n\n");
			}							//生成10*10的二维数组并输出 
			
			
			for(i=0;i<10;i++)	 
			{
				amax = 0;amin = 100;ax = 0;ay = 0;		//初始化  给amin一个较大值且不等于amax 
				for(j=0;j<10;j++)	 
					{
						if(an[i][j] > amax)		//找出第i行的最大值并记录其下标 
						{
							amax = an[i][j];		
							ax = i; 
							ay = j;
						}
					} 
				for(k=0;k<10;k++)			//找出第i行最大值所在的列的最小值 
					{
						if(amin > an[k][ay])
						{
							amin = an[k][ay];
						//	printf("%d %d\n",amin,k);	
						} 
					} 	 
				//	printf("amax = %d,下标为[%d][%d]\n",amax,ax+1,ay+1);
				//	printf("amin = %d\n",amin);		
					if(amax == amin)		//判断鞍点并输出
					{
						printf("鞍点为%d,其下标为[%d][%d]。\n",amax,ax+1,ay+1);
					//	break; 
					 }
					 else
					 printf("第%d行没有鞍点\n",i);
					  printf("\n");
			}
		return 0;
	 } 
