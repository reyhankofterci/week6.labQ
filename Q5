#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *cumle;
    int cumle_uzunlugu = 1000;
    int kelime_sayisi = 0;

    cumle = (char*)malloc(cumle_uzunlugu * sizeof(char));


    printf("Enter a sentence: ");
    fgets(cumle, cumle_uzunlugu, stdin);


    for (int i = 0; cumle[i] != '\0'; i++)
        {
        if (cumle[i] == ' ' || cumle[i] == '\n')
        {
            kelime_sayisi++;
        }
        }


    char **kelime = (char**)malloc(kelime_sayisi * sizeof(char*));


        char* word = strtok(cumle, " \n");
        int index = 0;

        while (word != NULL)
        {
        kelime[index] = (char*)malloc((strlen(word) + 1) * sizeof(char));
        strcpy(kelime[index], word);
        word = strtok(NULL, " \n");
        index++;
        }

    printf("Words written backwards: ");

    for (int i = kelime_sayisi - 1; i >= 0; i--)
        {
        printf("%s ", kelime[i]);
        }

    printf("\n");

    for (int i = 0; i < kelime_sayisi; i++)
        {
        free(kelime[i]);
        }


    free(kelime);
    free(cumle);

    return 0;
}
