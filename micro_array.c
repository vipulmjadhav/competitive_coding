/*
Micro purchased an array A having N integer values. After playing it for a while, he got bored of it and decided to update value of its element. In one second he can increase value of each array element by 1. He wants each array element's value to become greater than or equal to K. Please help Micro to find out the minimum amount of time it will take, for him to do so.

Input:
First line consists of a single integer, T, denoting the number of test cases.
First line of each test case consists of two space separated integers denoting N and K.
Second line of each test case consists of N space separated integers denoting the array A.

Output:
For each test case, print the minimum time in which all array elements will become greater than or equal to K. Print a new line after each test case.

Constraints:


1<=k<=10^6
1<N<10^5


SAMPLE INPUT

2
3 4
1 2 5
3 2
2 5 5

SAMPLE OUTPUT

3
0

*/

#include<stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int size,k;
        scanf("%d%d",&size,&k);
        
        int arr[size];
        int min=1000000;
        
        for(int i=0;i<size;i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]<min)
                min = arr[i];
        }
        if(min < k)
            printf("%d\n",(k-min));
        
        else
            printf("0\n");
    }
    
    
    return 0;
}


