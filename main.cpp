#include <iostream>
#include <cmath>

using namespace std;

/*

   Buen@s [HORA DEL DIA], profesor.

   Como fue acordado, en este archivo estan incluidos todos los problemas
   del laboratorio 1. Para revisar cada uno simplemente remueva los inicios
   y finales de los comentarios para cada int main.

*/

//Funciones utilizadas en los ejercicios (definidas al final del archivo)

bool esPrimo(unsigned int a);
int factorial(unsigned short int a);
bool esPali(unsigned int a);
int digitos(unsigned int a);
int flipNum(unsigned int a);

/*

//Problema #2, division en monedas y billetes

int main(){

    //Inicializacion de variables
    unsigned short int k50 = 0; //Billetes de 50000
    unsigned short int k20 = 0; //Billetes de 20000
    unsigned short int k10 = 0; //Billetes de 10000
    unsigned short int k5 = 0; //Billetes de 5000
    unsigned short int k2 = 0; //Billetes de 2000
    unsigned short int k1 = 0; //Monedas de 1000
    unsigned short int qcientos = 0; //Monedas de 500
    unsigned short int dcientos = 0; //Monedas de 200
    unsigned short int cien = 0; //Monedas de 100
    unsigned short int cinq10 = 0; //Monedas de 50
    unsigned long int moni = 0; //Dinero inicial, sera el faltante al final

    //Input del usuario
    cout << "Ingrese el valor a generar vuelta: ";
    cin >> moni;

    //Resta ordenana de las denominaciones de los billetes y monedas

    //Para billetes de 50000
    k50 = moni/50000;
    moni -= k50*50000;

    //Para billetes de 20000
    k20 = moni/20000;
    moni -= k20*20000;

    //Para billetes de 10000
    k10 = moni/10000;
    moni -= k10*10000;

    //Para billetes de 5000
    k5 = moni/5000;
    moni -= k5*5000;

    //Para billetes de 2000
    k2 = moni/2000;
    moni -= k2*2000;

    //Para monedas de 1000
    k1 = moni/1000;
    moni -= k1*1000;

    //Para monedas de 500
    qcientos = moni/500;
    moni -= qcientos*500;

    //Para monedas de 200
    dcientos = moni/200;
    moni -= dcientos*200;

    //Para monedas de 100
    cien = moni/100;
    moni -= cien*100;

    //Para monedas de 50
    cinq10 = moni/50;
    moni -= cinq10*50;


    //Salidas de # de billetes y monedas
    cout << "50000: " << k50 << endl;
    cout << "20000: " << k20 << endl;
    cout << "10000: " << k10 << endl;
    cout << "5000: " << k5 << endl;
    cout << "2000: " << k2 << endl;
    cout << "1000: " << k1 << endl;
    cout << "500: " << qcientos << endl;
    cout << "200: " << dcientos << endl;
    cout << "100: " << cien << endl;
    cout << "50: " << cinq10 << endl;
    cout << "Faltante: " << moni << endl;

    return 0;
}
*/

/*

//Problema #4 Tiempo transcurrido en hora militar

int main(){

     //Inicializacion de variables
     unsigned short int hora0 = 0; //Tiempo inicial
     unsigned short int hora1 = 0; //Tiempo transcurrido
     unsigned short int hora2 = 0; //Hora final
     unsigned short int extrah = 0; //Horas por encima de 24h
     unsigned short int extram = 0; //Minutos por encima de 59


     //Ingreso y validacion de entradas
     cout << "Ingrese hora inicial: "; //Ingreso hora inicial
     cin >> hora0;
     while( hora0/100>24 || hora0%100>59 ){ //Comprobador de hora valida
         cout << hora0 << " es una hora invalida, ingrese hora inicial: ";
         cin >> hora0;
     }

     cout << "Ingrese tiempo transcurrido: "; //Ingreso del tiempo transcurrido
     cin >> hora1;
     while( hora1/100>24 || hora1%100>59 ){ //Comprobador de hora valida
         cout << hora1 << " es un tiempo invalido, ingrese tiempo transcurrido: ";
         cin >> hora1;
     }

     //Calculado de la hora resultante

     if((hora0%100+hora1%100)>59){
         extram = (hora0%100+hora1%100)-60;
         hora2 += 100+extram;
     }else{
        hora2 += hora0%100+hora1%100;
     }

     if(((hora0/100)+(hora1/100))>24){
         extrah = (hora0/100+hora1/100)-24;
         hora2 += extrah*100;
     }else{
         hora2 += (hora0/100+hora1/100)*100;
     }


     //Salida de la hora resultante
    cout << "La hora es " << hora2 << "." << endl;


    return 0;
 }
*/

