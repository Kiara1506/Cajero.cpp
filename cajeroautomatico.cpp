//Programa: Cajero Automatico
//Autor: Casanova Kiara
//Fecha: 12-10-2023
//Archivo: cajeroautomatico.cpp

#include<iostream>
using namespace std;

int main()
{
	int c1,c2,c3,c01=22,c02=50,c03=30;
	float valor,saldodisponible=10.000;
	cout<<"Ingrese c1 c2 c3:";
	cin>>c1>>c2>>c3;
	if(c1==c01){
	if(c2==c02){
	if(c3==c03){
	  cout<<"Ingrese el valor a retirar:"; cin>>valor;
	  saldodisponible=saldodisponible-valor;
	}else{
		  cout<<"contraseña c3 invalida"<<endl;}
	} else{
		  cout<<"contraseña c2 incorrecto"<<endl;}
	} else{
		 cout<<"contaseña c1 incorrecta"<<endl;}
	 return (0);
	}




