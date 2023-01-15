#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  char isim[10]="feyza";
  int parola=1234;
  char girilenisim[10];
  int girilenparola;
  int bakiye=100;
  int secim;
  int yatirilacaktutar;
  
  printf("bankamatik uygulamasina hosgeldiniz \n\nlutfen isminizi giriniz:");
  scanf("%s",&girilenisim);
 
  printf("\nlutfen parolanizi giriniz:");
  scanf("%d",&girilenparola); 
  
   if(strcmp(isim,girilenisim)==0 && parola,girilenparola==0){
   printf("\nkullanici bilgileriniz eslesti");
   printf("\nasagidaki islemlerden birini seciniz:\n[1]-para yatirma\n[2]-para cekme\n[3]-kullanici bilgileri\nseciminiz:");
   scanf("%d",&secim);
   if(secim==1){
   	printf("para yatiracaginiz tutar nedir:");
   	scanf("%d",&yatirilacaktutar);
   	bakiye=bakiye+yatirilacaktutar;
   	printf("toplam bakiyeniz güncellenmistir,yeni bakiye:%d",bakiye);
   	
   }
  }
  else 
  printf("\nkullanici adi ya da sifrenizi yanlis girdiniz");




	
}
