/*
	VIRTUSAA que3
	
	input 4
	
	output 2
	
	explanation: from 1 to 4 there are 2 number which are coprime with two ie 1,3
	(1,4) are coprimes
	(3,4) are coprimes 
	
	coprime -> having gcd 1..

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
		
		int cnt=0;
		
		for(int i=1;i<n;i++)
		{
			
			int no1 = n;
			int no2 = i;
			
			int rem=0;
			
			while(no2!=0)
			{
				rem = no1%no2;
				no1 = no2;
				no2=rem;
				
			}
			if(no1==1)
			{
				cout<<i<<" ";
				cnt++;
			}
		}
		
		cout<<endl<<cnt<<endl;
	}			
}
