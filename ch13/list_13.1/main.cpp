#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
    /* 2�̕��������������FC����*/
    const char* strA = "Hello, ";
    const char* strB = "world.";

    /* �̈�m�� */
    char* strC = (char*)malloc(strlen(strA) + strlen(strB) + 1);

    strcpy(strC, strA); /* strA��strC�ɃR�s�[ */
    strcat(strC, strB); /* strB��strC�Ɍ��� */
    puts(strC);

    if (strcmp(strC, "Hello, world.") == 0) /* ��r */
    {
        puts("ok.");
    }
    free(strC); /* �̈��� */
}