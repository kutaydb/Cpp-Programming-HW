#include <iostream>
using namespace std;
int main() {
 
int a,dizi[5];
 
cout << "Sayilarinizi giriniz="<<endl;
 
for (int i=0;i<5;i++)
 
{
 
cin>>dizi[i];
 
}
 
a=dizi[4];
 
for (int i=4;i>0;i--)
 
{
 
dizi[i]=dizi[i-1];
 
}
 
dizi[0]=a;
 
cout<<"Sonucunuz="<<endl;
 
for (int i=0;i<5;i++)
 
{
 
cout<<dizi[i]<<" ";
 
}
 
return 0;
}