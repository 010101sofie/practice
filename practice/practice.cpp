
#include "practice.h"

int main()
{
    const char* number[] = { "one", "two", "three", "four", "five", "six",
        "seven", "eight", "nine", "ten", "eleven",/*10*/ "twelve", "thirteen",
        "fourteen", "fifteen", "sixteen", "seventeen", "eighteen",
        "nineteen", "twenty"/*19*/, "thirty", "fourty", "fifty", "sixty",
        "seventy", "eighty", "ninety", "hundred", "thousand", /*28*/ "millions", "billions", "million", "billion"/*32*/ " \n"};
    int size = 32;
    char sum[10];
    fgets(sum, 10, stdin);
    if (ferror(stdin)) 
    {
        printf("File error\n");
    }

    printf("%s\n", sum);
    int rsum = atof(sum);
    counting(number, rsum);
}