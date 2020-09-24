#include <iostream>
#include <windows.h>
using namespace std;
int main(int argc, char** argv) {
	int kwota=0;
	menu_glowne:
	system("cls");
	cout<<"-----------------------MENU-----------------------\n";
	cout<<"1.ZUPY\n";
	cout<<"2.DANIA GLOWNE\n";
	cout<<"3.MIESA\n";
	cout<<"4.JARZYNA\n";
	cout<<"5.DESER\n";
	cout<<"6.DO KASY\n";
	cout<<"--------------------------------------------------\n";
	cout<<"Lacznie: "<<kwota<<"zl.\n";
	cout<<"Prosze wybrac opcje (1-6): ";
	int wybor=0;
	cin>>wybor;
	if(wybor<1||wybor>6){
		system("cls");
		goto menu_glowne;
	}
	switch(wybor){
		case 1:
			zupy:
			system("cls");
			cout<<"-----------------------ZUPY-----------------------\n";
			cout<<"1.Pomidorowa (3zl)\n";
			cout<<"2.Cebulowa (2zl)\n";
			cout<<"3.Rosolek (1zl)\n";
			cout<<"4.Barszcz (4zl)\n";
			cout<<"5.Wstecz\n";
			cout<<"--------------------------------------------------\n";
			cout<<"Lacznie: "<<kwota<<"zl.\n";
			cout<<"Prosze wybrac opcje (1-5): ";
			cin>>wybor;
			if(wybor<1||wybor>5){
				system("cls");
				goto zupy;
			}
			switch(wybor){
				case 1:
					kwota=kwota+3;
					goto zupy;
				case 2:
					kwota=kwota+2;
					goto zupy;
				case 3:
					kwota=kwota+1;
					goto zupy;
				case 4:
					kwota=kwota+4;
					goto zupy;
				case 5:
					goto menu_glowne;
			}
		case 2:
			danie_glowne:
			system("cls");
			cout<<"-------------------DANIE GLOWNE-------------------\n";
			cout<<"1.Ziemniaki (3zl)\n";
			cout<<"2.Ryz (5zl)\n";
			cout<<"3.Makaron (2zl)\n";
			cout<<"4.Pyzy (6zl)\n";
			cout<<"5.Wstecz\n";
			cout<<"--------------------------------------------------\n";
			cout<<"Lacznie: "<<kwota<<"zl.\n";
			cout<<"Prosze wybrac opcje (1-5): ";
			cin>>wybor;
			if(wybor<1||wybor>5){
				system("cls");
				goto danie_glowne;
			}
			switch(wybor){
				case 1:
					kwota=kwota+3;
					goto danie_glowne;
				case 2:
					kwota=kwota+5;
					goto danie_glowne;
				case 3:
					kwota=kwota+2;
					goto danie_glowne;
				case 4:
					kwota=kwota+6;
					goto danie_glowne;
				case 5:
					goto menu_glowne;
			}
		case 3:
			miesa:
			system("cls");
			cout<<"-----------------------MIESA----------------------\n";
			cout<<"1.Kotlet schabowy (3zl)\n";
			cout<<"2.Kurczak (5zl)\n";
			cout<<"3.Ryba (3zl)\n";
			cout<<"4.Mielone (2zl)\n";
			cout<<"5.Wstecz\n";
			cout<<"--------------------------------------------------\n";
			cout<<"Lacznie: "<<kwota<<"zl.\n";
			cout<<"Prosze wybrac opcje (1-5): ";
			cin>>wybor;
			if(wybor<1||wybor>5){
				system("cls");
				goto miesa;
			}
			switch(wybor){
				case 1:
					kwota=kwota+3;
					goto miesa;
				case 2:
					kwota=kwota+5;
					goto miesa;
				case 3:
					kwota=kwota+3;
					goto miesa;
				case 4:
					kwota=kwota+2;
					goto miesa;
				case 5:
					goto menu_glowne;
			}
		case 4:
			jarzyna:
			system("cls");
			cout<<"----------------------JARZYNA---------------------\n";
			cout<<"1.Groszek (2zl)\n";
			cout<<"2.Surowka (3zl)\n";
			cout<<"3.Kalafior (2zl)\n";
			cout<<"4.Buraczki (1zl)\n";
			cout<<"5.Wstecz\n";
			cout<<"--------------------------------------------------\n";
			cout<<"Lacznie: "<<kwota<<"zl.\n";
			cout<<"Prosze wybrac opcje (1-5): ";
			cin>>wybor;
			if(wybor<1||wybor>5){
				system("cls");
				goto jarzyna;
			}
			switch(wybor){
				case 1:
					kwota=kwota+2;
					goto jarzyna;
				case 2:
					kwota=kwota+3;
					goto jarzyna;
				case 3:
					kwota=kwota+2;
					goto jarzyna;
				case 4:
					kwota=kwota+1;
					goto jarzyna;
				case 5:
					goto menu_glowne;
			}
		case 5:
			deser:
			system("cls");
			cout<<"-----------------------DESER----------------------\n";
			cout<<"1.Ciastko (1zl)\n";
			cout<<"2.Paczek (2zl)\n";
			cout<<"3.Kawa (1zl)\n";
			cout<<"4.Wstecz\n";
			cout<<"--------------------------------------------------\n";
			cout<<"Lacznie: "<<kwota<<"zl.\n";
			cout<<"Prosze wybrac opcje (1-4): ";
			cin>>wybor;
			if(wybor<1||wybor>4){
				system("cls");
				goto deser;
			}
			switch(wybor){
				case 1:
					kwota=kwota+1;
					goto deser;
				case 2:
					kwota=kwota+2;
					goto deser;
				case 3:
					kwota=kwota+1;
					goto deser;
				case 4:
					goto menu_glowne;
			}
		case 6:
			system("cls");
			cout<<"--------------------------------------------------\n";
			cout<<"KWOTA DO ZAPLATY: "<<kwota<<"zl";
			cout<<"\n--------------------------------------------------\n\n\n\n";
			return 0;
	}
}
