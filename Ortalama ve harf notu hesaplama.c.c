#include <stdio.h>
#include <stdlib.h>

int main()
{
   int AlgoritmaVizesi;
   int AlgoritmaFinali;
   printf("algoritma vize final notunuzu sirasi ile giriniz. : ");

   scanf("%d %d",&AlgoritmaVizesi,&AlgoritmaFinali);

   printf("vize: %d - final : %d\n",AlgoritmaVizesi,AlgoritmaFinali);

   float Ortalama = (AlgoritmaVizesi*2/5) + (AlgoritmaFinali*3/5);

   printf("ortalamaniz : %.2f\n",Ortalama);

   if(Ortalama>=50) {
    printf("dersi gectiniz.\n");
   if(Ortalama==50){
    printf("dersi sartli gectiniz.harf notunuz: dc");
   }

   else{
    if(60>Ortalama>50){
        printf("harf notunuz : cc");
    }
    else if(70>Ortalama>60){
        printf("harf notunuz : cb ");
    }
    else if(80>Ortalama>70){
        printf("harf notunuz : bb");
    }
    else if(90>Ortalama>80){
        printf("harf notunuz : ba");
    }
    else {
        printf("harf notunuz : aa");
    }
   }
   }
else {
    printf("dersten kaldiniz.");
}

    return 0;
}

