#include<stdio.h>
	int main()
	{
		int a[10][10] = {{0,1},{1,1},{1,1}};	//ÿһ�е����� 
		int l=2;								//����-1
			printf("1\n1 1\n");
			while(l<10)
			{
				for(int j=1;j<l;j++)		//���е�l�е����� 
				{
					a[l][0] = a[l][l] = 1;
					a[l][j] = a[l-1][j] + a[l-1][j-1];
				}
				for(int k=0;k<l+1;k++)		//�����l�е����� 
					{
						printf("%d ",a[l][k]);
					}
					printf("\n");
				l++;		//����+1 
			}
	 } 
