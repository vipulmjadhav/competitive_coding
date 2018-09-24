/*
Given two strings of equal length, you have to tell whether they both strings are identical.

Two strings S1 and S2 are said to be identical, if any of the permutation of string S1 is equal to the string S2. See Sample explanation for more details.

Input :

    First line, contains an intger 'T' denoting no. of test cases.
    Each test consists of a single line, containing two space separated strings S1 and S2 of equal length.

Output:

    For each test case, if any of the permutation of string S1 is equal to the string S2 print YES else print NO.

Constraints:

    1<= T <=100
    1<= |S1| = |S2| <= 10^5
    String is made up of lower case letters only.

Note : Use Hashing Concept Only . Try to do it in O(string length) .
SAMPLE INPUT

3
sumit mitsu
ambuj jumba
abhi hibb

SAMPLE OUTPUT

YES
YES
NO
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    
    
    
    while(t--)
    {
        char arr[100000]={'\0'};
        char brr[100000]={'\0'};
        int check[26] = {0};
        
        scanf("%s",arr);
        scanf("%s",brr);
        
        char*str1,*str2;    
        
        str1 = arr;
        str2 = brr;
        
        while(*str1!='\0')
        {
            check[*str1 - 97]++;
            check[*str2 - 97]--;
            str1++;
            str2++;
        }
        
        int flag=0;
        
        for(int i=0;i<26;i++)
        {   
            if(check[i]!=0)
            {
                flag=1;
                break;
            }
        }
        
        if(flag==1)
            printf("NO\n");
        else
            printf("YES\n");
    }
    
    
    return 0;
}
