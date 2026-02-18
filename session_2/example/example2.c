/*
  This program mimics strcpy() by moving both a source and destination pointer forward
  in a for loop. Again, notice the lack of initialisation in the for loop.
  Make sure to append the null terminator ('\0') at the end.
*/

#include <stdio.h>

int main() {
    char source[] = "hello world";
    char destination[30]; // Ensure this is large enough!

    char *src = source;
    char *dest = destination;

    // Use a for loop to copy character by character
    // The loop stops when it encounters the '\0' in source
    for (; *src != '\0'; src++, dest++) {
        *dest = *src;
    }

    // CRITICAL: The loop above stops BEFORE copying the '\0'
    // You must add it manually to terminate the destination string
    *dest = '\0';

    printf("Source: %s\n", source);
    printf("Copied: %s\n", destination);

    return 0;
}