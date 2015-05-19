#include <stdio.h>
#include <time.h>

#define N  50000
int array[N];


void b_sort (void)
{
    int i;
    int j;
    char f;
    for (i = 0; i < (N-1); i++)
    {
        f = 0;
        for (j = 0; j < (N-1); j++)
        {
            if (array[j] > array[j+1])
            {
                int b;
                b = array[j];
                array[j] = array[j+1];
                array[j+1] = b;
                f = 1;
            }
        }
        if (f = 0)
            break;
    }
}
int main(int argc, char **argv)
{
srand(time(NULL));
int i;
for (i = 0; i < N; i++)
array[i] = rand(); 
b_sort();
}
