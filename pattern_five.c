// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int val = 1;
//     int space = n-1;
//     for(int i=1; i<=n; i++) // for line print
//     {
//         for(int j=1; j<=space; j++) // for space
//         {
//             printf(" ");
//         }
//         for(int j=1; j<=val; j++) // for star
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//         val ++;
//         space--;
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int val = 1;
    int space = n-1;
    for(int i=1; i<=n; i++) // for line print
    {
        for(int j=1; j<=space; j++) // for space
        {
            printf(" ");
        }
        for(int j=1; j<=val; j++) // for star
        {
            printf("%d ", j);
        }
        printf("\n");
        val ++;
        space--;
    }
    return 0;
}