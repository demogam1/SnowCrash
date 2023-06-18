
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
    char buf[26];
    char *flag = malloc(25);
    int fd = open("token", O_RDONLY);
    read(fd, buf, 25);
    size_t i = 0;

    while ( i < strlen(buf) - 1)
    {
        flag[i] = buf[i] - i;
        i++;
    }
    printf("%zu\n", i);
    flag[i] = '\0';
    printf("%s", flag);
    free(flag);
    return 0;
}


