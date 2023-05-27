#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("how many array elements do you have: ");
    scanf("%d", &size);

    int* array = (int*)malloc(size * sizeof(int));
    printf("what are the array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d: ", i+1);
        scanf("%d", &array[i]);

}

    int newsize;

    printf("Enter new the array size: ");
    scanf("%d", &newsize);

    array = (int*)realloc(array, newsize * sizeof(int));

    printf("Enter the new array elements:\n");
    for (int i = size; i < newsize; i++)
        {
        printf("%d: ", i+1);
        scanf("%d", &array[i]);
        }

        printf("Array elements:\n");

        for (int i = 0; i < newsize; i++)
        {
        printf("%d.%d\n ", i+1,array[i]);
        }

    printf("\n");

     free(array);

    return 0;

    }
