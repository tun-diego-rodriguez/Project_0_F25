#include <stdlib.h>

char rand_string(char *outputString, size_t size)
{
    const char charSet[] = "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < size; i++)
    {
        outputString[i] = charSet[rand() % 26];
    }
}