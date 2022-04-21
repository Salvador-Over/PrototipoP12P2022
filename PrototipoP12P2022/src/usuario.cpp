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
        cout << "\t\t\t Opcion a escoger : [1/2/3/4]"<<endl;
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
    case 2:
		menuP();
		break;
	case 3:
		menuX();
		break;
	case 4:
		menu1();
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
    do
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

 switch(choice)
    {
    case 1:
    	do
    	{
    		insert();
    		cout<<"\n\t\t\t Agrega otra persona(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');
		break;
	case 2:
		display();
		break;
	case 3:
		modify();
		break;
	case 4:
		delet();
		break;
	case 5:
		crud();
	default:
		cout<<"\n\t\t\t Opcion invalida...";
	}
	getch();
    }while(choice!= 5);
}

void usuario::insert()
{
string id,nombre,telefono;

	system("cls");
	fstream file;
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------Agregar informacion del empleado ---------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa Id del empleado         : ";
	cin>>id;
	cout<<"\t\t\tIngresa Nombre del empleado     : ";
	cin>>nombre;
	cout<<"\t\t\tIngresa Telefono del empleado   : ";
	cin>>telefono;
    file.open("RegistroEmpleados.dat", ios::binary | ios::app | ios::out);
	file<<std::left<<std::setw(30)<< id <<std::left<<std::setw(30)<< nombre << std::left<<std::setw(30)<< telefono<< "\n";
	file.close();


}

