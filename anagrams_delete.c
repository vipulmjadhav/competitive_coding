/*
Given two strings, a and b , that may or may not be of the same length, determine the minimum number of character deletions required to make a and b anagrams. Any characters can be deleted from either of the strings.

Input :

    test cases,t
    two strings a and b, for each test case

Output:

Desired O/p

Constraints :

string lengths<=10000

Note :

Anagram of a word is formed by rearranging the letters of the word.

For e.g. -> For the word RAM - MAR,ARM,AMR,RMA etc. are few anagrams.
SAMPLE INPUT

1
cde
abc

SAMPLE OUTPUT
4

*/

#include<stdio.h>

int anagram(char*str1,char*str2)
{
    if(str1==NULL || str2==NULL)
        return ;
    
    int rcnt=0;
    
    int arr[26]={0};
    int brr[26]={0};
    
    
    while(*str1 != '\0')
    {
        arr[*str1 - 'a']++; 
        str1++;
    }
    
    while(*str2 != '\0')
    {
        brr[*str2 - 'a']++; 
        str2++;
    }
    
    for(int i=0;i<26;i++)
        rcnt+=abs(arr[i]-brr[i]);
        
    return rcnt;
}

int main()
{   
    int t;
    scanf("%d",&t);
    
    int iret=0;
    
    while(t--)
    {
        char arr[10000]={'\0'};
        char brr[10000]={'\0'};
    
        scanf("%s",arr);
        scanf("%s",brr);
        
        iret = anagram(arr,brr);
        
        printf("%d\n",iret);
    }
    
    
    return 0;
}
