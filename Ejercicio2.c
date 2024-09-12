#include <stdio.h>

int main(){
    int x;
    puts("Ingresa tus anios de antiguedad del trabajo"); //imprime los mensajes dando salto de linea sin colocar un slash
    scanf("%d", &x); //sirve para recivir datos del teclado

    if(x >=5){ // primera sentencia
        
        float num; // variable que guarda el numero que ingresen desde el teclado
        puts("Ingresa tu sueldo mensual");
        scanf("%f", &num); //pide el número 
        if(num >1000){ //segunda sentencia if
            float p; // declaracion de la variable que realiza las operaciones
            p = (num * 100)/10; // Operaciones realizadas
            printf("Sueldo %f", p); // impreción del resultado
        }
    } 

      puts("Error no cumples los creditos (ignore este comentario si relizo los dos procesos anteriores)"); // en caso contrario
} 
