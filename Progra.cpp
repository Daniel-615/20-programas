#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <cmath>
#include<windows.h>
#include<conio.h>

using namespace std;
float x, y;
string unidades[] = {"cero", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
string decenas[] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve"};
string decenas2[] = {"", "", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
string centenas[] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};
void Suma(int num,int n){
    n=x;
    num=y;
    int resul;
    resul=n+num;
    cout<<"La suma de los dos numeros es igual a: "<<resul;
}
void Resta(int num,int n){
    n=x;
    num=y;
    int resul;
    resul=n-num;
    cout<<"La resta de los dos numeros es igual a: "<<resul;
}
void Multi(int num,int n){
    n=x;
    num=y;
    int resul;
    resul=n*num;
    cout<<"La multiplicacion de los dos numeros es igual a: "<<resul;
}
void divi(float num,float n){
    n=x;
    num=y;
    int resul;
    resul=n/num;
    cout<<"La division de los dos numeros es igual a: "<<resul;
}
void programa1(){
int opcion;
    cout<<"Ingrese el primer numero: ";
    cin>>x;
    cout<<"Ingrese el segundo numero: ";
    cin>>y;
    cout<<"Ingrese 1. para Sumar, 2.Restar, 3. Multiplicar, 4.Division"<<endl;
    cin>>opcion;
    switch(opcion){
    case 1:
        Suma(x,y);
        break;
    case 2:
        Resta(x,y);
        break;
    case 3:
        Multi(x,y);
        break;
    case 4:
        divi(x,y);
        break;
    default:
        cout<<"Esa opcion no existe";
        break;
    }
}
void programa2(){
    int n;
    cout<<"Ingrese un numero para analizar si es par o impar: "<<endl;
    cin>>n;
    if(n%2==0){
        cout<<"El numero es par"<<endl;
    }
    else{
        cout<<"El numero es impar"<<endl;
    }
}
void programa3(){

    float kilometro=0;
    float milla=0.621371;
    float metro=1;
    float libra;
    float kilogramos=0.45359237;
    float result;

    cout<<"Ingrese cuantos kilometros desea convertir a millas: ";
    cin>>kilometro;
    result=kilometro*milla;
    cout<<kilometro<<" kilometros a millas convertidos son: "<<result<<endl;
    float pulgada=39.3701;
    cout<<"Ingrese cuantos metros desea convertir a pulgadas: ";
    cin>>metro;
    result=metro*pulgada;
    cout<<metro<<" Metros a pulgadas son los siguientes: "<<result<<endl;
    cout<<"Ingrese cuantas libras desea convertir a kilogramos: ";
    cin>>libra;
    result=libra*kilogramos;
    cout<<libra<<" a kilogramos son igual a : "<<result<<endl;
    cout<<"============================================================="<<endl;
    cout<<"============================================================="<<endl;
    cout<<"Ingrese cuantas millas desea convertir a kilometros: ";
    kilometro=1.6093;
    cin>>milla;
    result=milla*kilometro;
    cout<<milla<<" milla a kilometros son igual a: "<<result<<endl;
    cout<<"Ingrese cuantas pulgadas desea convertir a metros: "<<endl;
    metro=0.0254;
    cin>>pulgada;
    result=pulgada*metro;
    cout<<pulgada<<" pulgadas a metros son igual a: "<<result<<endl;
    cout<<"Ingrese cuantos kilos quiere convertir a libras: "<<endl;
    libra=2,20462262;
    cin>>kilogramos;
    result=kilogramos*libra;
    cout<<kilogramos<<" kilogramos a libras son igual a: "<<result<<endl;
}
void programa4(){
     string texto;
    int aux = 0, igual = 0;

    cout << "Ingrese la palabra o numero a evaluar: ";
    getline(cin >> ws, texto);

    for(int ind = texto.length() - 1; ind >= 0; ind--) {
        if(texto[ind] == texto[aux]) {
            igual++;
        }
        aux++;
    }

    if(texto.length() == igual) {
        cout << "La palabra/numero ingresada es palindromo!! " << endl;
    } else {
        cout << "La palabra/numero ingresada no es palindromo!!" << endl;
    }
}
void programa5(){
    int numero,unidades,decenas,centenas,millares;

		cout << "\nIngresa un numero entre [1-3999] para convertirlo a romano: ";
		cin >> numero;

		unidades = numero%10; numero /= 10;
		decenas = numero%10; numero /= 10;
		centenas = numero%10; numero /= 10;
		millares = numero%10; numero /= 10;

		switch(millares){
			case 1: cout << "M"; break;
			case 2: cout << "MM"; break;
			case 3: cout << "MMM"; break;
		}

		switch(centenas){
			case 1: cout << "C"; break;
			case 2: cout << "CC"; break;
			case 3: cout << "CCC"; break;
			case 4: cout << "CD"; break;
			case 5: cout << "D"; break;
			case 6: cout << "DC"; break;
			case 7: cout << "DCC"; break;
			case 8: cout << "DCCC"; break;
			case 9: cout << "CM"; break;
		}

		switch(decenas){
			case 1: cout << "X"; break;
			case 2: cout << "XX"; break;
			case 3: cout << "XXX"; break;
			case 4: cout << "XL"; break;
			case 5: cout << "L"; break;
			case 6: cout << "LX"; break;
			case 7: cout << "LXX"; break;
			case 8: cout << "LXXX"; break;
			case 9: cout << "XC"; break;
		}

		switch(unidades){
			case 1: cout << "I"; break;
			case 2: cout << "II"; break;
			case 3: cout << "III"; break;
			case 4: cout << "IV"; break;
			case 5: cout << "V"; break;
			case 6: cout << "VI"; break;
			case 7: cout << "VII"; break;
			case 8: cout << "VIII"; break;
			case 9: cout << "IX"; break;
		}
}
void programa6(){
     int numero,unidades,decenas,centenas,millares;

		cout << "\nIngresa un numero entre [1-3999] para convertirlo a : ";
		cin >> numero;

		unidades = numero%10; numero /= 10;
		decenas = numero%10; numero /= 10;
		centenas = numero%10; numero /= 10;
		millares = numero%10; numero /= 10;


		switch(millares){
			case 1: cout << "Mil "; break;
			case 2: cout << "Dos Mil "; break;
			case 3: cout << "Tres Mil "; break;
		}
		switch(centenas){
            case 1:cout<<"Cien ";break;
			case 2: cout << "Doscientos "; break;
			case 3: cout << "Trescientos "; break;
			case 4: cout << "Cuatroscientos "; break;
			case 5: cout << "Quinientos "; break;
			case 6: cout << "Seiscientos "; break;
			case 7: cout << "Setecientos "; break;
			case 8: cout << "Ochocientos "; break;
			case 9: cout << "Novecientos "; break;
		}
		switch(decenas){
		    case 1: cout<<"Diez ";break;
			case 2:cout<<"Veinte"; break;
			case 3: cout << "Treinta "; break;
			case 4: cout << "Cuarenta "; break;
			case 5: cout << "Cincuenta "; break;
			case 6: cout << "Sesenta "; break;
			case 7: cout << "Setenta "; break;
			case 8: cout << "Ochenta "; break;
			case 9: cout << "Noventa "; break;
		}

		switch(unidades){
			case 1: cout << "Uno "; break;
			case 2: cout << "Dos "; break;
			case 3: cout << "Tres "; break;
			case 4: cout << "Cuatro "; break;
			case 5: cout << "Cinco "; break;
			case 6: cout << "Seis "; break;
			case 7: cout << "Siete "; break;
			case 8: cout << "Ocho "; break;
			case 9: cout << "Nueve "; break;
		}
}
string int_to_str(int num)
{
    string str = "";
    string units[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    string tens[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    string teens[] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciseis", "diecisiete", "dieciocho", "diecinueve"};

    int num_units = num % 10;
    int num_tens = (num / 10) % 10;
    int num_hundreds = (num / 100) % 10;
    int num_thousands = (num / 1000) % 10;

    if (num_thousands > 0)
    {
        str += units[num_thousands] + " mil ";
    }

    if (num_hundreds > 0)
    {
        str += units[num_hundreds] + " cientos ";
    }

    if (num_tens == 1 && num_units > 0)
    {
        str += teens[num_units];
    }
    else if (num_tens > 0 || num_units > 0)
    {
        if (num_tens > 0)
        {
            str += tens[num_tens] + " ";
        }
        if (num_units > 0)
        {
            str += units[num_units];
        }
    }

    return str;
}

string double_to_str(double num)
{
    int int_part = static_cast<int>(num);
    int decimal_part = static_cast<int>((num - int_part) * 100);

    string int_str = int_to_str(int_part);
    string decimal_str = int_to_str(decimal_part);

    return int_str + " punto " + decimal_str;
}
void programa7(){
cout<<"Ingrese el numero: "<<endl;
    double num = 0;
    cin>>num;
    string numStr = double_to_str(num);
    cout << num << " en letras es: " << numStr;
}

void programa8(){
    	int n1,n2= 1;
	int acumulador=1;
	int vuelta,vueltas=1;

	while(n2<=10) //tabla 2
		{
			acumulador=2;
			cout<<acumulador<<"*"<<n2<<"=";
			n1=acumulador*n2;
			cout<<n1<<endl;
			n2++;
		}
}
void programa9(){
    int n1=1;
	int n2=1;
	int resultado=0;
	while(n1<=10)
	{

		cout<<n1<<"*"<<n2<<"="<<resultado;
		resultado=n1*n2;
		cout<<endl;


		n2++;

		if(n2==11)
		{
			n2=1;
			n1++;
			cout<<endl;
		}
	}
	cout<<"¡El programa se ha realizado con exito!";
}
void programa10(){
    int num1 = 0;
    int num2 = 0;
    cout<<"Ingrese el primer numero: "<<endl;
    cin>>num1;
    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>num2;
    int unidades1 = num1 % 10;
    int decenas1 = num1 / 10;

    int unidades2 = num2 % 10;
    int decenas2 = num2 / 10;

    int producto1 = unidades1 * num2;
    int producto2 = decenas1 * num2;

    int resultado = producto1 + (producto2 * 10);

    cout << "  " << decenas1 << unidades1 << endl;
    cout << "x " << decenas2 << unidades2 << endl;
    cout << "----" << endl;
    cout << " " << producto1 << endl;
    cout << producto2 << endl;
    cout << "----" << endl;
    cout << " " << resultado << endl;


}
void programa11(){
    int decimal, residuo, binario = 0, posicion = 1;

    cout << "Ingrese un numero decimal: ";
    cin >> decimal;

    while (decimal > 0) {
        residuo = decimal % 2;
        binario += residuo * posicion;
        posicion *= 10;
        decimal /= 2;
    }

    cout << "El numero binario es: " << binario << endl;
}
void programa12(){
     int decimal;

    cout << "Ingrese un numero decimal: ";
    cin >> decimal;

    stringstream hex_stream;
    hex_stream << hex << decimal;

    string hex_string = hex_stream.str();

    cout << "El numero hexadecimal equivalente es: " << hex_string << endl;
}
void programa13(){
    cout<<"Se dibujara un triangulo......."<<endl;
    for(int i=0; i<7;i++){
        for(int j=0; j<7-i;j++){
                cout<<" ";
            }
            for(int x=0;x<i*2+1;x++){
                cout<<"*";
            }
        cout<<"\n";
    }

}
void programa14(int x1,int y1){
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
     COORD dwPos;
     dwPos.X = x1 ;
     dwPos.Y = y1;
     SetConsoleCursorPosition(hcon, dwPos);
}
void program14(){
    char opcion;
    int x=10, y=10;
    while(opcion!='z')
    {
       system ("cls");
       programa14(x,y); cout<<"*";
       opcion=getch();
       switch(opcion)
       {
          case 'w': y--; break;
          case 's': y++; break;
          case 'a': x--; break;
          case 'd': x++; break;
        }
    }
}
void showMenu(){
    cout << "********MENU********" << endl;
    cout << "1. Revisar Cuenta" << endl;
    cout << "2. Depositar" << endl;
    cout << "3. Retirar" << endl;
    cout << "4. Salir" << endl;
    cout << "********************" << endl;

}
void programa15(){

    //Revisar balance, depositar, retirar, salida
    int option;
    double balance = 500;

    do{
    showMenu();
    cout << "Option; ";
    cin >> option;
    system("cls");

    switch(option){
    case 1: cout << "Su balance es de: " << balance << "$" << endl; break;
    case 2: cout << "Depositar Cantidad: ";
        double depositAmmount;
        cin >> depositAmmount;
        balance += depositAmmount;
        break;
    case 3: cout << "Retirar Cantidad: ";
        double withdrawAmount;
        cin >> withdrawAmount;
        if(withdrawAmount <= balance)
            balance -= depositAmmount;
        else
            cout << "Lo sentimos, no hay suficientes fondos " << endl;
        break;
    }
    } while (option != 4);


    system("pause>0");
}
void programa16(){
    double c = 0; // longitud del cateto c
    cout<<"Ingrese la longitud del cateto c: "<<endl;
    cin>>c;
   double h = sqrt(pow(c, 2) + pow(c, 2)); // calcula la hipotenusa utilizando el teorema de Pitágoras

   cout << "La hipotenusa es: " << h << endl;

}
void programa17(){
    int mat[4][4];
    int filas=4;
    int columnas=4;
	for(int i=0;i<filas;i++){
		for(int c=0; c<columnas; c++){

			cout<<"Digite un numero ["<<i<<"]["<<c<<"] :";
			cin>>mat[i][c];
		}
		cout<<"\n";
	}
	int v=0;
	v=filas*columnas;
	int vec[v],aux,i=0;
	for(int f=0;f<filas;f++){
		for(int c=0; c<columnas; c++)	{
			vec[i++]=mat[f][c];
		}
	}
	//ordenar burbuja
	for(int i=0;i<v;i++){
		for(int p=0; p<v-1;p++){
		 	if(vec[p]>vec[p+1])
		 	{
		 		aux=vec[p];
		 		vec[p]=vec[p+1];
		 		vec[p+1]=aux;
		 	}
		}
	}
	//guardar nuevamente a la matriz
	i=0;
	for(int fil=0; fil<filas;fil++)
	{
		for(int col=0; col<columnas;col++)
		{
			mat[fil][col]=vec[i++];
		}
	}
//Mostrar matriz
	for(i=0;i<filas;i++)
	{
		for(int c=0; c<columnas; c++){
			cout<<mat[i][c];
		}
		cout<<"\n";
	}
}
void programa18(){
    struct empleados{
	int codigo;
	int edad;
	char nombre[20];
}empleado[100];
    int emp=0;
	cout<<"Cuantos empleados desea ingresar:"<<endl;
	cin>>emp;
	for(int i=0; i<emp;i++){
		fflush(stdin);
		cout<<"Ingrese el codigo del empleado "<<i+1<<":"<<endl;
		cin>>empleado[i].codigo;
		cout<<"Ingrese la edad del empleado "<<i+1<<":"<<endl;
		cin>>empleado[i].edad;
		fflush(stdin);
		cout<<"Ingrese el nombre del empleado "<<i+1<<":"<<endl;
		cin.getline(empleado[i].nombre,20,'\n');
	}
	cout<<"Lista de empleados"<<endl;
	cout<<"============================"<<endl;
	for(int i=0; i<emp;i++){
		cout<<"\n";
		cout<<"Nombre: "<<empleado[i].nombre<<endl;
		cout<<"Edad: "<<empleado[i].edad<<endl;
		cout<<"Codigo: "<<empleado[i].codigo<<endl;
	}
}
bool isNumber(const string& str)
{
    return str.find_first_not_of( "0123456789" ) == string::npos;
}
bool ischaracter(const string& str)
{
	return str.find_first_not_of( "abcdefghijklmnoprstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ")==string::npos;
}
void programa19(){
    string numero;
string letra;


    cout<<"Escriba un numero entero:";
    cin>>numero;
    cout<<"\nEscriba una letra:";
    cin>>letra;

      isNumber(numero) ? cout << "Es numero entero\n" : cout << "No es un numero entero\n";
    ischaracter(letra) ? cout << "Es una letra\n" : cout << "No es una letra";
	exit(EXIT_SUCCESS);

}

void programa20(){

	ofstream archivo;
	archivo.open("Texto.txt",ios::out);

	if(archivo.fail())
	{
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	archivo<<"Hola que tal"<<endl;
	cout<<"Se ha ejecutado con exito, revise su archivo!"<<endl;
	archivo.close();
}
void principal(){
    int opcion;
    cout<<"\t\t\t\tBienvenido a los 20 programas\n";
    cout<<"_________________________________________________________________________________________________________________"<<endl;
    cout<<"Elija opcion 1. Primer programa, 2. Segundo programa, 3.Tercer programa, 4. Cuarto Programa, 5. Quinto programa\n6. Sexto Programa, 7. Septimo programa, 8. Octavo programa, 9. Noveno programa, 10. Decimo programa\n";
    cout<<"================================================================================================================="<<endl;
    cout<<"11. Onceavo programa, 12. Doceavo programa, 13. Treceavo programa, 14. Cuartoceavo programa, 15. Quinceavo programa\n16. Programa 16, 17. Programa 17, 18. Programa 18, 19. Programa 19, 20. Programa 20"<<endl;
    cout<<"================================================================================================================="<<endl;
    cin>>opcion;
    switch(opcion){
    case 1:programa1();break;
    case 2:programa2();break;
    case 3:programa3();break;
    case 4:programa4();break;
    case 5:programa5();break;
    case 6:programa6();break;
    case 7:programa7();break;
    case 8:programa8();break;
    case 9:cout<<"A continuación se le mostrara las tablas de multiplicar:"<<endl;programa9();break;
    case 10:programa10();break;
    case 11:programa11();break;
    case 12:programa12();break;
    case 13:programa13();break;
    case 14:program14();break;
    case 15: programa15();break;
    case 16: programa16();break;
    case 17: programa17();break;
    case 18: programa18();break;
    case 19: programa19();break;
    case 20: programa20();break;
    default:cout<<"Esa opcion no existe\n";
    }
}
int main(){
    principal();
}
