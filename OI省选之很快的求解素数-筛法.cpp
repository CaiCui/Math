#pragma comment(linker,"/STACK:1024000000,1024000000")
#include <bits/stdc++.h>
using namespace std;
/*
  OI省选法之筛选法求素数
  思路：不考虑偶数，只考虑奇数，把已找到的素数的倍数全部筛掉，剩下的就是素数
  两个优化：1.只考虑奇数做筛选。
	    2.每次后面筛选的位置由数学归纳的规律推算出来。
*/
#define INF -10000000
#define N 31
int main()
{
   int n=N/2;//N为偶数开辟N/2-1，N为奇数，开辟N/2
   bool prime[n];
   int k;
   memset(prime,1,sizeof(prime));
   for(int i=0;2*i+3<sqrt(N);i++)
   {
       k=i*2+3;
       if(prime[i])
        {
            for(int j=i*(2*i+6)+3;j<n;j+=k)//这个优化是通过规律枚举得到的，j=i+(2*i+3)*(i+1)
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
