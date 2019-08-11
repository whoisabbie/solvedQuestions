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