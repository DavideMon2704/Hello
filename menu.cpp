#include <iostream>
using namespace std;

void menu();
int es1();
int es2();
int es3();
int es4();
int es5();
int es6();
int es7();
int es8();

int main()
   {
   int scelta;
   do{
      menu();
      cout<<"Inserisci un numero: ";
      cin>>scelta;
      switch (scelta){
         case 1:cout<<"1"endl;break;
         case 2:cout<<"2"endl;break;
         case 3:cout<<"3"endl;break;
         case 4:cout<<"4"endl;break;
         case 5:cout<<"5"endl;break;
         case 6:cout<<"6"endl;break;
         case 7:cout<<"7"endl;break;
         case 8:cout<<"8"endl;break;
         case 0:cout<<"Chiusura"<<endl<<endl<<"Programmatore: Davide Monaco";break;
         default:cout<<"Errore"<<endl;break;
         }
      }while (scelta!=0);
      return 0;
   }
   
void menu()
   {
   cout<<endl;
   cout<<"1. Dato un intero n>1 stampare la somma 1+2+3+...+n."<<endl;
   cout<<"2. Dato un intero n>1 stampare in output i numeri n,n-1,n-2,...,3,2,1."<<endl;
   cout<<"3. Dato un intero n>1 dispari,stampare il prodotto 1*3*5*...*n."<<endl;
   cout<<"4. Dato un intero n>1 dispari,stampare il prodotto 1*3*5*...*n."<<endl;
   cout<<"5. Dato un intero n>1 stampare in output la sequenza 1,1,2,1,2,3,1,2,3,4,...,1,2,3,4,5,...,n-1,n."<<endl;
   cout<<"6. Dato un intero n>1 stampare in output la sequenza 1,2,2,3,3,3,4,4,4,4,...,(n,n,...n)^n volte"<<endl;
   cout<<"7. Dato un intero n>1 stampare in output la sequenza 1,1,2,3,5,8,13,21,34,...,xk,xk+1,xk+xk+1,...,X, dove X e' il piu' grande intero della sequenza minore o uguale a n."<<endl;
   cout<<"8. Dato un intero n>1 pari,stampare la sequenza n,1,n-1,2,n-2,3,..., n/2."<<endl;
   cout<<"0. Esci"<<endl<<endl;
   };
  
int es1()
   {
   int n;
   int s;
   int i;
   cout<<"Inserisci un numero intero:";
   cin>>n;
   s=0;
   i=1;
   do {
      s=s+i;
      i=i+1;
      } while(i<=n);
   cout<<s;
   return 0;
   }

int es2()
   {
   int n;
   cout<<"Inserisci un numero intero:";
   cin>>n;
   do
      {
   cout<<n<<endl;
   n=n-1;
      }while(n>0);
    return 0;
   }

int es3()
   {
   int n;
   int p;
   int i;
   cout<<"Inserisci un numero intero:";
   cin>>n;
   p=1;
   i=1;
   do{
      p=p*i;
      i=i+2;
      }while(i<=n);
    cout<<p<<endl;
    return 0;
   }

int es4()
   {
   int n;
   int m;
   int i;
   cout<<"Inserisci un numero intero:";
   cin>>n;
   m=n;
   do{
      i=1;
      do{
         cout<<i<<endl;
         i=i+1;
         }while(i<=m);
         m=m-1;
      }while(m>0);
      return 0;
   }

int es5()
   {
   int n;
   int m;
   int i;
   cout<<"Inserisci un numero intero:";
   cin>>n;
   m=1;
   do{
      i=1;
      do{
         cout<<i;
         i=i+1;
         }while(i<=m);
        m=m+1;
      }while(m<=n);
    return 0;
   }

int es6()
   {
   int n;
   int j;
   int i;
   cout<<"Inserisci un numero intero:";
   cin>>n;
   i=1;
   do{
      j=1;
      do{
         cout<<i<<endl;
         j=j+1;
         }while(j<=i);
         i=i+1;
      }while(i<=n);
      return 0;
   }
   
int es7()
   {
   int n;
   int x;
   int y;
   int z;
   cout<<"Inserisci un numero intero:";
   cin>>n;
   cout<<1<<endl;
   x=1;
   y=1;
   do{
      cout<<y<<endl;
      z=x+y;
      x=y;
      y=z;
      }while(y<=n);
      return 0;
   }

int es8()
   {
   int n;
   int i;
   cout<<"Inserisci un numero intero:";
   cin>>n;
   i=0;
   do{
      cout<<n-i;
      i=i+1;
      cout<<i;
      }while(i<n-i);
      return 0;
   }
