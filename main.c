#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char* tamisim;
    char name[100];
    char surname[100];

    printf("your name? :");
    fgets(name, sizeof(name),stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("your surname? :");
    fgets(surname, sizeof(surname),stdin);

    tamisim = (char*)malloc((strlen(name)+strlen(surname)+2) * sizeof(char));
    strcpy(tamisim, name);
    strcat(tamisim, " ");
    strcat(tamisim, surname);

    printf("Name-Surname: %s", tamisim);

    free(tamisim);

    return 0;


}
