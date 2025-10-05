#include <stdio.h>

int main()
{
    char A[25]; int i, j=0, start;

    printf("Enter a first and last name: ");

    do
    {

        scanf("%c", &A[j]);

        if (A[j] == ' ')
        {
            start = j+1;
        }

        if (A[j] == '\n')
        {
            break;
        }

        j++;

        
    } while (j < 25);

    printf("You entered the name: ");

    for (i=start; i < j; i++)
    {
        printf("%c", A[i]);
    }

    printf(", %c.", A[0]);
}
    