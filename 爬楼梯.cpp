#include<stdio.h>
int a[5000][1000],b[5000];
void dfs(int x)
{	
    int i;
	if(x<=0)
	{
		return ;
	}
	else if(x==1)
	{
		a[x][0]=1;
	}
	else if(x==2)
	{
		a[x][0]=2;
	}
	else if(x>2)
	{
		dfs(x-1);
		dfs(x-2);
		for(i=0;i<1000;i++)
		{
			a[x][i]=a[x-1][i]+a[x-2][i];
		}
		for(i=0;i<1000;i++)
		{
			if(a[x][i]>9)
			{
				a[x][i+1]+=1;
				a[x][i]%=10;
			}
		}
		for(i=999;i>=0;i--)
		{
			if(a[x][i]!=0)
			{
				b[x]=i;
				break;
			}
		}
	}	
};
int main()
{
	int n,k;
	scanf("%d",&n);
	dfs(n);
	for(k=b[n];k>=0;k--)
	{
		printf("%d",a[n][k]);
	}
	return 0;
}
