#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char c) {
    return putchar(c);
}

int _islower(int c) {
    return (c >= 'a' && c <= 'z');
}

int _isalpha(int c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int _abs(int n) {
    return abs(n);
}

int _isupper(int c) {
    return (c >= 'A' && c <= 'Z');
}

int _isdigit(int c) {
    return (c >= '0' && c <= '9');
}

int _strlen(char *s) {
    int len = 0;
    while (*s++) {
        len++;
    }
    return len;
}

void _puts(char *s) {
    while (*s) {
        _putchar(*s++);
    }
    _putchar('\n');
}

char *_strcpy(char *dest, char *src) {
    char *ptr = dest;
    while ((*ptr++ = *src++) != '\0');
    return dest;
}

int _atoi(char *s) {
    int sign = 1, result = 0;
    while (*s == ' ' || *s == '\t' || *s == '\n')
        s++;
    if (*s == '-' || *s == '+')
        sign = (*s++ == '-') ? -1 : 1;
    while (*s && _isdigit(*s))
        result = result * 10 + (*s++ - '0');
    return result * sign;
}

char *_strcat(char *dest, char *src) {
    char *ptr = dest + _strlen(dest);
    while (*src)
        *ptr++ = *src++;
    *ptr = '\0';
    return dest;
}

char *_strncat(char *dest, char *src, int n) {
    char *ptr = dest + _strlen(dest);
    while (n-- && *src)
        *ptr++ = *src++;
    *ptr = '\0';
    return dest;
}

char *_strncpy(char *dest, char *src, int n) {
    char *ptr = dest;
    while (n-- && (*ptr++ = *src++) != '\0');
    while (n-- > 0)
        *ptr++ = '\0';
    return dest;
}

int _strcmp(char *s1, char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

char *_memset(char *s, char b, unsigned int n) {
    char *ptr = s;
    while (n--)
        *ptr++ = b;
    return s;
}

char *_memcpy(char *dest, char *src, unsigned int n) {
    char *d = dest;
    char *s = src;
    while (n--)
        *d++ = *s++;
    return dest;
}

char *_strchr(char *s, char c) {
    while (*s != c) {
        if (*s == '\0')
            return NULL;
        s++;
    }
    return s;
}

unsigned int _strspn(char *s, char *accept) {
    unsigned int len = 0;
    while (*s && strchr(accept, *s++))
        len++;
    return len;
}

char *_strpbrk(char *s, char *accept) {
    while (*s) {
        if (strchr(accept, *s))
            return s;
        s++;
    }
    return NULL;
}

char *_strstr(char *haystack, char *needle) {
    size_t needle_len = _strlen(needle);
    while (*haystack) {
        if (strncmp(haystack, needle, needle_len) == 0)
            return haystack;
        haystack++;
    }
    return NULL;
}
