/* Sample Input
2
4
5
1 4 5 3 2
4
4
2 2 4 3
Sample Output
1 4
1 2*/


#include <stdio.h>

int main()
{
    int trips,money,flavour;
    printf("Enter the number of trips: ");
    scanf("%d" , &trips);
    while(trips--)
    {
        printf("\nEnter the money and number of flavours: ");
        scanf("%d %d",&money,&flavour);

        int cost_of_flavours[flavour];
        for(int i = 0;i < flavour;i++)
        {
            printf("\nThe cost of each flavour is: ");
            scanf("%d" , &cost_of_flavours[i]);
        }
        for(int i = 0;i < flavour;i++)
        {
            for(int j = i+1;j < flavour;j++)
            {
                if(cost_of_flavours[i] + cost_of_flavours[j] == money)
                {
                    printf("\nThe indices of the two flavours purchased are: \n%d\t%d",i+1,j+1);
                }
            }
        }
    }

    return 0;
}
