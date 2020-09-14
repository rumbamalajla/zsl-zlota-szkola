#include<iostream>
using namespace std;
int main()
{
    int pesel[11];
    for(int i=0;i<=10;i++){
    	cout<<"Podaj liczbe "<<i+1<<" numeru PESEL: ";
    	cin>>pesel[i];
    	if(pesel[i]<0||pesel[i]>9){
    		cout<<"Wprowadzono bledna liczbe!\n";
    		return 3;
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
    cout<<"Data urodzenia: "<<pesel[0]<<pesel[1]<<"/"<<pesel[2]<<pesel[3]<<"/20"<<pesel[4]<<pesel[5]<<"r.\n";
    cout<<"Numer serii: "<<pesel[6]<<pesel[7]<<pesel[8]<<pesel[9]<<"\n";
    if(pesel[9]%2==0){
    	cout<<"Plec: Kobieta\n";
	}
	else{
		cout<<"Plec: Mezczyzna\n";
	}
	return 0;
}
