
//problem statement

/*Akash and Vishal are quite fond of travelling. They mostly travel by railways. They were travelling in a train one day and they got interested in the seating arrangement of their compartment. The compartment looked something like


WS|6 7 |18  19|
MS|5 8 |17  20|
AS|4 9 |16  21|
  |    |      |
AS|3 10|15  22|
MS|2 11|14  23|..
WS|1 12|13  24|..
  
So they got interested to know the seat number facing them and the seat type facing them. The seats are denoted as follows :

    Window Seat : WS
    Middle Seat : MS
    Aisle Seat : AS

You will be given a seat number, find out the seat number facing you and the seat type, i.e. WS, MS or AS.

INPUT
First line of input will consist of a single integer T denoting number of test-cases. Each test-case consists of a single integer N denoting the seat-number.

OUTPUT
For each test case, print the facing seat-number and the seat-type, separated by a single space in a new line.

CONSTRAINTS

    1<=T<=105
    1<=N<=108
    
*/
#include<stdio.h>

void facing(int seat)

{    int mod = (seat % 12);
    

    if(mod == 0 || mod==1)
    {
        if(mod==0)
            printf("%d WS\n",seat-11);
            
        else if(mod==1)
            printf("%d WS\n",seat+11);        
            
    }
    
    else if(mod == 6 || mod == 7)
    {
        if(mod==6)
            printf("%d WS\n",seat+1);
            
        else if(mod==7)
            printf("%d WS\n",seat-1);        
    }
     
    
    if(mod == 3 || mod==4)
    {
        if(mod==3)
            printf("%d AS\n",seat+7);
            
        else if(mod==4)
            printf("%d AS\n",seat+5);        
            
    }
    
    else if(mod == 9 || mod == 10)
    {
        if(mod==9)
            printf("%d AS\n",seat-5);
            
        else if(mod==10)
            printf("%d AS\n",seat-7);        
    }
    
    
    if(mod == 2 || mod==5)
    {
        if(mod==2)
            printf("%d MS\n",seat+9);
            
        else if(mod==5)
            printf("%d MS\n",seat+3);        
            
    }
    
    else if(mod == 8 || mod == 11)
    {
        if(mod==8)
            printf("%d MS\n",seat-3);
            
        else if(mod==11)
            printf("%d MS\n",seat-9);        
    }
    
    
}

int main()
{
    
    int n;
    scanf("%d",&n);
    
    int seatno;
    
    while(n--)
    {
        scanf("%d",&seatno);
        
        facing(seatno);    
        
    
    }
    
    return 0;
}
