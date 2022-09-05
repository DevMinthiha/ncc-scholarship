#include <stdio.h>
#define SIZE 10
int main()
{

    int data[100], sum = 0, average = 0, num;
    printf("Enter number of data : ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("Enter data %d", i + 1);
        scanf("%d", &data[i]);
    }

    for (int j = 0; j < num; j++)
    {
        sum = sum + data[j];
    }
    
    average = sum / num;
    printf("Average => %d \n", average);

    printf("Constant = ", SIZE);
    

    return 0;
}

