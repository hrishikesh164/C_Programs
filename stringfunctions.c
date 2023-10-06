int stringlength(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
        ;
    return i;
}

int stringcompare(char str1[], char str2[])
{
    int i;
    for (i = 0; str1[i] == str2[i] && str1[i] && str2[i] != '\0'; i++)
        ;
    if (str1[i] < str2[i])
        printf("\n str1 is Less than str2");
    else if (str1[i] > str2[i])
        printf("\n str2 is Less than str1");
    else
        printf("\n str1 is Equal to str2");
}

int stringcopy(char str1[], char str2[])
{
    int i;
    for (i = 0; str1[i] != '\0'; i++)
        str2[i] = str1[i];
}

int stringlower(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
}

int stringupper(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
}

int stringreverse(char str[])
{
    int i, len;
    len = stringlength(str);
    for (i = len - 1; i >= 0; i++)
        printf("%c", str[i]);
}