#include<stdio.h> 
	int main()
	{
		int x,y;
		printf("请输入一个二维坐标");
		scanf("%d %d",&x,&y); 
		x=x>0?x:-x;
		y=y>0?y:-y;
		if((x-2)*(x-2)+(y-2)*(y-2) <= 1)
			printf("该点建筑高度为10m");
		else
			printf("该点建筑高度为0m");
		return 0;
	}
