#include <stdio.h>
#include <stdlib.h>

int main()
{
    int elements;

    printf("How many elements do you have? :");
    scanf("%d", &elements);

    int *data = (int *)calloc(elements, sizeof(int));

    int maximum = 0;
    int value;

    for (int i = 0; i < elements; i++)
    {
        printf("enter element %d: ", i + 1);
        scanf("%d", &data[i]);

        if (data[i] > maximum)
            {
            maximum = data[i];
            }
    }

    printf("The biggest value: %d\n", maximum);

    free(data);

    return 0;
}



