#include <stdlib.h>

char rand_string(char *stringSize, size_t size)
{
    const char charSet[] = "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < size; i++)
    {
        stringSize[i] = charSet[rand() % 26];
    }
}