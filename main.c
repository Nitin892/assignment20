
1. Write a function to swap values of two in variables of calling function. (TSRS)
#include <stdio.h>
void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

int main()
{
    int x = 5;
    int y = 10;
    printf("x is %d and y is %d\n", x, y);

    swap(&x, &y);
    printf("x is %d and y is %d\n", x, y);
    return 0;
}

2. Write a function to swap strings of two char arrays of calling functions. (TSRS)

#include <stdio.h>
void swap(char *x, char *y)
{
    for (int i = 0; x[i]; i++)
    {
        char t = *(x + i);
        x[i] = y[i];
        y[i] = t;
    }
}

int main()
{
    char arr1[10] = "nitin";
    char arr2[10] = "aman";

    char p[] = arr1;
    printf("%c\n", *(p + 0));
    for (int i = 0; arr1[i]; i++)
    {
        printf("%c ", p[i]);
    }

swap(arr1, arr2);
printf("%s\n", arr1);
printf("%s", arr2);

return 0;
}

3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
void sort(int *ptr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < size - 1 - i; j++)
        {

            if (*(ptr + j) > *(ptr + j + 1))
            {
                flag = 1;
                int t = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = t;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}
#include <stdio.h>
int main()
{
    int arr[10] = {7, 3, 2, 4, 5, 0, -1, 9, 10, 11};
    sort(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

4. Write a program in C to demonstrate how to handle the pointers in the program.

#include <stdio.h>
int main()
{
    int a = 5;
    int b = 6;
    int *p = &a; // where p is a pointer which holds an address of a *p is used for deferencing.;
    int *q = &b; // where q is a pointer which holds an address of b *q is used for deferencing.;
    printf("adding of a %d and b %d using pointer is %d", *p, *q, *p + *q);
    return 0;
}

5. Write a program to find the maximum number between two numbers using a pointer
int max(int *x, int *y)
{
    int t = *x > *y ? *x : *y;
    return t;
}
#include <stdio.h>
int main()
{
    int a = 5;
    int b = 10;
    printf("%d", max(&a, &b));
    return 0;
}

6. Write a program to calculate the length of the string using a pointer
int length(char *x)
{
    int i;
    for (i = 0; x[i]; i++)
        ;

    return i;
}
#include <stdio.h>
int main()
{
    char a[] = "nitin";

    printf("%d", length(a));
    return 0;
}

7. Write a program to count the number of vowels and consonants in a string using a
pointer.

#include <stdio.h>
int main()
{
    char a[] = "nitin";
    char *p = a;
    int vowels = 0;
    int consonents = 0;
    for (int i = 0; a[i]; i++)
    {
        if (*(p + i) == 'i')
        {
            vowels++;
        }
        else if ((p[i] >= 65 && p[i] <= 90) || (p[i] >= 97 && p[i] <= 122))
            consonents++;
    }
    printf("%d\n", vowels);
    printf("%d", consonents);

    return 0;
}

8. Write a program to compute the sum of all elements in an array using pointers.
int sum(int *nums, int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s = s + *(nums + i);
    }
    return s;
}

#include <stdio.h>
int main()
{
    int arr[5] = {2, 3, 4, 5, 6};
    printf("%d",sum(arr,5));
    return 0;
}

9. Write a program to print the elements of an array in reverse order.

void reverse(int *nums, int n)
{

    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        int t = *(nums + i);
        *(nums + i) = *(nums + j);
        *(nums + j) = t;
    }
}

#include <stdio.h>
int main()
{
    int arr[5] = {2, 3, 4, 5, 6};
    reverse(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(arr + i));
    }

    return 0;
}

10. Write a program to print a string in reverse using a pointer

void reverse(char *nums, int n)
{

    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        int t = *(nums + i);
        *(nums + i) = *(nums + j);
        *(nums + j) = t;
    }
}

#include <stdio.h>
int main()
{
    char arr[5] = "kasif";
    reverse(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%c ", *(arr + i));
    }

    return 0;
}