/*

   //Problema #6 Valor aproximade de euler

int main(){
    //Inicializacion de variables
    unsigned int elementos = 0; //Variable para cantidad de elementos a aproximar
    float resultado = 0; //Variable de resultado aproximado de euler

    //Ingresos del usuario
    cout << "Ingrese elementos usados para la aproximacion: ";
    cin >> elementos;

    //Calculo de euler
    for(unsigned short int a = 0; a < elementos; a++){
        resultado = resultado + (float(1)/float(factorial(a)));
    }


    //Salidas
    cout << "e es aproximadamente: " << resultado << endl;

    return 0;
 }
*/

//

   //Problema #8 Imprimir suma de multiplos unicos

int main(){
    unsigned int a = 0; //Primer numero para generar multiplos
    unsigned int b = 0; //Segundo numero para generar multiplos
    unsigned int c = 0; //Maximo valor de los multiplos


return 0;
 }
//

/*

   //Problema #10 enesimo numero primo

int main(){

    //Inicializacion de variables
    unsigned int n = 981; //Posicion del numero primo
    unsigned int primo = 1; //Numero primo en la posicion n

    while(n > 0){
        primo++;
        if(esPrimo(primo)){
            n -= 1;
        }

    }
    //Salidas
    cout << primo << endl;

return 0;
 }
*/

/*

   //Problema #12 mayor divisor primo

int main(){

    //unsigned short int maxpri = 2; //Factor primo maximo
    unsigned int num = 90509; //Numero para sacarle el factor primo maximo Nota: la respuesta para 1 es vacio, favor no utilizar este numero

    for(unsigned int a = num/2; a > 0; a--){
        if(esPrimo(a)==1 && num%a==0){
            cout << "El mayor factor primo de " << num << " es: " << a << endl;
            break;
        }
    }
return 0;
 }
*/

/*

   //Problema #14 Numero palindromo maximo con dos numeros de tres digitos

int main(){
    unsigned int maxPali = 0; //Numero palindromo maximo encontrado
    unsigned int maxA = 0; //Primer factor del numero palindromo
    unsigned int maxB = 0; //Segundo factor del numero palindromo

    for(int a = 100; a<=999; a++){
        for( int b = 100; b<=999; b++){
            if(esPali(a*b)){
                if(maxPali < (a*b)){
                    maxPali = a*b;
                    maxA = a;
                    maxB = b;
                }
            }
        }
    }

    cout << maxA << "*" << maxB << "=" << maxPali << endl;
return 0;
 }
*/

/*

   //Problema #16

int main(){

return 0;
 }
*/

/*

   //Problema #17

int main(){

return 0;
 }
*/

int factorial(unsigned short int a){ //Returna el factorial de un numero
    unsigned int fact = 1;
    for(unsigned short int b = 1; b <= a; b++ ){
        fact = fact*b;
    }
    return fact;
}

bool esPrimo(unsigned int a){ //Retorna verdadero si el numero es primo y falso si no lo es
    bool buleano = 1;
    for(unsigned int b = 2; b<= a/2; b++){
        if(a%b == 0){
            buleano = 0;
            break;
        }
    }

    return buleano;
}

bool esPali(unsigned int a){ //Returna true si un numero es palindromo y false si no lo es
    if(a == flipNum(a)){
        return true;
    }else{
        return false;
    }

}

int digitos(unsigned int a){
    unsigned short int b = 0;
    while(a>0){
        a = a/10;
        b += 1;
    }
    return b;
}

int flipNum(unsigned int a){
    unsigned int flip = 0;
    unsigned short int digits = digitos(a);

    for(unsigned short int b = digits; b>0 ; b--){
        flip += (a%10)*pow(10, b-1);
        a = a/10;
    }

    return flip;
}

//cout << "Feliz navidad y prospero " << convertir_a_espanol("year") << " nuevo profesor." << endl;
