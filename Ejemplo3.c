#include <stdio.h>

int main(){
    int x;
    float num;
    puts("Ingresa tus años de antiguedad del trabajo"); //imprime los mensajes dando salto de linea sin colocar un slash
    scanf("%d", &x); //sirve para recivir datos del teclado
    puts("Ingresa tu sueldo mensual");
    scanf("%f", &num); //recibe el número 
    float p;
    p = num * 0.1; // Operaciones realizadas
    printf("sueldo: %f", p );
    if(x >=5){ // primera sentencia if
        if(num >1000){ //segunda sentencia if
           
            printf("Felicidades tu credito ah sido aprobado"); // impreción del resultado
        }
    } 
}
