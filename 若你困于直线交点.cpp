#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int read()
{
	register int ans=0;
	char ch;
	bool flag=0;
	while(1)
	{
		ch=getchar();
		if (ch>='0'&&ch<='9')
		{
			break;
		}
		if (ch=='-')
		{
		   flag=1;
		}
	}
	while(1)
	{
		ans=ans*10+ch-'0';
		ch=getchar();
		if (ch<'0'||ch>'9')
		{
			break;
		}
	}
	if (flag==1)
	{
	   ans*=-1;
	}
	return ans;
}
#define sayhello cout<<"若你困于直线交点，我将为你奏响求解之歌。\n";
void y(int &up,int &down)
{
	int gcd=__gcd(up,down);up/=gcd;down/=gcd;
}
int main()
{
	//freopen(".in","r",stdin);
	//freopen(".out","w",stdout);
	int k1,b1,k2,b2;
	sayhello
	cout<<"渡鸦小Tip：暂时只能输入整数QwQ。\n"; 
	cout<<"输入直线1解析式：y1=k1x+b1\n"<<"k1=";cin>>k1;cout<<"b1=";cin>>b1;
	cout<<"输入直线2解析式：y2=k2x+b2\n"<<"k2=";cin>>k2;cout<<"b2=";cin>>b2;
	//k1x+b1=k2x+b2
	int xup=(b2-b1),xd=k1-k2;
	y(xup,xd);
	printf("交点横坐标x=%d分之%d，约等于%lf\n",xd,xup,(double)xup/xd);
	int yup=k1*b2-k2*b1,yd=k1-k2;y(yup,yd);
	printf("纵坐标y=%d分之%d，约等于%lf",yd,yup,(double)yup/yd);
	fclose(stdin);
	fclose(stdout);
	return 0;
}


