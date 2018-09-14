/*Your program is to use the brute-force approach in order to find the Answer to Life, the Universe, and Everything. More precisely... rewrite small numbers from input to output. Stop processing input after reading in the number 42. All numbers at input are integers of one or two digits.

sample input sample output
1            1
2 	     2
88	     88
42
99

*/

#include<stdio.h>
int main()
{
    
    int true=1,var;
    while(true)
    {
        scanf("%d",&var);
        if(var!=42)
            printf("%d\n",var);
        else
            true=0;
        
    }
}
