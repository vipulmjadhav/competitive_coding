/*
C++ 2-D Arrays | Set-2
Submissions: 7362   Accuracy:

25.17%   Difficulty: Basic
   
 
 

Given n*n spaced integers of a 2-d Array.Task is to set every value in the matrix to 0 if that row or columns contains a 0.

Input:
First line of input file contains an integer T, denoting the number of test cases. Then T test case follow. First line of each test case contains a integer n.Next line contains n*n spaced integers. 

Output:
For each test case, Print the final matrix formed after performing the required task.

Constraints:
1<=T<=110
1<=n<=100
0<=a[i][j]<=1000

Example:
Input:
1
3
1 2 3 4 0 5 0 6 7
Output:
0 0 3 0 0 0 0 0 0 
*/
#include <iostream>
using namespace std;

int main() {
	//code
	
	int n;
	cin>>n;
	
	while(n--)
	{
	    int m;
	    cin>>m;
	    int arr[m][m];
	    int row[1000]={-1};
	    int column[1000]={-1};
	    int r=0,c=0;
	    
	    for(int i=0;i<m;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            cin>>arr[i][j];
	            
	            if(arr[i][j]==0)
	            { 
	                row[r++]=i;
	                column[c++]=j;
	            }
	        }
	    }
	    r=0,c=0;
	    
	    while(row[r]!=-1)
	    {
	        for(int i=r;i==r;i++)
	        {
	            for(int j=0;j<m;j++)
	            {
	                arr[i][j]=0;
	            }
	        }
	        r++;
	    }
	    
	    while(column[c]!=-1)
	    {
	        for(int i=0;i<m;i++)
	        {
	            for(int j=c;j==c;j++)
	            {
	                arr[i][j]=0;
	            }
	        }
	        c++;
	    }
	    
	    for(int i=0;i<m;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            cout<<arr[i][j]<<" ";
	        }
	    }
	}
	return 0;
}
