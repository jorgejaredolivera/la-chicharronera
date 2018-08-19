/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: olivera
 *
 * Created on 19 de agosto de 2018, 03:13 PM
 */

#include <stdio.h>
#include <math.h>

/*
 * 
 */
int main() {
    printf("hola, soy la chicharronera y he venido a salvarte\n");

    float a,b,c;
    printf("dame los valores para a\npara b\ny para c\n");
    scanf("%f%f%f",&a,&b,&c);
    float raiz = sqrt(pow(b,2) - 4*a*c);
    float x1 = (-1*b+raiz)/(2*a);
    float x2 = (-1*b-raiz)/(2*a);
    printf("el valor para x1 es: %f\n",x1);
    printf("y el valor para x2 es: %f",x2);
    
    
    
  
    return 0;
}

