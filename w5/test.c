#include<stdio.h>

    int foobar(int* n){
     *n = *n + 1;
     return *n;
    }


// int mystery(int p, int q){
//     int r;
//     if ((r = p % q) == 0)
//     {
//         printf("q %i", q);
//         return q; 
//     }
//     else return mystery(q, r);
// }   

int main(void)
{
    // int a = 7;
    // int b = 91;


    // int a = 2;
    // int b = 6;

    // mystery(a,b);

    // printf("q %q", q);

    // int data[5] = {0 ,1, 2, 3, 4}, sum = 0 , i;

    // for (i = 0; i < 5 ; i++)
    //    sum = sum + data[i];
    
    // printf("%d\n", sum);

    // int a[10] = {1,2,3,4,5,6,7,8,9,10}, i = 6 ;
    // int *p = &a[0];
    // printf("%d\n", *(p + i));

    // printf("%d\n", 3 / 2 * 1);

    
    // int a = 1;
    // int b = 2;
    // int c = 3;



    // printf("%d\n", a = b = c);

    // int a = 3;
    // int b = 4;
    // int c = 0;

    // printf("%d\n", c = a++);

    // printf("%d\n", a / b > c);

    // int i = 0;
    // int j = 1;
    // int k = 2;

    // printf("%d",  (i && (j = k)) || (k > j));

    // for (int i=0; i<5; i++)
    // {
    //     printf("%s", "works");
    // }

    // printf("%d\n", !!i);
    // printf("%d\n", !!j);
    // printf("%d\n", !!k);

    // printf("%d\n", i || !k);

    int k = 6;
    foobar(&k);
    printf("foobar(k) = %d,", foobar(&k) );
    printf(" k = %d\n", k);

    // char a[5] = "abcd";
    // char *str = &a[0];
    // printf("%c", *str);
    // printf("%c", a[0]);
    // printf("%c", a[1]);
    // printf("%c", a[2]);
    // printf("%c", a[3]);
    // printf("%c", a[4]);


    // printf("%d", 3 % 4);

}
