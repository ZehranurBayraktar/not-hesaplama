#include <stdio.h>
#include <stdlib.h>

int not1,not2,not3,not4;
float ortalama;




int main()
{

    int i ;
    for(i=1;i<6;i++ ){

        printf("%d. öðrenci için not giriþi yapýn ",i);
        scanf("%d", &not1);

             while (not1 < 0 || not1 > 100) {
            printf("Hatalý giriþ yaptýnýz tekrar deneyin ");
            scanf("%d", &not1);
        }


         printf("%d. öðrenci için ikinci not giriþinizi yapýn ",i);
        scanf("%d", &not2);



        while (not2 < 0 || not2 > 100) {
            printf("Hatalý giriþ yaptýnýz tekrar deneyin ");
            scanf("%d", &not2);}






         printf("%d. öðrenci için üçüncü not giriþinizi yapýn ",i);
        scanf("%d", &not3);



        while (not3 < 0 || not3 > 100) {
            printf("Hatalý giriþ yaptýnýz tekrar deneyin ");
            scanf("%d", &not3);}




         printf("%d. öðrenci için dördüncü not giriþinizi yapýn ",i);
        scanf("%d", &not4);



        while (not4 < 0 || not4 > 100) {
            printf("Hatalý giriþ yaptýnýz tekrar deneyin ");
            scanf("%d", &not4);}






        ortalama = ortalama = (not1 + not2+not3+not4) / 4.0;

        printf("%d. öðrencinin not ortalamasý:%f \n",i,ortalama);
        if (ortalama>=50){
            printf("geçti\n");
        }

        else {
            printf("kaldý\n");
        }



    }







    return 0;
}
