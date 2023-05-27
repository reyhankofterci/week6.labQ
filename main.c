#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char *tamisim;
    char name[100];
    char surname[100];

    printf("what is your name? :");
    fgets(name, sizeof(name),stdin);

    name[strcspn(name, "\n")] = '\0';

    tamisim = (char*)malloc((strlen(name) + 1) * sizeof(char));
    strcpy(tamisim, name);

    printf("\nwhat is your surname? :");
    fgets(surname, sizeof(surname),stdin);

    int surname_length = strlen(surname);

    tamisim = (char*)realloc(tamisim, (strlen(name) + surname_length + 2) * sizeof(char));

    strcat(tamisim, " ");
    strcat(tamisim, surname);
    printf("\n\nNAME AND SURNAME: %s",  tamisim   );

    free(tamisim);

    return 0;
}
