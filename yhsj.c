#include<stdio.h>
	int main()
	{
		int a[10][10] = {{0,1},{1,1},{1,1}};	//每一行的内容 
		int l=2;								//行数-1
			printf("1\n1 1\n");
			while(l<10)
			{
				for(int j=1;j<l;j++)		//进行第l行的运算 
				{
					a[l][0] = a[l][l] = 1;
					a[l][j] = a[l-1][j] + a[l-1][j-1];
				}
				for(int k=0;k<l+1;k++)		//输出第l行的内容 
					{
						printf("%d ",a[l][k]);
					}
					printf("\n");
				l++;		//行数+1 
			}
	 } 
