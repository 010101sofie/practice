#include "practice.h"

public char printing(const char* num[], const int rsize)
{
    for (unsigned int i = 0; i <= rsize; i++)
    {
        printf("%s\n", num[i]);
    }
    return 0;
}
//function for counting
public unsigned int counting(const char* numimber[], int rsumy) //функция для подсчета
{
    int num = rsumy;
    int counter = 0;//количество знаков до запятой

    while (rsumy >= 1)//блок считает количество знаков до запятой
    {
        rsumy /= 10;
        counter++;
    }
    if (num == 0)
    {
        printf("zero\n");
    }

    while (counter > 0)
    {
        if (counter == 10)
        {
            ten_digit(numimber, num);
            counter--;
            num = num - (int(num / 1000000000) * 1000000000);
        }
        if (counter == 9)
        {
            nine_digit(numimber, num);
            counter--;
            num = num - (int(num / 100000000) * 100000000);
        }
        if (counter == 8)
        {
            eight_digit(numimber, num);
            counter--;
            num = num - (int(num / 10000000) * 10000000);
        }
        if (counter == 7)
        {
            seven_digit(numimber, num);
            counter--;
            num = num - (int(num / 1000000) * 1000000);
        }
        if (counter == 6)
        {
            six_digit(numimber, num);
            counter--;
            num = num - (int(num / 100000) * 100000);
        }
        if (counter == 5)
        {
            five_digit(numimber, num);

            if (int(num / 10000) == 1)
            {
                counter -= 2;
                num -= (int(num / 10000) * 10000);
                num -= (int(num / 1000) * 1000);
            }
            else
            {
                counter--;
                num = num - (int(num / 10000) * 10000);
            }
        }

        if (counter == 4)
        {
            four_digit(numimber, num);
            num = num - (int(num / 1000) * 1000);
            counter--;
        }

        if (counter == 3)
        {
            three_digit(numimber, num);
            num = num - (int(num / 100) * 100);
            counter--;
        }

        if (counter == 2 || counter == 1)
        {
            two_digit(numimber, num);
            break;
        }
    }
    return counter;
}
//функция для миллиарда
public void* ten_digit(const char* number_[], const int numburito) //1 000 000 000
{
    int num = numburito;
    switch (int(num / 1000000000))
    {
    case 1:
        printf("%s %s ", number_[0], number_[32]);
        break;

    case 2:
        printf("%s %s ", number_[1], number_[30]);
        break;

    case 3:
        printf("%s %s ", number_[2], number_[30]);
        break;

    case 4:
        printf("%s %s ", number_[3], number_[30]);
        break;

    case 5:
        printf("%s %s ", number_[4], number_[30]);
        break;

    case 6:
        printf("%s %s ", number_[5], number_[30]);
        break;

    case 7:
        printf("%s %s ", number_[6], number_[30]);
        break;

    case 8:
        printf("%s %s ", number_[7], number_[30]);
        break;

    case 9:
        printf("%s %s ", number_[8], number_[30]);
        break;

    default:
        break;
    }
    return 0;
}
//функция для сотен миллионов
public void* nine_digit(const char* number_[], const int numburito) //100 000 000
{
    {
        int num = numburito;
        switch (int(num / 100))
        {
        case 1:
            printf("%s %s %s", number_[0], number_[27], number_[29]);
            break;

        case 2:
            printf("%s %s %s", number_[1], number_[27], number_[29]);
            break;

        case 3:
            printf("%s %s %s", number_[2], number_[27], number_[29]);
            break;

        case 4:
            printf("%s %s %s", number_[3], number_[27], number_[29]);
            break;

        case 5:
            printf("%s %s %s", number_[4], number_[27], number_[29]);
            break;

        case 6:
            printf("%s %s %s", number_[5], number_[27], number_[29]);
            break;

        case 7:
            printf("%s %s %s", number_[6], number_[27], number_[29]);
            break;

        case 8:
            printf("%s %s %s", number_[7], number_[27], number_[29]);
            break;

        case 9:
            printf("%s %s %s", number_[8], number_[27], number_[29]);
            break;

        default:
            break;
        }
        return 0;
    }
}
//функция для десятков миллионов
public void* eight_digit(const char* number_[], const int numburito) //10 000 000
{
    int num = numburito;
    switch (int(num / 10))
    {
    case 0:     //1 - 9

        printf("%s %s\n", number_[int(num - int(num / 10) * 10) - 1], number_[29]);
        break;

    case 1:     //10 - 19
        printf("%s %s\n", number_[9 + int(num - int(num / 10) * 10)], number_[29]);
        break;

    case 2:     //20 - 29
        printf("%s %s\n", number_[19], number_[29]);
        if (int(num - int(num / 10) * 10) > 0)
        {
            printf("%s %s\n", number_[int(num - int(num / 10) * 10) - 1], number_[29]);
        }
        break;
    case 3:     //30 - 39
        printf("%s %s\n", number_[20], number_[29]);
        if (int(num - int(num / 10) * 10) > 0)
        {
            printf("%s %s\n", number_[int(num - int(num / 10) * 10) - 1], number_[29]);
        }
        break;
    case 4:     //40 - 49
        printf("%s %s\n", number_[21], number_[29]);
        if (int(num - int(num / 10) * 10) > 0)
        {
            printf("%s %s\n", number_[int(num - int(num / 10) * 10) - 1], number_[29]);
        }
        break;
    case 5:     //50 - 59
        printf("%s %s\n", number_[22], number_[29]);
        if (int(num - int(num / 10) * 10) > 0)
        {
            printf("%s %s\n", number_[int(num - int(num / 10) * 10) - 1], number_[29]);
        }
        break;
    case 6:     //60 - 69
        printf("%s %s\n", number_[23], number_[29]);
        if (int(num - int(num / 10) * 10) > 0)
        {
            printf("%s %s\n", number_[int(num - int(num / 10) * 10) - 1], number_[29]);
        }
        break;
    case 7:     //70 - 79
        printf("%s %s\n", number_[24], number_[29]);
        if (int(num - int(num / 10) * 10) > 0)
        {
            printf("%s %s\n", number_[int(num - int(num / 10) * 10) - 1], number_[29]);
        }
        break;

    case 8:     //80 - 89
        printf("%s %s\n", number_[25], number_[29]);
        if (int(num - int(num / 10) * 10) > 0)
        {
            printf("%s\n", number_[int(num - int(num / 10) * 10) - 1]);
        }
        break;

    case 9:    //90 - 99
        printf("%s %s\n", number_[26], number_[29]);
        if (int(num - int(num / 10) * 10) > 0)
        {
            printf("%s %s\n", number_[int(num - int(num / 10) * 10) - 1], number_[29]);
        }
        break;
    default:
        break;
    }
    return 0;
}
//функция для миллиона
public void* seven_digit(const char* number_[], const int numburito) //1 000 000
{
    int num = numburito;
    switch (int(num / 1000000))
    {
    case 1:
        printf("%s %s ", number_[0], number_[31]);
        break;

    case 2:
        printf("%s %s ", number_[1], number_[29]);
        break;

    case 3:
        printf("%s %s ", number_[2], number_[29]);
        break;

    case 4:
        printf("%s %s ", number_[3], number_[29]);
        break;

    case 5:
        printf("%s %s ", number_[4], number_[29]);
        break;

    case 6:
        printf("%s %s ", number_[5], number_[29]);
        break;

    case 7:
        printf("%s %s ", number_[6], number_[29]);
        break;

    case 8:
        printf("%s %s ", number_[7], number_[29]);
        break;

    case 9:
        printf("%s %s ", number_[8], number_[29]);
        break;

    default:
        break;
    }
    return 0;
}
//функция для сотен тысяч
public void* six_digit(const char* number_[], const int numburito)
{
    int num = numburito;
    switch (int(num / 100000))
    {
    case 1:
        if (five_digit == 0)
        {
            printf("%s %s %s ", number_[0], number_[27], number_[28]);
        }
        else 
        {
            printf("%s %s ", number_[0], number_[27]);
        }
        break;

    case 2:
        if (five_digit == 0)
        {
            printf("%s %s %s ", number_[1], number_[27], number_[28]);
        }
        else
        {
            printf("%s %s ", number_[1], number_[27]);
        }
        break;

    case 3:
        if (five_digit == 0)
        {
            printf("%s %s %s ", number_[2], number_[27], number_[28]);
        }
        else
        {
            printf("%s %s ", number_[2], number_[27]);
        }
        break;
    case 4:
        if (five_digit == 0)
        {
            printf("%s %s %s ", number_[3], number_[27], number_[28]);
        }
        else
        {
            printf("%s %s ", number_[3], number_[27]);
        }
        break;
    case 5:
        if (five_digit == 0)
        {
            printf("%s %s %s ", number_[4], number_[27], number_[28]);
        }
        else
        {
            printf("%s %s ", number_[4], number_[27]);
        }
        break;
    case 6:
        if (five_digit == 0)
        {
            printf("%s %s %s ", number_[5], number_[27], number_[28]);
        }
        else
        {
            printf("%s %s ", number_[5], number_[27]);
        }
        break;
    case 7:
        if (five_digit == 0)
        {
            printf("%s %s %s ", number_[6], number_[27], number_[28]);
        }
        else
        {
            printf("%s %s ", number_[6], number_[27]);
        }
        break;
    case 8:
        if (five_digit == 0)
        {
            printf("%s %s %s ", number_[7], number_[27], number_[28]);
        }
        else
        {
            printf("%s %s ", number_[7], number_[27]);
        }
        break;
    case 9:
        if (five_digit == 0)
        {
            printf("%s %s %s ", number_[8], number_[27], number_[28]);
        }
        else
        {
            printf("%s %s ", number_[8], number_[27]);
        }
        break;
    default:
        return 0;
    }
    return 0;
}
//функция для десятков тысяч
public void* five_digit(const char* number_[], const int numburito)
{
    int num = numburito;
    switch (int(num / 10000))
    {
    case 1://10 - 19
        switch (int(num / 1000))
        {
        case 10:
            {
                printf("%s %s ", number_[9], number_[28]);
            }
            break;

        case 11:
            {
                printf("%s %s ", number_[10], number_[28]);
            }
            break;

        case 12:
            {
                printf("%s %s ", number_[11], number_[28]);
            }
            break;

        case 13:
            {
                printf("%s %s ", number_[12], number_[28]);
            }
            break;
        case 14:
            {
                printf("%s %s ", number_[13], number_[28]);
            }
            break;
        case 15:
            {
                printf("%s %s ", number_[14], number_[28]);
            }
            break;

        case 16:
            {
                printf("%s %s ", number_[15], number_[28]);
            }
            break;
        case 17:
            {
                printf("%s %s ", number_[16], number_[28]);
            }
            break;
        case 18:
            {
                printf("%s %s ", number_[17], number_[28]);
            }
            break;
        case 19:
            {
                printf("%s %s ", number_[18], number_[28]);
            }
            break;

        default:
           return 0;
        }
        break;
    case 2:
        if (four_digit == 0)
        {
            printf("%s %s ", number_[19], number_[28]);
        }
        else
        {
            printf("%s ", number_[19], four_digit);
        }
        break;
    case 3:
        if (four_digit == 0)
        {
            printf("%s %s ", number_[20], number_[28]);
        }
        else
        {
            printf("%s ", number_[20], four_digit);
        }
        break;
    case 4:
        if (four_digit == 0)
        {
            printf("%s %s ", number_[21], number_[28]);
        }
        else
        {
            printf("%s ", number_[21], four_digit);
        }
        break;
    case 5:
        if (four_digit == 0)
        {
            printf("%s %s ", number_[22], number_[28]);
        }
        else
        {
            printf("%s ", number_[22], four_digit);
        }
        break;
    case 6:
        if (four_digit == 0)
        {
            printf("%s %s ", number_[23], number_[28]);
        }
        else
        {
            printf("%s ", number_[23], four_digit);
        }
        break;
    case 7:
        if (four_digit == 0)
        {
            printf("%s %s ", number_[24], number_[28]);
        }
        else
        {
            printf("%s ", number_[24], four_digit);
        }
        break;
    case 8:
        if (four_digit == 0)
        {
            printf("%s %s ", number_[25], number_[28]);
        }
        else
        {
            printf("%s ", number_[25], four_digit);
        }
        break;
    case 9:
        if (four_digit == 0)
        {
            printf("%s %s ", number_[26], number_[28]);
        }
        else
        {
            printf("%s ", number_[26], four_digit);
        }
        break;   
    default:
        break;
    }
    return 0;
}
//функция для тысяч
public void* four_digit(const char* number_[], const int numburito)
{
    int num = numburito;
    switch (int(num / 1000))
    {
    case 1:
        printf("%s %s ", number_[0], number_[28]);
        break;

    case 2:
        printf("%s %s ", number_[1], number_[28]);
        break;

    case 3:
        printf("%s %s ", number_[2], number_[28]);
        break;

    case 4:
        printf("%s %s ", number_[3], number_[28]);
        break;

    case 5:
        printf("%s %s ", number_[4], number_[28]);
        break;

    case 6:
        printf("%s %s ", number_[5], number_[28]);
        break;

    case 7:
        printf("%s %s ", number_[6], number_[28]);
        break;

    case 8:
        printf("%s %s ", number_[7], number_[28]);
        break;

    case 9:
        printf("%s %s ", number_[8], number_[28]);
        break;

    default:
        break;
    }
    return 0;
}
//функция для сотен
public void* three_digit(const char* number_[], const int numburito)
{
    int num = numburito;
    switch (int(num / 100))
    {
    case 1:
        printf("%s %s ", number_[0], number_[27]);
        break;

    case 2:
        printf("%s %s ", number_[1], number_[27]);
        break;

    case 3:
        printf("%s %s ", number_[2], number_[27]);
        break;

    case 4:
        printf("%s %s ", number_[3], number_[27]);
        break;

    case 5:
        printf("%s %s ", number_[4], number_[27]);
        break;

    case 6:
        printf("%s %s ", number_[5], number_[27]);
        break;

    case 7:
        printf("%s %s ", number_[6], number_[27]);
        break;

    case 8:
        printf("%s %s ", number_[7], number_[27]);
        break;

    case 9:
        printf("%s %s ", number_[8], number_[27]);
        break;

    default:
        break;
    }
    return 0;
}
//функция для десятков
public void* two_digit(const char* number_[], const int numburito)
{
    int num = numburito;
    switch (int(num / 10))
    {
    case 0:     //to 9

        printf("%s\n", number_[int(num - int(num / 10) * 10) - 1]);
        break;

    case 1:     //10 to 19
        printf("%s\n", number_[9 + int(num - int(num / 10) * 10)]);
        break;

    case 2:     //20 to 29
        printf("%s ", number_[19]);
        if (int(num - int(num / 10) * 10) > 0)
        {
            printf("%s\n", number_[int(num - int(num / 10) * 10) - 1]);
        }
        break;
    case 3:        //30 to 39
        printf("%s ", number_[20]);
        if (int(num - int(num / 10) * 10) > 0)
        {
            printf("%s\n", number_[int(num - int(num / 10) * 10) - 1]);
        }
        break;

    case 4:        //40 to 49
        printf("%s ", number_[21]);
        if (int(num - int(num / 10) * 10) > 0)
        {
            printf("%s\n", number_[int(num - int(num / 10) * 10) - 1]);
        }
        break;

    case 5:        //50 to 59
        printf("%s ", number_[22]);
        if (int(num - int(num / 10) * 10) > 0)
        {
            printf("%s\n", number_[int(num - int(num / 10) * 10) - 1]);
        }
        break;

    case 6:        //60 to 69
        printf("%s ", number_[23]);
        if (int(num - int(num / 10) * 10) > 0)
        {
            printf("%s\n", number_[int(num - int(num / 10) * 10) - 1]);
        }
        break;

    case 7:        //70 to 79
        printf("%s ", number_[24]);
        if (int(num - int(num / 10) * 10) > 0)
        {
            printf("%s\n", number_[int(num - int(num / 10) * 10) - 1]);
        }
        break;

    case 8:        //80 to 89
        printf("%s ", number_[25]);
        if (int(num - int(num / 10) * 10) > 0)
        {
            printf("%s\n", number_[int(num - int(num / 10) * 10) - 1]);
        }
        break;

    case 9:        //90 to 99
        printf("%s ", number_[26]);
        if (int(num - int(num / 10) * 10) > 0)
        {
            printf("%s\n", number_[int(num - int(num / 10) * 10) - 1]);
        }
        break;

    default:
        break;
    }
    return 0;
}
