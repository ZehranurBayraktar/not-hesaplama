#include <stdio.h>
#include <stdlib.h>

int not1,not2,not3,not4;
float ortalama;




int main()
{

    int i ;
    for(i=1;i<6;i++ ){

        printf("%d. ��renci i�in not giri�i yap�n ",i);
        scanf("%d", &not1);

             while (not1 < 0 || not1 > 100) {
            printf("Hatal� giri� yapt�n�z tekrar deneyin ");
            scanf("%d", &not1);
        }


         printf("%d. ��renci i�in ikinci not giri�inizi yap�n ",i);
        scanf("%d", &not2);



        while (not2 < 0 || not2 > 100) {
            printf("Hatal� giri� yapt�n�z tekrar deneyin ");
            scanf("%d", &not2);}






         printf("%d. ��renci i�in ���nc� not giri�inizi yap�n ",i);
        scanf("%d", &not3);



        while (not3 < 0 || not3 > 100) {
            printf("Hatal� giri� yapt�n�z tekrar deneyin ");
            scanf("%d", &not3);}




         printf("%d. ��renci i�in d�rd�nc� not giri�inizi yap�n ",i);
        scanf("%d", &not4);



        while (not4 < 0 || not4 > 100) {
            printf("Hatal� giri� yapt�n�z tekrar deneyin ");
            scanf("%d", &not4);}






        ortalama = ortalama = (not1 + not2+not3+not4) / 4.0;

        printf("%d. ��rencinin not ortalamas�:%f \n",i,ortalama);
        if (ortalama>=50){
            printf("ge�ti\n");
        }

        else {
            printf("kald�\n");
        }



    }







    return 0;
}
