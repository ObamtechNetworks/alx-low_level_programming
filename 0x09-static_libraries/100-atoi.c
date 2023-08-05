#include <stdio.h>
#include <stdbool.h>

/**
 * _atoi - A function that converts a string to an integer
 * @s: a pointer to the string to convert
 * Description: A function that converts a string to an integer
 * Author - Ipadeola Michael Bamidele
 * Return: the pointer to dest
 */
char* _atoi(char *s) {
    int result = 0;
    int sign = 1;
    int i = 0;
    static char converted[12]; /* Assuming a maximum of 11 digits + sign */

    /* Skip leading whitespaces */
    while (s[i] == ' ') {
        i++;
    }

    /* Check for sign */
    if (s[i] == '-') {
        sign = -1;
        i++;
    } else if (s[i] == '+') {
        i++;
    }

    /* Convert characters to integer until a non-digit character is encountered */
    int index = 0; /* Index for the converted array */
    while (s[i] >= '0' && s[i] <= '9') {
        result = result * 10 + (s[i] - '0');
        converted[index] = s[i];
        i++;
        index++;
    }
    converted[index] = '\0'; /* Null-terminate the converted string */

    /* Modify the converted string based on the sign */
    if (sign == -1) {
        char temp[index+1]; /* +1 for the null-terminator */
        for (int j = 0; j < index+1; j++) {
            temp[j] = converted[j];
        }
        converted[0] = '-';
        for (int j = 0; j < index; j++) {
            converted[j+1] = temp[j];
        }
    }

    return converted;
}
