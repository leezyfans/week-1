#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("Usage: %s <word>\n", argv[0]);
        return 1;
    }

    char word[256];
    strcpy(word, argv[1]);

    int len = strlen(word);

    for (int i = len - 1; i >= 0; i--) {
        putchar(word[i]);
    }
    putchar('\n');

    return 0;
}
