#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char random_char()
{
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    size_t index = rand() % (sizeof(charset) - 1);
    return charset[index];
}

char *generate_password(int length)
{
    static char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    static char password[100];
    int sum = 0;
    int i;

    srand(time(NULL));

    for (i = 0; i < length; i++)
    {
        int random_index = rand() % (sizeof(charset) - 1);
        password[i] = charset[random_index];
        sum += password[i];
    }

    password[length] = '\0';

    if (sum != 500)
    {
        password[length - 1] = (500 - (sum - password[length - 1])) % 256;
    }

    return (password);
}

int main()
{
    int length = 10;
    printf("%s\n", generate_password(length));
    return (0);
}
