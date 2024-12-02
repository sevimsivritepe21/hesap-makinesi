#include <stdio.h>
#include <stdlib.h>

int main() {
   int secim1,secim2,secim3;
   int x,mod,bolen;
   double y,a,b,c,karekok,logdegeri,toplam,fark,carpim,bolum;
   printf("Hosgeldiniz!!\n");
   modmenusu:
   printf("Lutfen mod seciniz: \n 1-Basit mod \n 2-Gelismis mod \n 3-Hesap makinesinden cikis yapiniz. \n Seciminiz: ");
   scanf("%d",&secim1);

   while(secim1!=3) {
      switch(secim1) {
         case 1:
         printf("Basit moddasiniz,lutfen isleminizi seciniz: \n 1-Toplama \n 2-Cikarma \n 3-Bolme \n 4-Carpma \n 5-Mod secim ekranina don \n Seciminiz: ");
         scanf("%d",&secim2);
         while(secim2!=5) {
            switch(secim2){
               case 1:
               printf("--TOPLAMA ISLEMI-- \n");
               printf("1. sayiyi giriniz-> ");
               scanf("%lf",&a);
               printf("2. sayiyi giriniz-> ");
               scanf("%lf",&b);
               toplam = a + b ;
               printf("%.2lf ile %.2lf sayisinin toplami: %.2lf \n",a,b,toplam);
               printf("Mod ekranina yonlendiriliyorsunuz... \n");
               {goto modmenusu;}

               case 2:
               printf("--CIKARMA ISLEMI-- \n");
               printf("1. sayiyi giriniz-> ");
               scanf("%lf",&a);
               printf("2. sayiyi giriniz-> ");
               scanf("%lf",&b);
               fark = a - b ;
               printf("%.4lf ile %.4lf sayisinin farki: %.4lf \n",a,b,fark);
               printf("Mod ekranina yonlendiriliyorsunuz... \n");
               {goto modmenusu;}

               case 3:
               printf("--BOLME ISLEMI-- \n");
               printf("1.sayiyi giriniz-> ");
               scanf("%lf",&a);
               printf("2.sayiyi giriniz-> ");
               scanf("%lf",&b);
               bolum = a / b ;
               printf("%.5lf sayisinin %.5lf sayisina bolumu: %.5lf \n",a,b,bolum);
               printf("Mod ekranina yonlendiriliyorsunuz... \n");
               {goto modmenusu;}

               case 4:
               printf("--CARPMA ISLEMI-- \n");
               printf("1. sayiyi giriniz-> ");
               scanf("%lf",&a);
               printf("2. sayiyi giriniz-> ");
               scanf("%lf",&b);
               carpim = a * b ;
               printf("%.3lf ile %.3lf sayisinin carpimi: %.3lf \n",a,b,carpim);
               printf("Mod ekranina yonlendiriliyorsunuz... \n");
               {goto modmenusu;}
            }
         }
         {goto modmenusu;}
         case 2:
         printf("Gelismis moddasiniz,lutfen isleminizi seciniz:\n 1-Karekok Alma\n 2-10 Tabaninda Log\n 3-Dogal Logaritma\n 4-Mod Bulma\n 5-Ustel Deger Bulma\n 6-Mod secim ekranina don. \nSeciminiz: ");
         scanf("%d",&secim3);
         while(secim3!=6) {
            switch(secim3) {
               case 1:
               printf("--KAREKOK BULMA ISLEMI-- \n");
               printf("Sayi giriniz-> ");
               scanf("%lf",&y);
               karekok=sqrt(y);
               printf("%.4lf'nin karekoku -> %.4lf \n",y,karekok);
               printf("Mod ekranina yonlendiriliyorsunuz... \n");
               {goto modmenusu;}

               case 2:
               printf("--10 TABANINDA LOG ISLEMI-- \n");
               printf("sayi giriniz-> ");
               scanf("%lf",&a);
               logdegeri=log10(a) ;
               printf("10 tabaninda logaritma degeri: %.4lf \n",logdegeri);
               printf("Mod ekranina yonlendiriliyorsunuz... \n");
               {goto modmenusu;}

               case 3:
               printf("--DOGAL LOG BULMA ISLEMI-- \n");
               printf("sayi giriniz-> ");
               scanf("%lf",&a);
               logdegeri=log(a) ;
               printf("dogal logaritma degeri: %lf \n",logdegeri);
               printf("Mod ekranina yonlendiriliyorsunuz... \n");
               {goto modmenusu;}

               case 4:
               printf("--MOD BULMA ISLEMI-- \n");
               printf("Sayi giriniz-> ");
               scanf("%d",&x);
               printf("Bolen degerini giriniz-> ");
               scanf("%d",&bolen);
               mod = x % bolen ;
               printf("%d degerinin %d degerine gore modu -> %d \n",x,bolen,mod);
               printf("Mod ekranina yonlendiriliyorsunuz... \n");
               {goto modmenusu;}

               case 5:
               printf("--USTEL DEGER BULMA ISLEMI-- \n");
               printf("Taban degerini giriniz-> ");
               scanf("%lf",&a);
               printf("Us degerini giriniz-> ");
               scanf("%lf",&b);
               c=pow(a,b) ;
               printf("Ustel degeriniz: %.3lf \n",c);
               printf("Mod ekranina yonlendiriliyorsunuz... \n");
               {goto modmenusu;}
            }
         }
         {goto modmenusu;}
      }
   }
   printf("Tekrar Bekleriz!!");
   return 0 ;
}


