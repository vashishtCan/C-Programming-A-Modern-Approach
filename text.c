#include <stdio.h>
#define BALANCE 100.00

int main()

{
    int rate, time, i;
    double value[5];

    printf("Enter interest rate: "); 
    scanf("%d", &rate);

    printf("Enter time period: "); 
    scanf("%d", &time);

    printf("Years: ");

    for (i=0; i < 5; i++)
    {
        value[i] = BALANCE;
    }

    for (i=rate; i <=rate+4; i++)
    {
        printf("%6d%%", i);
    }

    printf("\n");

    for (i=1; i <=time ; i++){

        int temp_rate = rate;
    
        printf("%d", i);
        {
            for (int j =0; j < 5; j++)
            {
                value[j] = value[j] + value[j]*(((double)temp_rate)/100.00);
                printf("\t%6.2f", value[j]);
                temp_rate++;
            }
        }

        temp_rate = rate;
        printf("\n");
    }
}