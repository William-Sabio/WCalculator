#include <iostream>
using namespace std;
float somar(float a,float b){
	return a+b;
}
float subtrair(float a,float b){
	return a-b;
}
float multiplicar(float a,float b){
	return a*b;
}
float dividir(float a,float b){
	return a/b;
}
float porcentagem(float a,float b){
	return (a/100)*b;
}
int main(){
	int x;
	float pri_num;float seg_num;
	system("clear");
	cout << "WCalculator" << endl;
	cout << "----------------" << endl;
	cout << "[1] Somar" << endl;
	cout << "[2] Subtrair" << endl;
	cout << "[3] Multiplicação" << endl;
	cout << "[4] Divisão" << endl;
	cout << "[5] Porcentagem" << endl;
	cout << "[0] Sair" << endl;
	cout << "Opção: ";
	cin >> x;
	if(x==0){
		system("clear");
		return 0;
	}
	system("clear");
	if(x==5){
		cout << "Quantos porcento? ";
		cin >> pri_num;
		cout << pri_num << "% " << "de...? ";
		cin >> seg_num;
	}else{
		cout << "Primeiro número: ";
		cin >> pri_num;
		cout << "Segundo número: ";
		cin >> seg_num;
	}
	system("clear");
	if(x==1){
		system("clear");
		cout << "X: " << pri_num << endl;
		cout << "Y: " << seg_num << endl;
		cout << "Resultado da soma é: " << somar(pri_num,seg_num) << endl;
	}else if(x==2){
		system("clear");
		cout << "X: " << pri_num << endl;
		cout << "Y: " << seg_num << endl;
		cout << "Resultado da subtração: " << subtrair(pri_num,seg_num) << endl;
	}else if(x==3){
		system("clear");
		cout << "X: " << pri_num << endl;
		cout << "Y: " << seg_num << endl;
		cout << "Resultado da multiplicação: " << multiplicar(pri_num,seg_num) << endl;
	}else if(x==4){
		system("clear");
		if(seg_num==0){
			system("clear");
			cout << "Não é possível dividir por zero!!" << endl;
			return 1;
		}
		cout << "X: " << pri_num << endl;
		cout << "Y: " << seg_num << endl;
		cout << "Resultado da divisão: " << dividir(pri_num,seg_num) << endl;
	}else if(x==5){
		system("clear");
		cout << pri_num << "% " << "de " << seg_num << endl;
		cout << "Resultado da porcentagem é: " << porcentagem(pri_num,seg_num) << endl;
	}else{
		system("clear");
		cout << "Bem.. você não selecionou uma opção válida. :P" << endl;
		return 1;
	}
	return 0;
}