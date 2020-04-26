#include <iostream>
#include <sstream>

using namespace std;
string rzut(int &kiczba)
{
    string liczba;
    ostringstream kon;
    kon<<kiczba;
    return liczba=kon.str();
}

int main()
{
    int j=0,licznik=0,ile=0,pow=0;
    string wyraz,kopia,tab[200];
cin>>ile;
  while(ile>pow)
{cin>>wyraz;
    for(int i=0;i<wyraz.size();i++)
      {
    if(wyraz[i]!=wyraz[i+1]&&licznik==0){kopia+=wyraz[i];};//1 letter
    if(wyraz[i]==wyraz[i+1])licznik++;//amount liter
    if(licznik>=2&&wyraz[i+1]!=wyraz[i]){kopia+=wyraz[i-licznik+1]; licznik++; kopia+=rzut(licznik); licznik=0;}//>2 delete and set only 1 mark
    if(wyraz[i]!=wyraz[i+1]&&licznik==1){licznik=0; kopia+=wyraz[i-1]; kopia+=wyraz[i];} //setting to 2 letters
      }
    tab[pow]=kopia;
    kopia="";
    pow++;}

    pow=0;
while(pow<ile)
{
    cout<<tab[pow]<<endl;
    pow++;
}



    return 0;
}
