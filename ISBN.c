#include <stdio.h>
#include <string.h>

int main(void)
{
    char isbn[20];
    int digits[9];
    scanf("%s", isbn);
    int index = 0;
    for (int i = 0; i < strlen(isbn); i++)
    {
        if (isbn[i] >= '0' && isbn[i] <= '9')
        {
            digits[index++] = isbn[i] - '0';
        }
        if (index == 9)
        {
            break;
        }
    }
    int recognition = (isbn[strlen(isbn) - 1] == 'X') ? 10 : (isbn[strlen(isbn) - 1] - '0');
    int sum = 0;
    for (int i = 0;i < 9; i++)
    {
        sum += digits[i] * (i + 1);
    }
    int correct_code = sum % 11;
    char correct_char;
    if (correct_code == 10)
    {
        correct_char = 'X';
    }
    else
    {
        correct_char = correct_code + '0';
    }
    if ((correct_code == 10 && recognition == 10) || (correct_code != 10 && recognition  == correct_code))
    {
        printf("Right");
    }
    else
    {
        isbn[strlen(isbn) - 1] = correct_char;
        printf("%s", isbn);
    }

    return 0;
}
