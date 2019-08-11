/*Let d(n) be defined as the sum of proper divisors of n (numbers less than n which divide evenly into n).
If d(a) = b and d(b) = a, where a ≠ b, then a and b are an amicable pair and each of a and b are called amicable numbers.

For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; therefore d(220) = 284. The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.

Evaluate the sum of all the amicable numbers under 10000.*/

#include <stdio.h>

int main()
{
    //printf("Hello World");
    int itr, i;
    int total1 = 0, total2 = 0;
    int grandTotal = 0;
    
    for(itr = 1; itr<=10000; itr++)
    {
        total1 = 0;
        total2 = 0;
        for(i = 1; i<itr; i++)
        {
            if(itr % i == 0)
            {
                total1 = total1 + i;
            }
        }
        for(i = 1; i<total1; i++)
        {
            if(total1 % i == 0) 
            {
                total2 = total2 + i;
            }
        }
        if(itr == total2 && total1 != total2)
        {
            printf("%d %d \n",total1, total2);
            grandTotal = grandTotal + itr;    
        }
    }
    printf("%d",grandTotal);
    return 0;
}
