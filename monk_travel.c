    /*
    
    Monk loves to travel. Since his summer vacation was nearing, he decided to plan a journey to Coderland. Now as Monk is just a competitive programmer, he is always short of money. In order to make this journey happen, he wants to minimize the total travel expenditure.

Journey to Coderland will be through N checkpoints. Checkpoints are numbered from 0 to
. At the start of the journey Monk is present at the checkpoint 0. Also checkpoint will lead to Coderland. Each checkpoint has a petrol pump which can be used to fill petrol in the car. Now cost of petrol per litre at different checkpoints is given by array C which has 0-based indexing where is the cost per litre of petrol at the checkpoint. Note that there is an infinite amount of supply at each checkpoint and car tank is also of infinite capacity. Now another array L is given which has 0-based indexing where denotes the amount of petrol in litres required to reach the checkpoint from the checkpoint. Note that the extra petrol remaining in the tank does not vanishes after reaching a checkpoint. Also, Monk should have atleast

litres of petrol at each checkpoint in order to reach the next checkpoint.

Can you help Monk estimate the minimum cost required in order complete the journey?

Input:

First line of the input contains test cases denoted by T.

For each of the test cases, first line contains a single integers N denoting the number of checkpoints.

The next line contains N space separated integers representing the array C which has 0-based indexing where the
integer denotes the cost per litre of petrol at

checkpoint.

Last line contains array L ,which has 0-based indexing, consisting of N space separated integers where the
integer denotes the required amount of petrol needed to reach the checkpoint from the

checkpoint.

-Output:

For each of the test cases, output the required answer in a separate line.

Constraints:

SAMPLE INPUT

1
2
5 1 
1 2

SAMPLE OUTPUT

7


    
    
    */
    
    #include <stdio.h>
     
    int main()
    {
        int t,n,i;
        long tot_cost, min;
        scanf("%d",&t);
        while(t--)
        {
            scanf("%d",&n);
            long C[n], L[n];
            for(int i=0;i<n;i++)
                scanf("%ld",&C[i]);
            for(int i=0;i<n;i++)
                scanf("%ld",&L[i]);
            min = C[0];
            tot_cost = min*L[0];
            i=1;
            while(i<n)
            {
                if(C[i]<min)
                    min = C[i];
                tot_cost += L[i]*min;
                i++;
            }
            printf("%ld\n", tot_cost);
        }
        return 0;
    }
