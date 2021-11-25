#include <stdio.h>
#include <locale.h>
#include <math.h>

int x, idade[5], s1=0,s2=0, s3=0, s4=0;
int in1=0, in2=0, in3=0, in4=0;
float peso[5], m1=0, m2=0, m3=0, m4=0;

int main() {
  setlocale(LC_ALL, "Portuguese");
  for(x=0; x<5; x++) {
    printf("\n Digite a idade da %d° pessoa: ", x+1); 
    scanf("%d", &idade[x]);  
    printf("\n Digite o peso da %d° pessoa: ", x+1); 
    scanf("%f", &peso[x]);  
  }
  for(x=0; x<5; x++) {
    if(idade[x]>=1 && idade[x]<=10) {
    in1=in1+1; 
    s1=s1+peso[x]; 
    }
  }
  for(x=0; x<5; x++) {
    if(idade[x]>=11 && idade[x]<=20) {
    in2=in2+1;   
    s2=s2+peso[x];  
    }
  }
  for(x=0; x<5; x++) {
    if(idade[x]>=21 && idade[x]<=30) {
    in3=in3+1; 
    s3=s3+peso[x];  
    }
  }
  for(x=0; x<5; x++) {
    if(idade[x]>31) {
    in4=in4+1;  
    s4=s4+peso[x];  
    }
  }
  m1=s1/in1;
  m2=s2/in2;
  m3=s3/in3;
  m4=s4/in4;
  printf("A média do peso entre 1 e 10 é %f ", m1);
  printf("A média do peso entre 11 e 20 é %f ", m2);
  printf("A média do peso entre 21 e 30 é %f ", m3);
  printf("A média de peso acima de 31 é %f ", m4);
  return 1;
}