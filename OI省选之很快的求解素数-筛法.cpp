#pragma comment(linker,"/STACK:1024000000,1024000000")
#include <bits/stdc++.h>
using namespace std;
/*
  OIʡѡ��֮ɸѡ��������
  ˼·��������ż����ֻ���������������ҵ��������ı���ȫ��ɸ����ʣ�µľ�������
  �����Ż���1.ֻ����������ɸѡ��
	    2.ÿ�κ���ɸѡ��λ������ѧ���ɵĹ������������
*/
#define INF -10000000
#define N 31
int main()
{
   int n=N/2;//NΪż������N/2-1��NΪ����������N/2
   bool prime[n];
   int k;
   memset(prime,1,sizeof(prime));
   for(int i=0;2*i+3<sqrt(N);i++)
   {
       k=i*2+3;
       if(prime[i])
        {
            for(int j=i*(2*i+6)+3;j<n;j+=k)//����Ż���ͨ������ö�ٵõ��ģ�j=i+(2*i+3)*(i+1)
                prime[j]=false;
        }
   }
   printf("2 ");
   for(int j=0;j<n;j++)
   {
       if(prime[j])
        printf("%d ",j*2+3);
   }
   return 0;
}
