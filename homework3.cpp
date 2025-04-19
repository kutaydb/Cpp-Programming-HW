#include <iostream>
using namespace std;
void fonk(int dizi[]){
 
 
int i = 0;
 
while (i < 5)
 
{
 
int a;
 
cout<<"10 ve 100 arasi sayi giriniz=";
 
cin>>a;
 
bool bl = false;
 
for (int j = 0; j < i; j++)
 
{
 
if (dizi[j] == a)
 
{
 
bl=true;
 
}
 
}
 
if (!bl)
 
{
 
dizi[i]=a;
 
i++;
 
cout<<"yeni sayi girisi="<<a<< endl;
 
}else
 
{
 
cout<<"bu sayiyi girdiniz"<<endl;
 
}
 
}
}
int main() {
 
int dizi[5];
 
fonk(dizi);
 
 
return 0;
}