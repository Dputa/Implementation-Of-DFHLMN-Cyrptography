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