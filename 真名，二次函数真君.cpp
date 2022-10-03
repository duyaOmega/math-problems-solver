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
#define sayhello cout<<"就让那昭告命运的圣裁之雷，照耀此间天地吧。\n";
void y(int &up,int &down)
{
	int gcd=__gcd(up,down);up/=gcd;down/=gcd;
}
int main()
{
	//freopen(".in","r",stdin);
	//freopen(".out","w",stdout);
	sayhello
	cout<<"渡鸦小Tip：暂时只能输入整数QwQ。\n"; 
	int a,b,c;
	cout<<"输入函数解析式：y=ax^2+bx+c\n"<<"a=";cin>>a;cout<<"b=";cin>>b;cout<<"c=";cin>>c;
	int dup=-b,dd=2*a;
	y(dup,dd);if (dup<0) dd=-dd,dup=-dup;
	printf("该函数关于直线x=%d分之%d对称，约等于%lf\n",dd,dup,(double)dup/dd); 
	int mup=4*a*c-b*b,md=4*a;y(mup,md);
	printf("最值为%d分之%d，约等于%lf",md,mup,(double)mup/md);
	fclose(stdin);
	fclose(stdout);
	return 0;
}


