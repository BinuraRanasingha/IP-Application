#include <stdio.h>
int main()
{
    char c_type;
    char c_name[50];
    int count;
    char result;

    for (count = 0; count <= 2; count++)
    {
        printf("Enter the course type:");
        scanf("%c", &c_type);

        if (c_type == 'H' || c_type == 'h')
            printf("Diploma in Hospitality Management\n");


        else if (c_type == 'M' || c_type == 'm')
            printf("Diploma in Marketing\n");


        else if (c_type == 'F' || c_type == 'f')
            printf("Diploma in Finance\n");


        else
            printf("Invalid course type\n");


        printf("Are there any more to be registered:");
        scanf("%c", &result);
        printf("\n");

        if (result == 'N')
        {
            break;
        }

    }
    return 0;
}