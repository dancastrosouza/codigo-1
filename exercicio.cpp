#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

 int main (){
    // Escreva um algoritmo que leia três números inteiros e positivos (A, B, C) 
    // FORMULAS: D = (R+S)/2, onde: R=raizq(A + B)^2 e S = (B+C)^2

    //Variaveis
    
   double R,S,D;
   int A, B, C; 
  
  
   // COLETA DE DADOS
 cout << "Digite o valor de A: ";
 cin >> (A);

 cout << "Digite o valor de B: ";
 cin >> (B);

 cout << "Digite o valor de C: ";
 cin >> (C);
   
   
   //Calculos
  R = pow((A+B), 2);
  S = pow((B+C), 2);
  D = (R+S)/2;

   cout << "D = " << D;
  cout << "\n";
  system("pause");
  return 0;
 

 }
