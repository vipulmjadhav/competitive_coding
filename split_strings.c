/*
Split Strings

Given a string S which consists of alphabets , numbers and special characters. You need to write a program to split the strings in three different strings S1, S2 and S3 such that the string S1 will contain all the alphabets present in S , the string S2 will contain all the numbers present in S and S3 will contain all special characters present in S.  The strings S1, S2 and S3 should have characters in same order as they appear in input.

Input:
First line of input contains a single integer T which denotes the number of test cases. First line of each test case contains a String S of alphabets, numbers and special characters.
Output:
For each test case, In the first line print the string S1 which contains all the alphabets of S. In the second line print the string S2 which contains all the numbers. In the third line print the string S3 which contains all the special characters present in S.

Constraints:
1<=T<=100
3<=Length(S)<=1000

Example:
Input:
2
geeks01for02geeks03!!!
**Docoding123456789everyday##
Output:
geeksforgeeks
010203
!!!
Docodingeveryday
123456789
**##
*/

#include<stdio.h>

void split(char* str)
{
    if(str==NULL)
        return ;
    
    char alpha[400]={'\0'};
    int dig[400]={0};
    char chars[400]={'\0'};
    
    int i=0,j=0,k=0;
    
    while(*str!='\0')
    {
        if(*str >='a' && *str <='z')
        {
            alpha[i++] = *str;
        }
        else
        {
            if(*str>='0' && *str<='9')
            {
                dig[j++] = *str;
              
            }
            else
            {
                chars[k++] = *str;
            }
        }
        str++;
        
    }
    
    for(int i=0;alpha[i]!='\0';i++)
        printf("%c",alpha[i]);
        printf("\n");
    
    for(int i=0;dig[i]!=0;i++)
        printf("%c",dig[i]);
        printf("\n");
    
    for(int i=0;chars[i]!='\0';i++)
        printf("%c",chars[i]);
        printf("\n");
    
}
int main()
{
    int n;
    scanf("%d",&n);
    
    while(n--)
    {
        char arr[1000]={'\0'};
        scanf("%s",arr);
        
        split(arr);
    }
	return 0;
}
