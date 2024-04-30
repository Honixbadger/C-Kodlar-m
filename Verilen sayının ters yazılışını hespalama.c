#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
#include <limits.h>


int main() {

long long a,b,c=0,eski_sayı,y,basamak_sayısı=2,yeni_sayı=0;
long long basamak_değerleri[15], basamaklar[15], basamaklar1[15],basamaklar2[15];;


for(int i=0;i<15;i++){
basamaklar[i]=0;
}

int indeeski_sayı=0;

scanf("%lld",&eski_sayı);
y=eski_sayı;

while(y/10 > 10){
    y=y/10;
    basamak_sayısı++;
}

for(long long i=1;i<1e15;i*=10){
    basamak_değerleri[indeeski_sayı]=floor(i);
    indeeski_sayı++;
}

for(int i=1;i<basamak_sayısı+1;i++){
    a= eski_sayı % basamak_değerleri[i];   
    basamaklar[i]=a;
    basamaklar1[i]=basamaklar[i]-basamaklar[i-1];
}

for(int i=basamak_sayısı;0<i;i--){
    basamaklar2[i]=basamaklar1[i]/basamak_değerleri[i-1];
}

for(int i=1;i<basamak_sayısı+1;i++){
   b=basamaklar2[i]*basamak_değerleri[basamak_sayısı-i];
   yeni_sayı= yeni_sayı+b;
}

printf("%lld",yeni_sayı);
}








