/* VIRTUSAA -> que2
find nth prime 

input 2
output 5

input 5
output 11

constaints 1<=n<=10000

*/ 

#include<iostream>
using namespace std;

int main()
{

	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		
		int num=1;
		int cnt=0,i;
		
		while(cnt<n)
		{
			num++;
			
			for(i=2;i<num;i++)
			{
				if(num%i == 0)
					break;
			}
			if(i==num)
				cnt++;
			
			
		}
		cout<<num<<endl;
	}	
	
	
return 0;
}

