//This is The Coding Area
//Created by Abhishek Chandarana

#include <stdio.h>

int main()
{
    int i,j,ans = 0;
    int stringLimit;
    int noOfQuery;
    int queries[10000];
    int answers[10000];
    char inputString[500000];
    
    scanf("%d ",&stringLimit);
    
    fgets(inputString, stringLimit + 1, stdin);
    
    scanf("%d",&noOfQuery);
    
    for(i=0; i<noOfQuery; i++)
    {
        scanf("%d",&queries[i]);
    }
    
    for(i=0; i<noOfQuery; i++)
    {
        for(j=0; j<queries[i] - 1; j++)
        {
            if(inputString[queries[i] - 1] == inputString[j]) 
            {
                answers[i] = ans + 1;
                ans++;
            }
        }
        ans = 0;
    }
    
    for(i=0; i<noOfQuery; i++)
    {
        printf("%d\n",answers[i]);
    }
    return 0;
}
