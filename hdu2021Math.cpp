//hdu2021 数学题，整除和取余的运算
/*
#include<iostream>
using namespace std;
int main()
{
	int i, n, a[101], num;
	cin >> n;
	while (n){
		num = 0;
		for (i = 0; i < n; i++){
			cin >> a[i];
			num += a[i] / 100 + (a[i] % 100) / 50 + ((a[i] % 100) % 50) / 10 + ((a[i] % 100) % 50) % 10 / 5 + ((a[i] % 100) % 50) % 10 % 5 / 2 + ((a[i] % 100) % 50) % 10 % 5 % 2;
		}
		cout << num << endl;
		cin >> n;
	}
	return 0;
}

*/
#include<iostream>
#include<cstdio>
#include<stack>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
int a[110];
int cou;
int n;
int b[6]={100,50,10,5,2,1};
int solve(int x)
{
    int p=0;
    int tmpa=a[x];
    for(int j=0;j<6&&tmpa>0;j++)
    {
        while(tmpa-b[j]>=0)
        {
            tmpa=tmpa-b[j];
            p++;
        }
    }
    return p;
}
int main()
{
    int i;
    while(cin>>n&&n)
    {
        memset(a,0,sizeof(a));
        cou=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cou+=solve(i);
        }
        cout<<cou<<endl;
    }
    return 0;

}


