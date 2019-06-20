long long int power(long long int a, long long int b,  long long int N) 
{  
    if (b == 1) 
        return a; 
  
    else
        return (((long long int)pow(a, b)) % N); 
} 