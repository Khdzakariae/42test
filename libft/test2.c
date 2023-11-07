#include <stdio.h>
#include <stdlib.h>

// Fonction pour allouer de la mémoire et initialiser à zéro
void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;
    ptr = malloc(nmemb * size);
    if (!ptr)
        return NULL; // Utilisez "NULL" au lieu de "0" pour indiquer une allocation échouée.
    // Initialisez la mémoire allouée à zéro.
    for (size_t i = 0; i < nmemb * size; i++) {
        ((char *)ptr)[i] = 0;
    }
    return ptr;
}

// Fonction pour extraire une sous-chaîne
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    // Vérifiez les conditions de dépassement de chaîne.
    if (start >= strlen(s) || len == 0) {
        return NULL;
    }
    
    // Allouez de la mémoire pour la sous-chaîne.
    char *ptr = ft_calloc(len + 1, sizeof(char));
    if (ptr == NULL)
    {
        return NULL;
    }

    // Copiez la sous-chaîne dans la mémoire allouée.
    for (size_t i = 0; i < len && s[start + i] != '\0'; i++) {
        ptr[i] = s[start + i];
    }
    ptr[len] = '\0';

    return ptr;
}

// Fonction pour compter le nombre de mots
int checkwords(char const *s, char c)
{
    size_t i = 0;
    int words = 0;

    while (s[i])
    {
        if (s[i] != c)
        {
            words++;
            while (s[i] && s[i] != c)
            {
                i++;
            }
        }
        else {
            i++;
        }
    }

    return words;
}

// Fonction pour diviser la chaîne en mots
char **ft_split(char const *s, char c)
{
    int smp = checkwords(s, c);
    char **ptr = ft_calloc(smp + 1, sizeof(char *)); // Ajoutez 1 pour NULL à la fin du tableau.

    int j = 0;
    int i = 0;
    while (s[i])
    {
        if (s[i] != c)
        {
            int start = i;
            while (s[i] && s[i] != c)
            {
                i++;
            }
            int end = i;
            ptr[j] = ft_substr(s, start, end - start);
            j++;
        }
        else {
            i++;
        }
    }
    return ptr;
}

int main()
{
    char const *s = " gav jlhgjbk kge  gjm";
    char **result = ft_split(s, ' ');

    for (int j = 0; result[j] != NULL; j++) {
        printf("%s\n", result[j]);
        free(result[j]); // Libérez la mémoire allouée pour chaque sous-chaîne.
    }

    free(result); // Libérez la mémoire allouée pour le tableau de pointeurs.

    return 0;
}
