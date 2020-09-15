#include<iostream>
using namespace std;
int main()
{
    char peselchar[11];
    int pesel[11];
    cout<<"/// Sprawdzacz PESELu dla lat 2000-2099 ///\n\n";
	cout<<"Wprowadz numer PESEL: ";
    cin>>peselchar;
    for(int i=0;i<11;i++){
    	pesel[i]=peselchar[i]-'0';
	}
	for(int i=0;i<11;i++){
		if(pesel[i]<0||pesel[i]>9){
			cout<<"Wprowadzono niedozwolony znak lub niepoprawna liczba znakow w numerze PESEL!";
			return 2;
		}
	}
    int kontrolna=0;
    kontrolna=9*pesel[0]+7*pesel[1]+3*pesel[2]+pesel[3]+9*pesel[4]+7*pesel[5]+3*pesel[6]+pesel[7]+9*pesel[8]+7*pesel[9];
    if(kontrolna%10!=pesel[10]){
    	cout<<"Wprowadzono bledny PESEL!\n";
    	return 1;
    }
    else{
    	cout<<"Wprowadzono poprawny PESEL!\n";
    }
    cout<<"Data urodzenia: "<<pesel[4]<<pesel[5]<<"/"<<pesel[2]-2<<pesel[3]<<"/20"<<pesel[0]<<pesel[1]<<"r.\n";
    cout<<"Numer serii: "<<pesel[6]<<pesel[7]<<pesel[8]<<pesel[9]<<"\n";
    if(pesel[9]%2==0){
    	cout<<"Plec: Kobieta\n";
	}
	else{
		cout<<"Plec: Mezczyzna\n";
	}
	return 0;
}
