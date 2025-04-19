#include <iostream>
using namespace std;
int fonkk(char baska)
{
 
int num=0;
 
if ( baska=='1') 
 
{
 
num=1;
 
}
 
else if(baska=='2')
 
{
 
num=2;
 
}
 
else if(baska=='3')
 
{
 
num=3;
 
}
 
else if(baska=='4')
 
{
 
num=4;
 
}
 
else if(baska=='5')
 
{
 
num=5;
 
}
 
else if(baska=='6')
 
{
 
num=6;
 
}
 
else if(baska=='7')
 
{
 
num=7;
 
}
 
else if(baska=='8')
 
{
 
num=8;
 
}
 
else if(baska=='9')
 
{
 
num=9;
 
}
 
return num;
}
void fonk(string giris)
{
 
int cikis=0;
 
for (int i=0; i<giris.length(); i++)
 
{
 
if (giris[i]=='1'||giris[i]=='2'||giris[i]=='3'||giris[i]=='4'||giris[i]=='5'||giris[i]=='6'||giris[i]=='7'||giris[i]=='8'||giris[i]==
'9'||giris[i]=='0')
 
{
 
cikis+=fonkk(giris[i]);
 
}
 
 
}
 
cout << "toplam=" <<cikis<<endl;
}
int main() {
 
string a;
 
cout<<"yaziniz=";
 
cin>>a;
 
fonk(a);
 
return 0;
}