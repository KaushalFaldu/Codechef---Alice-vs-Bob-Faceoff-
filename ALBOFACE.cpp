#include <iostream>
#define  kp int
using namespace std;

void solve()
{
	kp n;
	cin>>n;
	if(n==1)
	{
		cout<<"Alice"<<endl;
		return;
	}
	if(n==2)
	{
		cout<<"Bob"<<endl;
		return;
	}
	kp cur=4;
	for(kp i=2;i<64;i++)
	{
		if(cur>n+2)
		{
		    break;
		} 
		if(cur==n||cur==n+1)
		{
			cout<<"Alice"<<endl;
			return;
		}
		cur*=2;
	}
	cur=8;
	for(kp i=2;i<64;i++)
	{
		if(cur>n+4)
		{
		break;
		}
		if(cur==n+2||cur==n+3)
		{
			cout<<"Bob"<<endl;
			return;
		}
		cur*=2;
	}
	if(n%2==0)
{
	cout<<"Alice"<<endl;
}	
	else 
	{
	    cout<<"Bob"<<endl;
	}

}
int main()
{
	int a;
	cin>>a;
	while(a--)
	{
		solve();
	}
}