/* VITUSAA que1

find no of trailing zeroes in factoral of a number provided

input 5
output 1

explanation -> fact(5) 120
no of trailing zeros 1 

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
		
		int fact=1,result=0;
		
		for(int i=1;i<=n;i++)
			fact*=i;
		
		cout<<"FACTORIAL -> "<<fact<<endl;
		
		int rem;
		
		while(fact>0)
		{
			rem = fact%10;
			
			if(rem==0)
			{
				result++;
				fact/=10;
				
			}
			else
			{
				fact=0;
				break;
			}
		}
		cout<<result<<"\n";
		
		
	}
	
	return 0;
}
