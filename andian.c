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
			}							//����10*10�Ķ�ά���鲢��� 
			
			
			for(i=0;i<10;i++)	 
			{
				amax = 0;amin = 100;ax = 0;ay = 0;		//��ʼ��  ��aminһ���ϴ�ֵ�Ҳ�����amax 
				for(j=0;j<10;j++)	 
					{
						if(an[i][j] > amax)		//�ҳ���i�е����ֵ����¼���±� 
						{
							amax = an[i][j];		
							ax = i; 
							ay = j;
						}
					} 
				for(k=0;k<10;k++)			//�ҳ���i�����ֵ���ڵ��е���Сֵ 
					{
						if(amin > an[k][ay])
						{
							amin = an[k][ay];
						//	printf("%d %d\n",amin,k);	
						} 
					} 	 
				//	printf("amax = %d,�±�Ϊ[%d][%d]\n",amax,ax+1,ay+1);
				//	printf("amin = %d\n",amin);		
					if(amax == amin)		//�жϰ��㲢���
					{
						printf("����Ϊ%d,���±�Ϊ[%d][%d]��\n",amax,ax+1,ay+1);
					//	break; 
					 }
					 else
					 printf("��%d��û�а���\n",i);
					  printf("\n");
			}
		return 0;
	 } 
