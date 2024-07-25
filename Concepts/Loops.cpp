// Program to find the sum of first n natural numbers

# include <iostream>
using namespace std;
int main()
{
  int n, i, sum=0;
  cout<<"Enter a number: ";
  cin>>n;
  //while loop
  i=0; 
  while (i<=n){
    sum +=i;
    i++;
  }
  
  //do while loop
  i=0;
  do{
    sum += i;
    i++;
  } while(i<=n);

  //for loop
  for(i=0; i<=n; i++) {
    sum += i;
  }

  cout<<"The sum of first "<< n <<" natural numbers is: "<<sum;
  return 0;
}