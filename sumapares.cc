//Programa que realiza la suma de los numeros pares del 1 al 20
//Any Yanel Morales Guevara

#include <iostream>
using namespace std;

int main()
{
  int sum=0;
  int count=1;
  while (count=20) {
    if ((count%2)==0)
      {
	sum=sum+count;
      }
    count++;
  }
  cout<<"suma"<<sum<<endl;
  return 0;
}
