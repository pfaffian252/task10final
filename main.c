#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char s[256], s1[256] = " ", s2[256]=" ", s3[256]=" ", *pr, *word;
    printf("enter the string\n");
    gets(s);

    pr = strtok(s, " .");
    while (pr != NULL)
    {
        strcat(s1, pr);
        pr = strtok(NULL, " .");
        if(pr != NULL) strcat(s1, " ");
    }
    printf("A string without extra spaces.\n");
    puts(s1+1);
    word = strrchr(s1, ' ')+1;
    pr = strtok(s1, " ");
    while (pr != NULL)
    {
        if (strcmp(pr, word) != 0)
            strcat(s2, pr);
        pr = strtok(NULL, " ");
        if (pr != NULL && strcmp(pr, word) != 0) strcat(s2, " ");
    }
    printf("A string without words matching the last one.\n");
    puts(s2+1);
    strcat(s2, " ");
i=256;
    pr = strtok(s2, " ");
    while (pr != NULL)
    {
        if (strlen(pr)<i && strlen(pr) > 0)
            i=strlen(pr);
            strcat(s3, pr);
            strcat(s3, " ");
        pr = strtok(NULL, " ");
    }
printf("Words with a minimum length.\n");
  pr = strtok(s3, " ");
    while (pr != NULL)
    {
        if (strlen(pr)==i)
            printf("%s ", pr);
        pr = strtok(NULL, " ");
    }

    return 0;
}
