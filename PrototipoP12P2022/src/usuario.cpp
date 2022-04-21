#include "usuario.h"
#include <iostream>
#include <istream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>
#include <conio.h>
#include <iomanip>


using namespace std;

usuario::usuario()
{
    //ctor
}

usuario::~usuario()
{
    //dtor
}
void usuario::menu()
{
    int choice;
    char s;
    do

    {
    system("cls");
    cout << "Autor: Rene Salvador Martinez Over - No. Carne: 9959-21-4167"<<endl;
    cout << "   _______________________________________  "<<endl;
                       cout << "   "<<endl;
    cout << "   | CORPORACION DE LABORATORIOS MEDICOS |"<<endl;
    cout << "   _______________________________________\n"<<endl;
                       cout << "   "<<endl;

    cout << " 1. Ingresar"<<endl;
    cout << " 2. Salir"<<endl;

    cout << "-------------------------------------------\n"<<endl;
    cout << "Opcion a escoger : [1/2]"<<endl;
    cout << "-------------------------------------------\n"<<endl;
    cout << "Selecciona tu opcion: "<<endl;
    cin>>choice;

    switch(choice)
        {
                case 1:
                        login();
                        break;
                case 2:
                        exit(0);
                        break;
                default:

                        cout<<"Hiciste algo mal, prueba otra vez"<<endl;

        }
        getch();
    }while(choice!= 2);
}

void usuario::login()
{
    int count;
    string nombre, contra, n, c;
    system("cls");
    cout << "*********************************************"<<endl;
    cout << "          | Ingresar al Sistema |"<<endl;
    cout << "*********************************************"<<endl;
    cout << " Nombre de Usuario:"<<endl;
    cin >>nombre;
    cout << " Contraseña:"<<endl;
    cin >>contra;

    ifstream input("LoginDatos.txt");
        while(input>>n>>c)
        {
                if(n==nombre && c==contra)

                {
                        count=0;
                        system("cls");
                }
        }
        input.close();
        if(count==0)
        {
                cout<<"\nHola "<< nombre<<"\nTu Ingreso ha sido Exitoso!";
                cin.get();
                cin.get();
                usuario::menu1();




        }
        else
        {
                cout<<"\nError en el acceso\nEl usuario o contraseña son invalidos\n";
        }
}
void usuario::menu1()
{
    int choice;
    char s;
    do
    {
        system ("cls");

        cout << "\t\t\t     _______________________________________"<<endl;
        cout << "\t\t\t    |              MENU GENERAL             |"<<endl;
        cout << "\t\t\t -----------------------------------------------"<<endl;

        cout << "\t\t\t  1. CRUD Catalagos"<<endl;
        cout << "\t\t\t  2. Informes"      <<endl;
        cout << "\t\t\t  3. Salir"<<endl;

        cout << "\t\t\t ______________________________________________"<<endl;
        cout << "\t\t\t Opcion a escoger : [1/2/3/4/5/6/7]"<<endl;
        cout << "\t\t\t ----------------------------------------------"<<endl;
        cout << "\t\t\t Selecciona tu opcion: "<<endl;
        cin>>choice;

    switch(choice)
    {
    case 1:
    	do
    	{
    		crud();
    		cout << "\t\t\t\t ¿Quieres seguir en el apartado de CRUD? (S/N)";
    		cin>>s;
		}while(s=='s'||s=='S');
		break;

		case 3:
		exit(0);
	default:
		cout << "\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(choice!= 3);
}

void usuario::crud()
{
int choice;
    char s;
    do
    {
        system ("cls");

        cout << "\t\t\t *********************************************"<<endl;
        cout << "\t\t\t              | Menu CRUD |"<<endl;
        cout << "\t\t\t *********************************************"<<endl;
        cout << "\t\t\t  1.  Empleados"<<endl;
        cout << "\t\t\t  2.  Pacientes"<<endl;
        cout << "\t\t\t  3.  Examen"   <<endl;
        cout << "\t\t\t  4.  Salir"<<endl;

        cout << "\t\t\t *********************************************"<<endl;
        cout << "\t\t\t Opcion a escoger : [1/2/3/4/5/6/7]"<<endl;
        cout << "\t\t\t *********************************************"<<endl;
        cout << "\t\t\t Selecciona tu opcion: "<<endl;
        cin>>choice;

        switch(choice)
        {
    case 1:
    	do
    	{

    		menuE();
    		cout << "\t\t\t ¿Quieres seguir en el apartado de empleados? (S/N)";
    		cin>>s;
		}while(s=='s'||s=='S');
		break;

	case 4:
		exit(0);
	default:
		cout << "\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(choice!= 4);
}

void usuario::menuE()
{
    int choice;
	char x;

    {
	system("cls");

	cout<<"\t\t\t----------------------------------------"<<endl;
	cout<<"\t\t\t |          CRUD EMPLEADOS             |"<<endl;
	cout<<"\t\t\t----------------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingreso empleados"<<endl;
	cout<<"\t\t\t 2. Despliegue empleados"<<endl;
	cout<<"\t\t\t 3. Modificar empleados"<<endl;
	cout<<"\t\t\t 4. Borrar empleados"<<endl;
	cout<<"\t\t\t 5 Exit"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>choice;

    }
}
