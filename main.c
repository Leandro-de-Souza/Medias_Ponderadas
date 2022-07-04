#include <stdio.h>


int main()
{

       int N, i;
       double a, b, c, media;

       printf("Quantos casos voce vai digitar? ");
       scanf("%d", &N);

       for (i = 0; i < N; i++) {
           printf("Digite tres numeros:\n");
           scanf("%lf", &a);
           scanf("%lf", &b);
           scanf("%lf", &c);

           media = (double)(a * 2 + b * 3 + c * 5) / ( 2 + 3 + 5 );
           printf("MEDIA = %.1lf\n", media);
       }


    return 0;
}
