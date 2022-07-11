#ifndef practice
#define practice
#define public
#define private static
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 2147483647
#define MIN -2147483648

public char printing(const char* [], const int rsize);
public unsigned int counting(const char* [], int rsumy);
public void* negative(const char* number_[], const int numburito);
public void* ten_digit(const char* number_[], const int numburito); //1 000 000 000
public void* nine_digit(const char* number_[], const int numburito); //100 000 000
public void* eight_digit(const char* number_[], const int numburito); //10 000 000
public void* seven_digit(const char* number_[], const int numburito); //1 000 000
public void* six_digit(const char* number_[], const int numburito); //100 000
public void* five_digit(const char* number_[], const int numburito); //10 000
public void* four_digit(const char* number_[], const int numburito); //1000
public void* three_digit(const char* number_[], const int numburito); //100
public void* two_digit(const char* number_[], const int numburito); //10
#endif