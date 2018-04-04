#include<iostream>
 
using namespace std;

//Se crea la funcion que hace la secuencia
int N;
int fibonacci(int N){
if((N==1)||(N==0)){
//Retorna la secuecia de fibonacci
return(N);
}
else{
return(fibonacci(N-1)+fibonacci(N-2));
}
}
//Funcion que toma el tiempo que demora
int N2;
float get_time(int N2){
clock_t t;
t = clock();
fibonacci(N2);
t = clock() - t;
float time = ((float)t)/CLOCKS_PER_SEC;
//Retorna el tiempo
return time;
}
//Se crea la funcion main que arrojara el resultado con un N2 inicializado
int main(){
//Se le asigna un valor a N y se inicia un contador.
int N2 = 30;
int contador = 0;
//Se imprime el valor de N y el tiempo que tomo.
while(contador<=N2){
cout<<"El numero de la iteracion es i= "<<contador<<" y el tiempo que tomo es:"<<get_time(N2)<<"seg"<<"\n";
contador++;
}
return 0;
}

