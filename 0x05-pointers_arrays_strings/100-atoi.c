#include <stdio.h>
#include <ctype.h>

int string_to_integer(char *str) {
    int result = 0;
    int sign = 1;

    // Check for negative sign
    if (*str == '-') {
        sign = -1;
        str++;
    }

    // Iterate through the string
    while (*str != '\0') {
        // Check for invalid characters
        if (!isdigit(*str)) {
            printf("Error: invalid character in string\n");
            return 0;
        }
        // Multiply the result by 10 and add the current digit
        result = result * 10 + (*str - '0');
        str++;
    }

    return sign * result;
}

