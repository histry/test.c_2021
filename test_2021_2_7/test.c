#define _CRT_SECURE_NO_WARNINGS 1

 /*
  ˼·��
      ��temp�������壬��temp-1�״��ķ�����Ϊ��b[temp-1]����b[temp+1]=b[temp-1],�ҵ�temp+2���ķ�����ҲΪb[temp-1]������b[temp+1]=b[temp-1]=b[temp+2].
  ����b[i]=b[i-1]+b[i-2];
      ������֪b[1]=b[2]=1;
      ���������i�״��ķ�����Ϊb[i]=0��
  */
	 #include<stdio.h>
	 int main() {
	     int n, m;
	     scanf("%d%d", &n, &m);
	     int b[n], xianjing[m];//b[i]��ʾ����i�״��ķ�����
	     for (int i = 0; i <= n; i++) {//�Ƚ�b����ֵ
		         b[i] = 1;
		
	}
	     int flag = 0;//����Ƿ������ڵ����� 
	     for (int i = 1; i <= m; i++) {
		         scanf("%d", &xianjing[i]);
		         b[xianjing[i]] = 0;//�������λ�÷�����Ϊ0
		         if (i > 1)
			             if (xianjing[i] - xianjing[i - 1] == 1 || xianjing[i] - xianjing[i - 1] == -1)
			                 flag = 1;
		
	}
	     if (flag == 1)//�������ڵ�����,�������� 
	         printf("0");
	     else {
			 for (int i = 3; i <= n; i++)
			 {
				 if (b[i] == 0)
					 continue;
			 }
			else		 
				{ 
			                 b[i] = b[i - 1] + b[i - 2];
				 }
		        printf("%d", b[n]);
	}
     return 0;
}
