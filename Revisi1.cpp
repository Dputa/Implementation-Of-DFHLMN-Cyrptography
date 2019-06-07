/* This program calculates the Key for two persons  
using the Diffie-Hellman Key exchange algorithm */
#include<iostream>
#include<stdio.h> 
#include<math.h> 

using namespace std;

void Key_P() {
   int i;
   int n, flag = 0;
   for(i=2; i<=n/2; ++i) {
      if(n%i==0) {
         flag=1;
         break;
      }
   }
    cout <<"Masukan Key Prima [P]: "; cin >> n;
}
int main() {

    Key_P();
   return 0;
}
