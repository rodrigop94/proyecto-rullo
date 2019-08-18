#include <iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
using namespace std;

/*  */

int main(int argc, char** argv) {
	int opc,n;//variable de seleccion
    int x,y;
	bool isCorrect = false;
    char selectedOption = 'N';

	
	cout<<"\n\t\t\t\t             RULLO \t\t\t\t "<<endl;
	cout<<"\n\t\t\t\t===============================\n\t\t\t\t"<<endl;
	cout<<"\n\t\t\t\t             JUGAR \t\t\t\t "<<endl;
	cout<<"\n\t\t\t\t===============================\n\t\t\t\t"<<endl;
	
     
	cout<<"1.SI"<<endl;
	cout<<"2.NO"<<endl;
	cin>>opc;
	system("cls");
		//selecciona si quiere jugar o no.
	if(opc==1){
	    srand(time(NULL));//generamos aleatoriamente ciertas posiciones 
    	int xI,xJ, val,xMatriz = 1 + rand() % 9;
    	if(xMatriz==1){
    	
	char matriz1[5][5]={{6,8,4,6,1},{6,2,3,6,5},{6,7,2,8,5},{7,5,2,3,3},{3,5,5,2,9}};//creamos matriz1

	
   	matriz1[0][1]=1+rand()%9;
   	matriz1[0][4]=1+rand()%9;
   	matriz1[1][0]=1+rand()%9;
   	matriz1[1][3]=1+rand()%9;
   	matriz1[1][4]=1+rand()%9;
   	matriz1[2][1]=1+rand()%9;
   	matriz1[2][4]=1+rand()%9;
   	matriz1[3][0]=1+rand()%9;
   	matriz1[4][2]=1+rand()%9;
   	matriz1[4][3]=1+rand()%9;
   	  for(int i =0;i<5;i++){
    for(int j =0;j<5;j++){
        matriz1[i][j] += 48;
    }
    cout<<endl;
  }
   do{
   		system("cls");
   	cout<<"\n\t\t\t\t\ MATRIZ 1"<<endl;
	cout<<"\n\n\t\t\t15"<<"   "<<"12"<<"   "<<"11"<<"   "<<"17"<<"   "<<"12\n\t\t\t\t "<<endl;
	cout<<"\t\t_____________________________________\t\t"<<endl;
  cout<<"\n\t\t16[\t"<<matriz1[0][0]; cout<<"    "<<matriz1[0][1];cout<<"    "<<matriz1[0][2];cout<<"    "<<matriz1[0][3];cout<<"    "<<matriz1[0][4]<<"\t  ]16";
   cout<<"\n\n\t\t 5[\t"<<matriz1[1][0]; cout<<"    "<<matriz1[1][1];cout<<"    "<<matriz1[1][2];cout<<"    "<<matriz1[1][3];cout<<"    "<<matriz1[1][4]<<"\t  ]5";
   cout<<"\n\n\t\t16[\t"<<matriz1[2][0]; cout<<"    "<<matriz1[2][1];cout<<"    "<<matriz1[2][2];cout<<"    "<<matriz1[2][3];cout<<"    "<<matriz1[2][4]<<"\t  ]16";
   cout<<"\n\n\t\t13[\t"<<matriz1[3][0]; cout<<"    "<<matriz1[3][1];cout<<"    "<<matriz1[3][2];cout<<"    "<<matriz1[3][3];cout<<"    "<<matriz1[3][4]<<"\t  ]13";
   cout<<"\n\n\t\t17[\t"<<matriz1[4][0]; cout<<"    "<<matriz1[4][1];cout<<"    "<<matriz1[4][2];cout<<"    "<<matriz1[4][3];cout<<"    "<<matriz1[4][4]<<"\t  ]17";
   cout<<"\n\n\t\t___________________________________\t\t"<<endl;
   cout<<"\n\n\t\t\t15"<<"   "<<"12"<<"   "<<"11"<<"   "<<"17"<<"   "<<"12\n\t\t\t\t "<<endl;
   //	system("cls");
   cout<<"\t\===================================================="<<endl;
    cout << "\t\====================================================" << endl;
  cout << "\t Realizar una operacion:\n\n";
  cout << "\t [A] Agregar | [Q] Quitar [S] Salir \n\n";
  cout << "\t Uso: [ A|Q xI xJ ?VAL ] \n\t\t-> Agregar 9 en la pos 1,1 :  [ A 1 1 9 ]\n\t\t-> Quitar en la pos 1,1    :  [ Q 1 1   ]\n";
  cout << "\t -> ";
  cin>>selectedOption;
  if(selectedOption=='A'){
    cin>>xI>>xJ>>val;
    matriz1[xI-1][xJ-1]=val+48;
  }else if(selectedOption=='Q'){
    cin>>xI>>xJ;
    matriz1[xI-1][xJ-1]=' ';
  }else{

  }
}while(!isCorrect);
    }else if(xMatriz==2){
   	char matriz2[5][5]={{5,6,9,2,1},{7,2,3,2,8},{9,8,5,2,9},{1,6,9,1,1},{8,7,2,8,5}};//creando matriz 2
   
   	
   	matriz2[0][0]=1+rand()%9;
   	matriz2[0][2]=1+rand()%9;
   	matriz2[1][3]=1+rand()%9;
   	matriz2[1][4]=1+rand()%9;
   	matriz2[2][1]=1+rand()%9;
   	matriz2[3][1]=1+rand()%9;
   	matriz2[4][1]=1+rand()%9;
   	matriz2[4][2]=1+rand()%9;
   	matriz2[4][3]=1+rand()%9;
   	matriz2[4][4]=1+rand()%9;
   		  for(int a =0;a<5;a++){
    for(int b=0;b<5;b++){
        matriz2[a][b] += 48;
    }
    cout<<endl;
  }
   do{
   		system("cls");
   	cout<<"\n\t\t\t\t\ MATRIZ 2"<<endl;
   	cout<<"\n\n\t\t\t25"<<"   "<<"8"<<"   "<<"17"<<"    "<<"5"<<"   "<<"11\n\t\t\t\t "<<endl;
	cout<<"\t\t_____________________________________\t\t"<<endl;
  cout<<"\n\t\t 9[\t"<<matriz2[0][0]; cout<<"    "<<matriz2[0][1];cout<<"    "<<matriz2[0][2];cout<<"    "<<matriz2[0][3];cout<<"    "<<matriz2[0][4]<<"\t  ]9";
   cout<<"\n\n\t\t12[\t"<<matriz2[1][0]; cout<<"    "<<matriz2[1][1];cout<<"    "<<matriz2[1][2];cout<<"    "<<matriz2[1][3];cout<<"    "<<matriz2[1][4]<<"\t  ]12";
   cout<<"\n\n\t\t25[\t"<<matriz2[2][0]; cout<<"    "<<matriz2[2][1];cout<<"    "<<matriz2[2][2];cout<<"    "<<matriz2[2][3];cout<<"    "<<matriz2[2][4]<<"\t  ]25";
   cout<<"\n\n\t\t12[\t"<<matriz2[3][0]; cout<<"    "<<matriz2[3][1];cout<<"    "<<matriz2[3][2];cout<<"    "<<matriz2[3][3];cout<<"    "<<matriz2[3][4]<<"\t  ]12";
   cout<<"\n\n\t\t 8[\t"<<matriz2[4][0]; cout<<"    "<<matriz2[4][1];cout<<"    "<<matriz2[4][2];cout<<"    "<<matriz2[4][3];cout<<"    "<<matriz2[4][4]<<"\t  ]8";
   cout<<"\n\n\t\t___________________________________\t\t"<<endl;
   cout<<"\n\n\t\t\t25"<<"   "<<"8"<<"    "<<"17"<<"   "<<"5"<<"   "<<"11\n\t\t\t\t "<<endl;
   	//	system("cls");
   	cout<<"\t\===================================================="<<endl;
   	    cout << "\t\====================================================" << endl;
  cout << "\t Realizar una operacion:\n\n";
  cout << "\t [A] Agregar | [Q] Quitar [S] Salir \n\n";
  cout << "\t Uso: [ A|Q xI xJ ?VAL ] \n\t\t-> Agregar 9 en la pos 1,1 :  [ A 1 1 9 ]\n\t\t-> Quitar en la pos 1,1    :  [ Q 1 1   ]\n";
  cout << "\t -> ";
  cin>>selectedOption;
  if(selectedOption=='A'){
    cin>>xI>>xJ>>val;
    matriz2[xI-1][xJ-1]=val+48;
  }else if(selectedOption=='Q'){
    cin>>xI>>xJ;
    matriz2[xI-1][xJ-1]=' ';
  }else{

  }
}while(!isCorrect);
   	}else if(xMatriz==3){
   	char matriz3[5][5]={{5,7,3,5,2},{4,1,1,9,2},{2,9,3,8,8},{6,3,3,8,9},{3,5,2,2,5}};//creando matriz 3
   
   	matriz3[0][0]=1+rand()%9;
   	matriz3[0][1]=1+rand()%9;
   	matriz3[0][3]=1+rand()%9;
   	matriz3[0][4]=1+rand()%9;
   	matriz3[1][1]=1+rand()%9;
   	matriz3[1][2]=1+rand()%9;
   	matriz3[1][3]=1+rand()%9;
   	matriz3[2][0]=1+rand()%9;
   	matriz3[3][4]=1+rand()%9;
   	matriz3[4][4]=1+rand()%9;
   	for(int c =0;c<5;c++){
    for(int d =0;d<5;d++){
        matriz3[c][d] += 48;
    }
    cout<<endl;
  }
   do{
   		system("cls");
   	cout<<"\n\t\t\t\t\ MATRIZ 3"<<endl;
   	 	cout<<"\n\n\t\t\t13"<<"   "<<"17"<<"   "<<"11"<<"   "<<"18"<<"  "<<"10\n\t\t\t\t "<<endl;
	cout<<"\t\t_____________________________________\t\t"<<endl;
  cout<<"\n\t\t  3[\t"<<matriz3[0][0]; cout<<"    "<<matriz3[0][1];cout<<"    "<<matriz3[0][2];cout<<"    "<<matriz3[0][3];cout<<"    "<<matriz3[0][4]<<"\t  ]3";
   cout<<"\n\n\t\t  6[\t"<<matriz3[1][0]; cout<<"    "<<matriz3[1][1];cout<<"    "<<matriz3[1][2];cout<<"    "<<matriz3[1][3];cout<<"    "<<matriz3[1][4]<<"\t  ]6";
   cout<<"\n\n\t\t 28[\t"<<matriz3[2][0]; cout<<"    "<<matriz3[2][1];cout<<"    "<<matriz3[2][2];cout<<"    "<<matriz3[2][3];cout<<"    "<<matriz3[2][4]<<"\t  ]28";
   cout<<"\n\n\t\t 20[\t"<<matriz3[3][0]; cout<<"    "<<matriz3[3][1];cout<<"    "<<matriz3[3][2];cout<<"    "<<matriz3[3][3];cout<<"    "<<matriz3[3][4]<<"\t  ]20";
   cout<<"\n\n\t\t 12[\t"<<matriz3[4][0]; cout<<"    "<<matriz3[4][1];cout<<"    "<<matriz3[4][2];cout<<"    "<<matriz3[4][3];cout<<"    "<<matriz3[4][4]<<"\t  ]12";
   cout<<"\n\n\t\t___________________________________\t\t"<<endl;
   cout<<"\n\n\t\t\t13"<<"   "<<"17"<<"   "<<"11"<<"  "<<"18"<<"   "<<"10\n\t\t\t\t "<<endl;
   //	system("cls");
    cout<<"\t\===================================================="<<endl;
      cout << "\t Realizar una operacion:\n\n";
  cout << "\t [A] Agregar | [Q] Quitar [S] Salir \n\n";
  cout << "\t Uso: [ A|Q xI xJ ?VAL ] \n\t\t-> Agregar 9 en la pos 1,1 :  [ A 1 1 9 ]\n\t\t-> Quitar en la pos 1,1    :  [ Q 1 1   ]\n";
  cout << "\t -> ";
  cin>>selectedOption;
  if(selectedOption=='A'){
    cin>>xI>>xJ>>val;
    matriz3[xI-1][xJ-1]=val+48;
  }else if(selectedOption=='Q'){
    cin>>xI>>xJ;
    matriz3[xI-1][xJ-1]=' ';
  }else{

  }
}while(!isCorrect);
    }else if(xMatriz==4){
   	char matriz4[5][5]={{1,4,3,7,9},{9,6,8,5,3},{7,2,2,6,3},{1,7,5,4,4},{4,5,5,7,1}};//creando matriz 4


   	matriz4[0][1]=1+rand()%9;
   	matriz4[0][2]=1+rand()%9;
   	matriz4[0][3]=1+rand()%9;
   	matriz4[1][2]=1+rand()%9;
   	matriz4[1][2]=1+rand()%9;
   	matriz4[1][4]=1+rand()%9;
   	matriz4[2][0]=1+rand()%9;
   	matriz4[3][0]=1+rand()%9;
   	matriz4[3][2]=1+rand()%9;
   	matriz4[4][2]=1+rand()%9;
   	   	for(int e =0;e<5;e++){
    for(int f =0;f<5;f++){
        matriz4[e][f] += 48;
    }
    cout<<endl;
  }
   do{
   		system("cls");
   	
   		cout<<"\n\t\t\t\t\ MATRIZ 4"<<endl;
   	 	cout<<"\n\n\t\t\t14"<<"   "<<"20"<<"   "<<"2"<<"    "<<"17"<<"   "<<"17\n\t\t\t\t "<<endl;
	cout<<"\t\t_____________________________________\t\t"<<endl;
  cout<<"\n\t\t 10[\t"<<matriz4[0][0]; cout<<"    "<<matriz4[0][1];cout<<"    "<<matriz4[0][2];cout<<"    "<<matriz4[0][3];cout<<"    "<<matriz4[0][4]<<"\t  ]10";
   cout<<"\n\n\t\t 15[\t"<<matriz4[1][0]; cout<<"    "<<matriz4[1][1];cout<<"    "<<matriz4[1][2];cout<<"    "<<matriz4[1][3];cout<<"    "<<matriz4[1][4]<<"\t  ]15";
   cout<<"\n\n\t\t 13[\t"<<matriz4[2][0]; cout<<"    "<<matriz4[2][1];cout<<"    "<<matriz4[2][2];cout<<"    "<<matriz4[2][3];cout<<"    "<<matriz4[2][4]<<"\t  ]13";
   cout<<"\n\n\t\t 15[\t"<<matriz4[3][0]; cout<<"    "<<matriz4[3][1];cout<<"    "<<matriz4[3][2];cout<<"    "<<matriz4[3][3];cout<<"    "<<matriz4[3][4]<<"\t  ]15";
   cout<<"\n\n\t\t 17[\t"<<matriz4[4][0]; cout<<"    "<<matriz4[4][1];cout<<"    "<<matriz4[4][2];cout<<"    "<<matriz4[4][3];cout<<"    "<<matriz4[4][4]<<"\t  ]17";
   cout<<"\n\n\t\t___________________________________\t\t"<<endl;
   cout<<"\n\n\t\t\t14"<<"   "<<"20"<<"   "<<"2"<<"   "<<"17"<<"    "<<"17\n\t\t\t\t "<<endl;
   //	system("cls");
    cout<<"\t\===================================================="<<endl;
          cout << "\t Realizar una operacion:\n\n";
  cout << "\t [A] Agregar | [Q] Quitar [S] Salir \n\n";
  cout << "\t Uso: [ A|Q xI xJ ?VAL ] \n\t\t-> Agregar 9 en la pos 1,1 :  [ A 1 1 9 ]\n\t\t-> Quitar en la pos 1,1    :  [ Q 1 1   ]\n";
  cout << "\t -> ";
  cin>>selectedOption;
  if(selectedOption=='A'){
    cin>>xI>>xJ>>val;
    matriz4[xI-1][xJ-1]=val+48;
  }else if(selectedOption=='Q'){
    cin>>xI>>xJ;
    matriz4[xI-1][xJ-1]=' ';
  }else{

  }
}while(!isCorrect);
    }else if(xMatriz==5){
   	char matriz5[5][5]={{8,1,1,9,6},{1,1,5,5,9},{8,7,2,4,1},{6,4,9,8,2},{1,1,5,4,3}};//creando matriz 5
   
   	
   	matriz5[0][0]=1+rand()%9;
   	matriz5[0][1]=1+rand()%9;
   	matriz5[1][0]=1+rand()%9;
   	matriz5[1][3]=1+rand()%9;
   	matriz5[2][1]=1+rand()%9;
   	matriz5[2][2]=1+rand()%9;
   	matriz5[3][2]=1+rand()%9;
   	matriz5[3][3]=1+rand()%9;
   	matriz5[4][3]=1+rand()%9;
   	matriz5[4][4]=1+rand()%9;
   	   	   	for(int g =0;g<5;g++){
    for(int h =0;h<5;h++){
        matriz5[g][h] += 48;
    }
    cout<<endl;
  }
   do{
   		system("cls");
   	
   		cout<<"\n\t\t\t\t\ MATRIZ 5"<<endl;
   		cout<<"\n\n\t\t\t15"<<"   "<<"6"<<"   "<<"6"<<"    "<<"18"<<"   "<<"18\n\t\t\t\t "<<endl;
	cout<<"\t\t_____________________________________\t\t"<<endl;
  cout<<"\n\t\t 16[\t"<<matriz5[0][0]; cout<<"    "<<matriz5[0][1];cout<<"    "<<matriz5[0][2];cout<<"    "<<matriz5[0][3];cout<<"    "<<matriz5[0][4]<<"\t  ]16";
   cout<<"\n\n\t\t 15[\t"<<matriz5[1][0]; cout<<"    "<<matriz5[1][1];cout<<"    "<<matriz5[1][2];cout<<"    "<<matriz5[1][3];cout<<"    "<<matriz5[1][4]<<"\t  ]15";
   cout<<"\n\n\t\t 13[\t"<<matriz5[2][0]; cout<<"    "<<matriz5[2][1];cout<<"    "<<matriz5[2][2];cout<<"    "<<matriz5[2][3];cout<<"    "<<matriz5[2][4]<<"\t  ]13";
   cout<<"\n\n\t\t 12[\t"<<matriz5[3][0]; cout<<"    "<<matriz5[3][1];cout<<"    "<<matriz5[3][2];cout<<"    "<<matriz5[3][3];cout<<"    "<<matriz5[3][4]<<"\t  ]12";
   cout<<"\n\n\t\t  7[\t"<<matriz5[4][0]; cout<<"    "<<matriz5[4][1];cout<<"    "<<matriz5[4][2];cout<<"    "<<matriz5[4][3];cout<<"    "<<matriz5[4][4]<<"\t  ]7";
   cout<<"\n\n\t\t___________________________________\t\t"<<endl;
   cout<<"\n\n\t\t\t15"<<"   "<<"6"<<"   "<<"6"<<"   "<<"18"<<"    "<<"18\n\t\t\t\t "<<endl;
  // 	system("cls");
    cout<<"\t\===================================================="<<endl;
             cout << "\t Realizar una operacion:\n\n";
  cout << "\t [A] Agregar | [Q] Quitar [S] Salir \n\n";
  cout << "\t Uso: [ A|Q xI xJ ?VAL ] \n\t\t-> Agregar 9 en la pos 1,1 :  [ A 1 1 9 ]\n\t\t-> Quitar en la pos 1,1    :  [ Q 1 1   ]\n";
  cout << "\t -> ";
  cin>>selectedOption;
  if(selectedOption=='A'){
    cin>>xI>>xJ>>val;
    matriz5[xI-1][xJ-1]=val+48;
  }else if(selectedOption=='Q'){
    cin>>xI>>xJ;
    matriz5[xI-1][xJ-1]=' ';
  }else{

  }
}while(!isCorrect);
    }else if(xMatriz==6){
   	char matriz6[5][5]={{5,4,9,2,6},{6,6,8,1,5},{5,6,8,5,6},{8,2,3,8,8},{7,1,9,1,4}};//creando matriz 6
   
   	matriz6[0][3]=1+rand()%9;
   	matriz6[1][1]=1+rand()%9;
   	matriz6[2][1]=1+rand()%9;
   	matriz6[3][1]=1+rand()%9;
   	matriz6[3][3]=1+rand()%9;
   	matriz6[4][0]=1+rand()%9;
   	matriz6[4][1]=1+rand()%9;
   	matriz6[4][2]=1+rand()%9;
   	matriz6[4][3]=1+rand()%9;
   	matriz6[4][4]=1+rand()%9;
   	for(int k =0;k<5;k++){
    for(int l =0;l<5;l++){
        matriz6[k][l] += 48;
    }
    cout<<endl;
  }
   do{
   		system("cls");
   		cout<<"\n\t\t\t\t\ MATRIZ 6"<<endl;
   		cout<<"\n\n\t\t\t24"<<"   "<<"4"<<"   "<<"28"<<"    "<<"6"<<"   "<<"25\n\t\t\t\t "<<endl;
	cout<<"\t\t_____________________________________\t\t"<<endl;
  cout<<"\n\t\t 19[\t"<<matriz6[0][0]; cout<<"    "<<matriz6[0][1];cout<<"    "<<matriz6[0][2];cout<<"    "<<matriz6[0][3];cout<<"    "<<matriz6[0][4]<<"\t  ]24";
   cout<<"\n\n\t\t 20[\t"<<matriz6[1][0]; cout<<"    "<<matriz6[1][1];cout<<"    "<<matriz6[1][2];cout<<"    "<<matriz6[1][3];cout<<"    "<<matriz6[1][4]<<"\t  ]20";
   cout<<"\n\n\t\t 24[\t"<<matriz6[2][0]; cout<<"    "<<matriz6[2][1];cout<<"    "<<matriz6[2][2];cout<<"    "<<matriz6[2][3];cout<<"    "<<matriz6[2][4]<<"\t  ]24";
   cout<<"\n\n\t\t 19[\t"<<matriz6[3][0]; cout<<"    "<<matriz6[3][1];cout<<"    "<<matriz6[3][2];cout<<"    "<<matriz6[3][3];cout<<"    "<<matriz6[3][4]<<"\t  ]19";
   cout<<"\n\n\t\t  0[\t"<<matriz6[4][0]; cout<<"    "<<matriz6[4][1];cout<<"    "<<matriz6[4][2];cout<<"    "<<matriz6[4][3];cout<<"    "<<matriz6[4][4]<<"\t  ]0";
   cout<<"\n\n\t\t___________________________________\t\t"<<endl;
   cout<<"\n\n\t\t\t24"<<"   "<<"4"<<"   "<<"28"<<"    "<<"6"<<"    "<<"25\n\t\t\t\t "<<endl;
   	//system("cls");
    cout<<"\t\===================================================="<<endl;
                cout << "\t Realizar una operacion:\n\n";
  cout << "\t [A] Agregar | [Q] Quitar [S] Salir \n\n";
  cout << "\t Uso: [ A|Q xI xJ ?VAL ] \n\t\t-> Agregar 9 en la pos 1,1 :  [ A 1 1 9 ]\n\t\t-> Quitar en la pos 1,1    :  [ Q 1 1   ]\n";
  cout << "\t -> ";
  cin>>selectedOption;
  if(selectedOption=='A'){
    cin>>xI>>xJ>>val;
    matriz6[xI-1][xJ-1]=val+48;
  }else if(selectedOption=='Q'){
    cin>>xI>>xJ;
    matriz6[xI-1][xJ-1]=' ';
  }else{

  }
}while(!isCorrect);
    }else if(xMatriz==7){
   	char matriz7[5][5]={{3,6,2,5,7},{3,1,9,7,5},{4,9,6,6,5},{4,4,7,6,8},{6,2,4,6,3}};//creando matriz 7
   	
   	matriz7[0][0]=1+rand()%9;
   	matriz7[0][2]=1+rand()%9;
   	matriz7[1][1]=1+rand()%9;
   	matriz7[2][2]=1+rand()%9;
   	matriz7[2][3]=1+rand()%9;
   	matriz7[2][4]=1+rand()%9;
   	matriz7[3][1]=1+rand()%9;
   	matriz7[3][4]=1+rand()%9;
   	matriz7[4][0]=1+rand()%9;
   	matriz7[4][1]=1+rand()%9;
   	for(int m =0;m<5;m++){
    for(int n=0;n<5;n++){
        matriz7[m][n] += 48;
    }
    cout<<endl;
  }
   do{
   		system("cls");
   	cout<<"\n\t\t\t\t\ MATRIZ 7"<<endl;
   	//	system("cls");
   	cout<<"\n\n\t\t\t11"<<"   "<<"15"<<"   "<<"20"<<"   "<<"24"<<"  "<<"15\n\t\t\t\t "<<endl;
	cout<<"\t\t_____________________________________\t\t"<<endl;
  cout<<"\n\t\t 18[\t"<<matriz7[0][0]; cout<<"    "<<matriz7[0][1];cout<<"    "<<matriz7[0][2];cout<<"    "<<matriz7[0][3];cout<<"    "<<matriz7[0][4]<<"\t  ]18";
   cout<<"\n\n\t\t 24[\t"<<matriz7[1][0]; cout<<"    "<<matriz7[1][1];cout<<"    "<<matriz7[1][2];cout<<"    "<<matriz7[1][3];cout<<"    "<<matriz7[1][4]<<"\t  ]24";
   cout<<"\n\n\t\t 13[\t"<<matriz7[2][0]; cout<<"    "<<matriz7[2][1];cout<<"    "<<matriz7[2][2];cout<<"    "<<matriz7[2][3];cout<<"    "<<matriz7[2][4]<<"\t  ]13";
   cout<<"\n\n\t\t 17[\t"<<matriz7[3][0]; cout<<"    "<<matriz7[3][1];cout<<"    "<<matriz7[3][2];cout<<"    "<<matriz7[3][3];cout<<"    "<<matriz7[3][4]<<"\t  ]17";
   cout<<"\n\n\t\t 13[\t"<<matriz7[4][0]; cout<<"    "<<matriz7[4][1];cout<<"    "<<matriz7[4][2];cout<<"    "<<matriz7[4][3];cout<<"    "<<matriz7[4][4]<<"\t  ]13";
   cout<<"\n\n\t\t___________________________________\t\t"<<endl;
   cout<<"\n\n\t\t\t11"<<"   "<<"15"<<"   "<<"20"<<"   "<<"24"<<"   "<<"15\n\t\t\t\t "<<endl;
   //	system("cls");
      cout<<"\t\===================================================="<<endl;
                   cout << "\t Realizar una operacion:\n\n";
  cout << "\t [A] Agregar | [Q] Quitar [S] Salir \n\n";
  cout << "\t Uso: [ A|Q xI xJ ?VAL ] \n\t\t-> Agregar 9 en la pos 1,1 :  [ A 1 1 9 ]\n\t\t-> Quitar en la pos 1,1    :  [ Q 1 1   ]\n";
  cout << "\t -> ";
  cin>>selectedOption;
  if(selectedOption=='A'){
    cin>>xI>>xJ>>val;
    matriz7[xI-1][xJ-1]=val+48;
  }else if(selectedOption=='Q'){
    cin>>xI>>xJ;
    matriz7[xI-1][xJ-1]=' ';
  }else{

  }
}while(!isCorrect);
      }else if(xMatriz==8){
   	char matriz8[5][5]={{8,5,5,6,1},{8,8,9,1,8},{9,7,4,9,7},{9,6,4,2,5},{2,7,1,1,8}};//creando matriz 8
   
   	matriz8[0][2]=1+rand()%9;
   	matriz8[1][1]=1+rand()%9;
   	matriz8[1][2]=1+rand()%9;
   	matriz8[1][4]=1+rand()%9;
   	matriz8[2][0]=1+rand()%9;
   	matriz8[2][2]=1+rand()%9;
   	matriz8[2][3]=1+rand()%9;
   	matriz8[3][1]=1+rand()%9;
   	matriz8[3][4]=1+rand()%9;
   	matriz8[4][2]=1+rand()%9;
   	  	for(int o =0;o<5;o++){
    for(int p=0;p<5;p++){
        matriz8[o][p] += 48;
    }
    cout<<endl;
  }
   do{
   		system("cls");
   		cout<<"\n\t\t\t\t\ MATRIZ 8"<<endl;
   	cout<<"\n\n\t\t\t27"<<"   "<<"19"<<"   "<<"4"<<"   "<<"10"<<"  "<<"16\n\t\t\t\t "<<endl;
	cout<<"\t\t_____________________________________\t\t"<<endl;
  cout<<"\n\t\t 20[\t"<<matriz8[0][0]; cout<<"    "<<matriz8[0][1];cout<<"    "<<matriz8[0][2];cout<<"    "<<matriz8[0][3];cout<<"    "<<matriz8[0][4]<<"\t  ]20";
   cout<<"\n\n\t\t  9[\t"<<matriz8[1][0]; cout<<"    "<<matriz8[1][1];cout<<"    "<<matriz8[1][2];cout<<"    "<<matriz8[1][3];cout<<"    "<<matriz8[1][4]<<"\t  ]9";
   cout<<"\n\n\t\t 14[\t"<<matriz8[2][0]; cout<<"    "<<matriz8[2][1];cout<<"    "<<matriz8[2][2];cout<<"    "<<matriz8[2][3];cout<<"    "<<matriz8[2][4]<<"\t  ]14";
   cout<<"\n\n\t\t 15[\t"<<matriz8[3][0]; cout<<"    "<<matriz8[3][1];cout<<"    "<<matriz8[3][2];cout<<"    "<<matriz8[3][3];cout<<"    "<<matriz8[3][4]<<"\t  ]15";
   cout<<"\n\n\t\t 18[\t"<<matriz8[4][0]; cout<<"    "<<matriz8[4][1];cout<<"    "<<matriz8[4][2];cout<<"    "<<matriz8[4][3];cout<<"    "<<matriz8[4][4]<<"\t  ]18";
   cout<<"\n\n\t\t___________________________________\t\t"<<endl;
   cout<<"\n\n\t\t\t27"<<"   "<<"19"<<"   "<<"4"<<"   "<<"10"<<"   "<<"16\n\t\t\t\t "<<endl;
  // 	system("cls");
    cout<<"\t\===================================================="<<endl;
     cout << "\t Realizar una operacion:\n\n";
  cout << "\t [A] Agregar | [Q] Quitar [S] Salir \n\n";
  cout << "\t Uso: [ A|Q xI xJ ?VAL ] \n\t\t-> Agregar 9 en la pos 1,1 :  [ A 1 1 9 ]\n\t\t-> Quitar en la pos 1,1    :  [ Q 1 1   ]\n";
  cout << "\t -> ";
  cin>>selectedOption;
  if(selectedOption=='A'){
    cin>>xI>>xJ>>val;
    matriz8[xI-1][xJ-1]=val+48;
  }else if(selectedOption=='Q'){
    cin>>xI>>xJ;
    matriz8[xI-1][xJ-1]=' ';
  }else{

  }
}while(!isCorrect);
    }else if(xMatriz==9){
   	char matriz9[5][5]={{1,9,9,6,5},{5,5,9,3,7},{8,6,6,7,8},{7,8,4,7,7},{4,4,7,7,9}};//creando matriz 9
   	cout<<"\n\t\t\t\t\ MATRIZ 9"<<endl;
   	matriz9[0][2]=1+rand()%9;
   	matriz9[0][4]=1+rand()%9;
   	matriz9[1][0]=1+rand()%9;
   	matriz9[1][3]=1+rand()%9;
   	matriz9[2][0]=1+rand()%9;
   	matriz9[2][4]=1+rand()%9;
   	matriz9[3][1]=1+rand()%9;
   	matriz9[4][0]=1+rand()%9;
   	matriz9[4][1]=1+rand()%9;
   	matriz9[4][4]=1+rand()%9;
   	for(int r =0;r<5;r++){
    for(int s =0;s<5;s++){
        matriz9[r][s] += 48;
    }
    cout<<endl;
  }
   do{
   		system("cls");
   			cout<<"\n\t\t\t\t\ MATRIZ 9"<<endl;
   	cout<<"\n\n\t\t\t 8"<<"   "<<"20"<<"   "<<"26"<<"   "<<"27"<<"  "<<"14\n\t\t\t\t "<<endl;
	cout<<"\t\t_____________________________________\t\t"<<endl;
  cout<<"\n\t\t 16[\t"<<matriz9[0][0]; cout<<"    "<<matriz9[0][1];cout<<"    "<<matriz9[0][2];cout<<"    "<<matriz9[0][3];cout<<"    "<<matriz9[0][4]<<"\t  ]16";
   cout<<"\n\n\t\t 21[\t"<<matriz9[1][0]; cout<<"    "<<matriz9[1][1];cout<<"    "<<matriz9[1][2];cout<<"    "<<matriz9[1][3];cout<<"    "<<matriz9[1][4]<<"\t  ]21";
   cout<<"\n\n\t\t 19[\t"<<matriz9[2][0]; cout<<"    "<<matriz9[2][1];cout<<"    "<<matriz9[2][2];cout<<"    "<<matriz9[2][3];cout<<"    "<<matriz9[2][4]<<"\t  ]19";
   cout<<"\n\n\t\t 25[\t"<<matriz9[3][0]; cout<<"    "<<matriz9[3][1];cout<<"    "<<matriz9[3][2];cout<<"    "<<matriz9[3][3];cout<<"    "<<matriz9[3][4]<<"\t  ]25";
   cout<<"\n\n\t\t 14[\t"<<matriz9[4][0]; cout<<"    "<<matriz9[4][1];cout<<"    "<<matriz9[4][2];cout<<"    "<<matriz9[4][3];cout<<"    "<<matriz9[4][4]<<"\t  ]14";
   cout<<"\n\n\t\t___________________________________\t\t"<<endl;
   cout<<"\n\n\t\t\t 8"<<"   "<<"20"<<"   "<<"26"<<"   "<<"27"<<"   "<<"14\n\t\t\t\t "<<endl;
  // 	system("cls");
    cout<<"\t\===================================================="<<endl;
         cout << "\t Realizar una operacion:\n\n";
  cout << "\t [A] Agregar | [Q] Quitar [S] Salir \n\n";
  cout << "\t Uso: [ A|Q xI xJ ?VAL ] \n\t\t-> Agregar 9 en la pos 1,1 :  [ A 1 1 9 ]\n\t\t-> Quitar en la pos 1,1    :  [ Q 1 1   ]\n";
  cout << "\t -> ";
  cin>>selectedOption;
  if(selectedOption=='A'){
    cin>>xI>>xJ>>val;
    matriz9[xI-1][xJ-1]=val+48;
  }else if(selectedOption=='Q'){
    cin>>xI>>xJ;
    matriz9[xI-1][xJ-1]=' ';
  }else{

  }
}while(!isCorrect);
    }else if(xMatriz==10){
   	char matriz10[5][5]={{5,5,1,6,6},{9,2,1,9,6},{8,5,6,4,4},{2,1,4,2,8},{4,1,5,2,7}};//creando matriz 10

   	matriz10[0][0]=1+rand()%9;
   	matriz10[0][2]=1+rand()%9;
   	matriz10[0][4]=1+rand()%9;
   	matriz10[1][2]=1+rand()%9;
   	matriz10[1][3]=1+rand()%9;
   	matriz10[2][3]=1+rand()%9;
   	matriz10[3][0]=1+rand()%9;
   	matriz10[3][1]=1+rand()%9;
   	matriz10[3][4]=1+rand()%9;
   	matriz10[4][1]=1+rand()%9;
   	   	for(int t =0;t<5;t++){
    for(int u =0;u<5;u++){
        matriz10[t][u] += 48;
    }
    cout<<endl;
  }
   do{
   		system("cls");
   	   	cout<<"\n\t\t\t\t\ MATRIZ 10"<<endl;
   	cout<<"\n\n\t\t\t 21"<<"   "<<"12"<<"   "<<"15"<<"  "<<"10"<<"  "<<"17\n\t\t\t\t "<<endl;
	cout<<"\t\t_____________________________________\t\t"<<endl;
  cout<<"\n\t\t 11[\t"<<matriz10[0][0]; cout<<"    "<<matriz10[0][1];cout<<"    "<<matriz10[0][2];cout<<"    "<<matriz10[0][3];cout<<"    "<<matriz10[0][4]<<"\t  ]11";
   cout<<"\n\n\t\t 17[\t"<<matriz10[1][0]; cout<<"    "<<matriz10[1][1];cout<<"    "<<matriz10[1][2];cout<<"    "<<matriz10[1][3];cout<<"    "<<matriz10[1][4]<<"\t  ]17";
   cout<<"\n\n\t\t 23[\t"<<matriz10[2][0]; cout<<"    "<<matriz10[2][1];cout<<"    "<<matriz10[2][2];cout<<"    "<<matriz10[2][3];cout<<"    "<<matriz10[2][4]<<"\t  ]23";
   cout<<"\n\n\t\t  6[\t"<<matriz10[3][0]; cout<<"    "<<matriz10[3][1];cout<<"    "<<matriz10[3][2];cout<<"    "<<matriz10[3][3];cout<<"    "<<matriz10[3][4]<<"\t  ]6";
   cout<<"\n\n\t\t 18[\t"<<matriz10[4][0]; cout<<"    "<<matriz10[4][1];cout<<"    "<<matriz10[4][2];cout<<"    "<<matriz10[4][3];cout<<"    "<<matriz10[4][4]<<"\t  ]18";
   cout<<"\n\n\t\t___________________________________\t\t"<<endl;
   cout<<"\n\n\t\t\t21"<<"   "<<"12"<<"   "<<"15"<<"   "<<"10"<<"   "<<"17\n\t\t\t\t "<<endl;
    cout << "\t Realizar una operacion:\n\n";
  cout << "\t [A] Agregar | [Q] Quitar [S] Salir \n\n";
  cout << "\t Uso: [ A|Q xI xJ ?VAL ] \n\t\t-> Agregar 9 en la pos 1,1 :  [ A 1 1 9 ]\n\t\t-> Quitar en la pos 1,1    :  [ Q 1 1   ]\n";
  cout << "\t -> ";
  cin>>selectedOption;
  if(selectedOption=='A'){
    cin>>xI>>xJ>>val;
    matriz10[xI-1][xJ-1]=val+48;
  }else if(selectedOption=='Q'){
    cin>>xI>>xJ;
    matriz10[xI-1][xJ-1]=' ';
  }else{

  }
}while(!isCorrect);
}

		system("cls");
	}
	
	
	
	
	
	
	

	
	return 0;
}