void usuario::display()
{
    string id,nombre,telefono,apellido,dpi,direccion;
	system("cls");
	fstream file;
	int total=0;
	cout<<"\n-------------------------Tabla de Informacion de los empleados -------------------------"<<endl;
	file.open("RegistroEmpleados.dat",ios::binary|ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> id >> nombre >> telefono ;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t Id Empleado: "<<id<<endl;
			cout<<"\t\t\t Nombre Empleado: "<<nombre<<endl;
			cout<<"\t\t\t Telefono Empleado: "<<telefono<<endl;

        file >> id >> nombre >> apellido >> dpi >> direccion >>telefono ;		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
}

void usuario::modify()
{
    string id,nombre,telefono;

	system("cls");
	fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Modificacion de Informacion de Empleados-------------------------"<<endl;
	file.open("RegistroEmpleados.dat",ios::binary|ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese Id del empleado que quiere modificar: ";
		cin>>participant_id;
		file1.open("registro.dat",ios::binary|ios::app | ios::out);
		file >> id >> nombre >> telefono;
		while(!file.eof())
		{
			if(participant_id!=id)
			{
			 file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< telefono << "\n";
			}
			else
			{
				cout<<"\t\t\tIngrese Id del Empleado: ";
				cin>>id;
				cout<<"\t\t\tIngrese Nombre del Empleado: ";
				cin>>nombre;
				cout<<"\t\t\tIngrese Telefono del Empleado: ";
				cin>>telefono;
				file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< telefono<< "\n";
				found++;
			}
			file >> id >> nombre >> telefono;

		}
		file1.close();
		file.close();
		remove("RegistroEmpleados.dat");
		rename("registro.dat","RegistroEmpleados.dat");
	}
}

void usuario::delet()
{
     string id,nombre,telefono;

	system("cls");
	fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Informacion del Empleado a Borrar-------------------------"<<endl;
	file.open("RegistroEmpleados.dat",ios::binary|ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el Id del empleado que quiere borrar: ";
		cin>>participant_id;
		file1.open("registro.dat",ios::binary|ios::app | ios::out);
		file >> id >> nombre >> telefono;
		while(!file.eof())
		{
			if(participant_id!= id)
			{
				file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< telefono << "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de informacion exitoso";
			}
			file >> id >> nombre  >> telefono;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Id del Empleado no encontrado...";
		}
		file1.close();
		file.close();
		remove("RegistroEmpleados.dat");
		rename("registro.dat","RegistroEmpleados.dat");
	}
}



void usuario::menuP()
{
    int choice;
	char x;

    {
	system("cls");

	cout<<"\t\t\t----------------------------------------"<<endl;
	cout<<"\t\t\t |          CRUD PACIENTES            |"<<endl;
	cout<<"\t\t\t----------------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingreso paciente"<<endl;
	cout<<"\t\t\t 2. Despliegue paciente"<<endl;
	cout<<"\t\t\t 3. Modificar paciente"<<endl;
	cout<<"\t\t\t 4. Borrar paciente"<<endl;
	cout<<"\t\t\t 5 Exit"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>choice;

 switch(choice)
    {
    case 1:
    	do
    	{
    		insert2();
    		cout<<"\n\t\t\t Agrega otra persona(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');
		break;
	case 2:
		display2();
		break;
	case 3:
		modify2();
		break;
	case 4:
		delet2();
		break;
	case 5:
		crud();
	default:
		cout<<"\n\t\t\t Opcion invalida...";
	}
	getch();
    }while(choice!= 5);
}

void usuario::insert2()
{
string id,nombre,telefono,a;

	system("cls");
	fstream file;
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------Agregar informacion del paciente ---------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa Id del paciente         : ";
	cin>>id;
	cout<<"\t\t\tIngresa Nombre del paciente     : ";
	cin>>nombre;
	cout<<"\t\t\tIngresa Telefono del paciente   : ";
	cin>>telefono;
    file.open("RegistroPacientes.dat", ios::binary | ios::app | ios::out);
	file<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre << std::left<<std::setw(15)<< telefono<< "\n";
	file.close();


}

void usuario::display2()
{
    string id,nombre,telefono,apellido,dpi,direccion;
	system("cls");
	fstream file;
	int total=0;
	cout<<"\n-------------------------Tabla de Informacion de los pacientes -------------------------"<<endl;
	file.open("RegistroPacientes.dat",ios::binary|ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> id >> nombre >> telefono ;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t Id Paciente: "<<id<<endl;
			cout<<"\t\t\t Nombre Paciente: "<<nombre<<endl;
			cout<<"\t\t\t Telefono Paciente: "<<telefono<<endl;

        file >> id >> nombre >> apellido >> dpi >> direccion >>telefono ;		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
}

void usuario::modify2()
{
    string id,nombre,telefono;

	system("cls");
	fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Modificacion de Informacion de Pacientes-------------------------"<<endl;
	file.open("RegistroPacientes.dat",ios::binary|ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese Id del paciente que quiere modificar: ";
		cin>>participant_id;
		file1.open("registro.dat",ios::binary|ios::app | ios::out);
		file >> id >> nombre >> telefono;
		while(!file.eof())
		{
			if(participant_id!=id)
			{
			 file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< telefono << "\n";
			}
			else
			{
				cout<<"\t\t\tIngrese Id del Paciente: ";
				cin>>id;
				cout<<"\t\t\tIngrese Nombre del Paciente: ";
				cin>>nombre;
				cout<<"\t\t\tIngrese Telefono del Paciente: ";
				cin>>telefono;
				file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< telefono<< "\n";
				found++;
			}
			file >> id >> nombre >> telefono;

		}
		file1.close();
		file.close();
		remove("RegistroPacientes.dat");
		rename("registro.dat","RegistroPacientes.dat");
	}
}

void usuario::delet2()
{
     string id,nombre,telefono;

	system("cls");
	fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Informacion del Paciente a Borrar-------------------------"<<endl;
	file.open("RegistroPacientes.dat",ios::binary|ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el Id del Paciente que quiere borrar: ";
		cin>>participant_id;
		file1.open("registro.dat",ios::binary|ios::app | ios::out);
		file >> id >> nombre >> telefono;
		while(!file.eof())
		{
			if(participant_id!= id)
			{
				file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< telefono << "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de informacion exitoso";
			}
			file >> id >> nombre  >> telefono;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Id del Paciente no encontrado...";
		}
		file1.close();
		file.close();
		remove("RegistroPacientes.dat");
		rename("registro.dat","RegistroPacientes.dat");
	}
}



void usuario::menuX()
{
    int choice;
	char x;

    {
	system("cls");

	cout<<"\t\t\t----------------------------------------"<<endl;
	cout<<"\t\t\t |          CRUD EXAMENES            |"<<endl;
	cout<<"\t\t\t----------------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingreso examen"<<endl;
	cout<<"\t\t\t 2. Despliegue examen"<<endl;
	cout<<"\t\t\t 3. Modificar examen"<<endl;
	cout<<"\t\t\t 4. Borrar examen"<<endl;
	cout<<"\t\t\t 5 Exit"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>choice;

   switch(choice)
    {
    case 1:
    	do
    	{
    		insert3();
    		cout<<"\n\t\t\t Agrega otra examen(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');
		break;
	case 2:
		display3();
		break;
	case 3:
		modify3();
		break;
	case 4:
		delet3();
		break;
	case 5:
		crud();
	default:
		cout<<"\n\t\t\t Opcion invalida...";
	}
	getch();
    }while(choice!= 5);
}

void usuario::insert3()
{
string id,nombre,telefono,apellido,dpi,direccion;

	system("cls");
	fstream file;
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------Agregar informacion del Examen ---------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa Id del Examen         : ";
	cin>>id;
	cout<<"\t\t\tIngresa Nombre del Examen     : ";
	cin>>nombre;
	cout<<"\t\t\tIngresa Precio del Examen   : ";
	cin>>telefono;
    file.open("RegistroExamen.dat", ios::binary | ios::app | ios::out);
	file<<std::left<<std::setw(30)<< id <<std::left<<std::setw(30)<< nombre << std::left<<std::setw(30)<< telefono<< "\n";
	file.close();


}

void usuario::display3()
{
    string id,nombre,telefono,apellido,dpi,direccion;
	system("cls");
	fstream file;
	int total=0;
	cout<<"\n-------------------------Tabla de Informacion del Examen -------------------------"<<endl;
	file.open("RegistroExamen.dat",ios::binary|ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> id >> nombre >> telefono ;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t Id Examen: "<<id<<endl;
			cout<<"\t\t\t Nombre Examen: "<<nombre<<endl;
			cout<<"\t\t\t Precio examen: "<<telefono<<endl;

        file >> id >> nombre >> apellido >> dpi >> direccion >>telefono ;		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
}

void usuario::modify3()
{
    string id,nombre,telefono;

	system("cls");
	fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Modificacion de Informacion de Examen-------------------------"<<endl;
	file.open("RegistroExamen.dat",ios::binary|ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese Id del examen que quiere modificar: ";
		cin>>participant_id;
		file1.open("registro.dat",ios::binary|ios::app | ios::out);
		file >> id >> nombre >> telefono;
		while(!file.eof())
		{
			if(participant_id!=id)
			{
			 file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< telefono << "\n";
			}
			else
			{
				cout<<"\t\t\tIngrese Id del Examen: ";
				cin>>id;
				cout<<"\t\t\tIngrese Nombre del Examen: ";
				cin>>nombre;
				cout<<"\t\t\tIngrese Precio del Examen: ";
				cin>>telefono;
				file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< telefono<< "\n";
				found++;
			}
			file >> id >> nombre >> telefono;

		}
		file1.close();
		file.close();
		remove("RegistroExamen.dat");
		rename("registro.dat","RegistroExamen.dat");
	}
}

void usuario::delet3()
{
     string id,nombre,telefono;

	system("cls");
	fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Informacion del Examen a Borrar-------------------------"<<endl;
	file.open("RegistroExamen.dat",ios::binary|ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el Id del Examen que quiere borrar: ";
		cin>>participant_id;
		file1.open("registro.dat",ios::binary|ios::app | ios::out);
		file >> id >> nombre >> telefono;
		while(!file.eof())
		{
			if(participant_id!= id)
			{
				file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< telefono << "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de informacion exitoso";
			}
			file >> id >> nombre  >> telefono;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Id del Examen no encontrado...";
		}
		file1.close();
		file.close();
		remove("RegistroExamen.dat");
		rename("registro.dat","RegistroExamen.dat");
	}
}





