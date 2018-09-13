//problem statement

/*you have been given a String S. You need to find and print whether this string is a palindrome or not. If yes, print "YES" (without quotes), else print "NO" (without quotes).

Input Format
The first and only line of input contains the String S. The String shall consist of lowercase English alphabets only.

Output Format
Print the required answer on a single line.

Constraints 1<=s<=100

Note
String S consists of lowercase English Alphabets only. 
*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    char arr[100]={'\0'};
    scanf("%s",arr);
    
    char *str = arr;
    char *strend = arr;
    
    int flag = 0;
    
    while(*str!='\0')
    {
        strend++;
        str++;
    }
    *strend = '\0';
    strend--;
    
    str = arr;
    
    while(str<strend)
    {
        if(*str != *strend)
        {
            flag=1;
        }
        str++;
        strend--;
    }
    
    if(flag==0)
        printf("YES");
    else
        printf("NO");
        
    
}
