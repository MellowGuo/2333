#include<stdio.h> 
	int main()
	{
		int x,y;
		printf("������һ����ά����");
		scanf("%d %d",&x,&y); 
		x=x>0?x:-x;
		y=y>0?y:-y;
		if((x-2)*(x-2)+(y-2)*(y-2) <= 1)
			printf("�õ㽨���߶�Ϊ10m");
		else
			printf("�õ㽨���߶�Ϊ0m");
		return 0;
	}
