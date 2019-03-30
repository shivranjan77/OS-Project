#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
 
void *avg(void *str);
void *min(void *ptr);
void *max(void *ptr);

double average;        
int minimum;
int maximum;

typedef struct datastruct
{
    int size;
    int * values;
}datastruct;

