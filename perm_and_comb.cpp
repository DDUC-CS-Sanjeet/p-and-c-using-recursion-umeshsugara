#include<iostream>

using namespace std;


int permutation(int n, int r)
{
	if(r==0)
	return 1;
    else
      return(n*permutation( n-1,r-1));
   return 0;   
}



int combination(int n, int r)

{
  if(r==0)
    return 1;
  else
    return((n*combination(n-1,r-1))/r);
     
  return 0;

}



int main()

{ 
  int n,r;
  cout <<"give the total number of  terms : ";
  cin>>n;
  cout <<"give the total number of  choices from total terms : ";
  cin>>r;
  
  if(r==0)
    {
    cout<<"\nnPr and nCr = 1 \n;";
    exit(0);
    }
    try
       {
       	if(n<0||r<0)
       	   throw n;
	   }
	   catch(int n)
	        {
	        	cout<<"\nERROR...PLEASE TRY WITH POSITIVE VALUE\n";
	        	exit(0);
			}
	cout<<"\n__________________________RESULT_____________________________\n";
	cout<<n<<"P"<<r<<":"<<permutation( n, r)<<endl;
	cout<<n<<"C"<<r<<":"<<combination(n, r);
		
  return 0;

}
