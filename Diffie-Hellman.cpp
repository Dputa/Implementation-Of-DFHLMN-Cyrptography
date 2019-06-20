#include<iostream>
#include<math.h> 

using namespace std;

  int Key_P;
      int KeyPrima(int n) 
        {
            int i;

            for(i=2; i<=n/2; i++)
           
            {
                if(n%i==0)

                {Key_P++;}

            } 

              return Key_P;
        }        

long long int power(long long int a, long long int b,  long long int N) 
{  
    if (b == 1) 
        return a; 
  
    else
        return (((long long int)pow(a, b)) % N); 
} 
int main(){
	int P, N, G, a, x, b, y, ka, kb;
Failed:
    cout<<"Input Prime Key [P]: "; cin>>N;

          P = KeyPrima(N);

              if(P==0)
              {
             		cout<<"Key Succesfull"<<endl;
            	}

             else 
              {
              	cout<<"Key Failed"<<endl;

                goto Failed;
              }


    cout<<"Input Public Key [G]: "; cin>>G; 

    cout<<"Input Private Key a: "; cin>>a; 
    x = power(G, a, N);

    cout << "Value Private Key a is : "<< x << endl;

    cout<<"Input Private Key b: "; cin>>b;

    y= power(G, b, N);

   cout << "Value Private Key b is : "<< y << endl;
  
  ka = power(y, a, N); // Secret key for Alice 
cout << "Secret Key a is : "<< ka << endl;
  kb = power(x, b, N); // Secret key for Bob  
cout << "Secret Key b is : "<< kb << endl;

  return 0;  
}
