#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ReplaceWord(const char* str, const char* OldWord, const char* NewWord)
{
    // str is the original string
    int count = 0;
    int OldWordLength = strlen(OldWord);
    int NewWordLength = strlen(NewWord);
    int OldStringLength = strlen(str);
    // Counting the number of times that old word occurs
    for (int i = 0; str[i] != '\0'; i++)
    {
        // starting the search from i in the string, we should get the old word at i
        if (strstr(str, OldWord) == str)
        {
            count++;
            //Jump after this word
            i = i + OldWordLength - 1;
            str+=i;
        }
    }

    // Making the new string
    char *Newstr;
    Newstr = (char *)malloc(OldStringLength + count * (NewWordLength - OldWordLength) + 1);

    int i = 0;
    while (*str)
    {
        // Comparing the substring with result
        if (strstr(str, OldWord) == str)
        {
            // strcpy takes the address of the strings, call by reference
            strcpy(&Newstr[i] , NewWord); // adds the whole string newword to newstr at i
            i += NewWordLength;   // To jump to the next word in new string for creating new string.
            str += OldWordLength; // To jump to the next word in old string for checking the old word in the old string(used in strstr function).
        }
        else
        {
            Newstr[i] = *str; // adds only one character
            i ++;
            str ++;
        }
    }
    Newstr[i] = '\0';
    return Newstr;
}

int main()
{
    FILE *fp1 = NULL;
    FILE *fp2 = NULL;
    fp1 = fopen("BillTemplate.txt", "r");
    // Contains the below template:
    // Thanks {{name}} for purchasing {{item}} from our outlet {{outlet}}.
    // Please visit our outlet {{outlet}} for any kind of problems.
    // We plan to server you again soon.

    fp2 = fopen("BillGenerated.txt", "w");
    char OriginalStr[200];
    fgets(OriginalStr, 200, fp1);
    printf("The given bill template is:\n%s", OriginalStr);
    char *NewStr;
    NewStr = ReplaceWord(OriginalStr, "{{name}}", "Abhinav");
    NewStr = ReplaceWord(NewStr, "{{item}}", "Table Fan");
    NewStr = ReplaceWord(NewStr, "{{outlet}}", "Ram Laxmi Outlets");

    printf("\n\nThe bill generated is:\n%s", NewStr);
    fputs(NewStr, fp2);
    printf("\n\nThe generated bill has been written to BillGenerated.txt");
    fclose(fp1);
    fclose(fp2);
    return 0;
}