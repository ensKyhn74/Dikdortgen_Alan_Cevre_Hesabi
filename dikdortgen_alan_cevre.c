#include <stdio.h>
// Klavyeden girilen kısa ve uzun kenara göre dikdörtgenin çevresini ve alanını hesaplar

int main() 

{

 int kisaKenar,uzunKenar;
 
 printf("dikdortgenin kisa kenarını girin: "); 
 scanf("%d",&kisaKenar);
 
 printf("dikdortgenin uzun kenarını girin: ");
 scanf("%d",&uzunKenar);
 
 int Cevre = 2 * (kisaKenar + uzunKenar);
 int Alan = kisaKenar * uzunKenar;
 printf("dikdortgenin cevresi: %d\t dikdortgenin alani: %d",Cevre,Alan);
 
 return 0;

}