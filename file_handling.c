/* C program to open a file for reading and display the contents of the file in both binary mode and text mode.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char str[100], ch;

    printf("Displaying the contents of the file in binary mode: \n");
    fp = fopen("a.txt", "rb");
    if (fp == NULL)
    {
        printf("Error in opening file");
        exit(0);
    }
    while (fread(&ch, sizeof(char), 1, fp))
    {
        printf(" %X ", ch);
    }
    printf("\n");
    fclose(fp);

    printf("Displaying the contents of the file in file mode: \n");
    fp = fopen("a.txt", "r");
    if (fp == NULL)
    {
        printf("Error in opening file");
        exit(0);
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    printf("\n");
    fclose(fp);

    return 0;
}

/* C program to open a file for reading and displaying the contents of the file displays the contents of
   the file character by character and line by line on the screen*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char str[100], ch;

    fp = fopen("a.txt", "r");
    if (fp == NULL)
    {
        printf("Error in opening file");
        exit(0);
    }
    printf("Displaying contents by character by character: \n");
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    printf("\n");
    fclose(fp);

    fp = fopen("a.txt", "r");
    if (fp == NULL)
    {
        printf("Error in opening the file.\n");
        exit(0);
    }
    printf("Displaying contents by line by line: \n");
    while (fgets(str, sizeof(str), fp) != NULL)
    {
        printf("%s", str);
    }
    fclose(fp);
    return 0;
}

// /* C program to open a file and count the number of characters and lines in the file. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char str[200];
    int linecount = 0, charcount = 0;
    fp = fopen("a.txt", "r");
    if (fp == NULL)
    {
        printf("Error in opening file");
        exit(0);
    }
    while (!feof(fp))
        if (fgets(str, 199, fp))
        {
            linecount++;
            charcount += strlen(str);
        }
    printf("\n Linecount = %d\t\t Charactercount=%d", linecount, charcount);
    fclose(fp);
}

/* C program to open a file in append mode and allows the user to add text to end of the file.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char str[100], text[200];

    fp = fopen("a.txt", "a");
    if (fp == NULL)
    {
        printf("Error in opening file");
        exit(0);
    }
    printf("Enter text to append to the file:\n");
    fgets(text, sizeof(text), stdin);
    fprintf(fp, "%s", text);
    fclose(fp);
    printf("Text successfully appended to the file.");
    return 0;
}
