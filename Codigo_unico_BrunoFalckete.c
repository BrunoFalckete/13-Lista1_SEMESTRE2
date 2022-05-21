//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//16/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//a)1 2 3 4 … 10

#include <stdio.h>
    
    void main(){
       
        int contador , numero = 1 ;

        for (contador = 0; contador < 10; contador++){
           
            printf("%d ", numero);

            numero = numero + 1 ;
        }
        return 0;
    }


    //INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//16/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//b)100 99 98 … 80

#include <stdio.h>
    
    void main(){
       
       int contador , numero = 100 ;

        for (contador = 0; contador < 21; contador++){
           
            printf("%d ", numero);

            numero = numero - 1 ;
        }
        return 0;
    }


    //INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//16/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//c)30 40 50 60 … 180

#include <stdio.h>
    
    void main(){
       
        int numero = 30;

        while (1 == 1){
           
            printf("%d ", numero);

            numero = numero + 10 ;

            if (numero == 190){
                break ;
            }
        }
        return 0;
    }

    //INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//16/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//d)1a 1b 1c 2a 2b 2c … 10a 10b 10c

#include <stdio.h>
    
    void main(){
       
        int numero = 1;

        while (1 == 1){
           
            printf("%da ", numero);
            printf("%db ", numero);
            printf("%dc ", numero);
            printf("%dd ", numero);

             numero = numero + 1 ;

            if (numero == 11){
               break ;
            }
        }
        return 0;
    }

    //INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//16/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//e)3 5 7 9 11 … 311

#include <stdio.h>
    
   void main(){
       
       int numero = 3 , result;

       while (1 == 1){

         result = numero % 2;
        
         if (result == 1){
            printf("%d ", numero);
         }

         numero++;

         if (numero == 312){
           break ;
         }
      }
      return 0;
   }

   //INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//16/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//f)1 2 3 X 5 6 7 X … X 401 402 403

#include <stdio.h>
    
   void main(){
       
      int numero = 1 , contador , resultado;

      for (contador = 0; contador <= 402; contador++){

         resultado = numero % 4;

         if(resultado == 0){
            printf("x ");
         }else{
            printf("%d ", numero);
         }

         numero++;
      }
      return 0;
   }


   //INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//16/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//g)0c 0b 0a 4c 4b 4a 8c … 1024c 1024b 1024a

#include <stdio.h>
    
    void main(){
       
       int numero = 0 , contador , resultado;

        for (contador = 0; contador <= 1024; contador++){

            resultado = numero % 4;

            if(resultado == 0){
                printf("%dc ", numero);
                printf("%db ", numero);
                printf("%da ", numero);
            }
            numero++;
        }
       return 0;
    }

    //INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//21/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//h)2 4 8 16 … 1024

#include <stdio.h>
#include <math.h>
    
    void main(){
       
       int numero = 2 , resultado;

        while (1 == 1){

            resultado = pow(2 , numero);

            printf("%d " , resultado);
            
            if(resultado == 1024){
                break;
            }

            numero++;
            
        }

        return 0;
    }


    //INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//21/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//i)343536373839310311…350 (tudo junto)

#include <stdio.h>
    
    void main(){
       
       int numero = 4;

        while (1 == 1){

            printf("3");
            printf("%d" , numero);
            
            if(numero == 50){
                break;
            }

            numero++;
            
        }

        return 0;
    }

    //INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//16/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//j)     1 2 3 4 5
        //6 7 8 9 10
        //11 12…
        // …
        //996 997 998 999 1000

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int num = 1;

    while (num <= 1000){

        printf("%d\t", num);

        if(num % 5 == 0){
            printf("\n");
        }

        num++;
    }
    
    return 0;
}

//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//16/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//k)    //1
        //2 3
        //4 5 6
        //7 8 9 10
        //…
        //… completar até 15 linhas

#include <stdio.h>
#include <stdlib.h>

int main (){
    int contador = 1, contador2, num = 1;

    while (contador <= 15){

        contador2 = 1;

        while (contador2 <= contador){
            printf("%d\t", num);
            num++;
            contador2++;
        }

        contador++;

        printf("\n");
    }
    
    return 0;
}


//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//16/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//l)    1 2 3 4 5
//      10 20 30 40 50
//      6 7 8 9 10
//      60 70 80 90 100
//      11 12 13…
//      …
//      26 27 28 29 30
//      260 270 280 290 300


#include <stdio.h>
#include <stdlib.h>
  
int main(){
       
    int num2 = 1, num, contador;

    for (contador = 0; contador < 6; contador++){

        num = 1;

        while (num <= 5){
            printf("%d\t", num2);
            num2++;
            num++;
        }

        printf("\n");

        num2-=5;

        num = 1;

        while (num <= 5){
            printf("%d\t", num2*10);
            num2++;
            num++;
        }
        printf("\n");
    }
    
    
    return 0;
}


//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//16/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//m)    1 10 100 1000
//      2 20 200 2000
//      3 30 300 3000
//      …
//      100 1000 10000 100000


#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 1;

    while (num <= 100){
        printf("%d\t%d\t%d\t%d\t", num, num*10, num*100, num*1000);
        printf("\n");
        num++;
    }
    
    return 0;
}

//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//21/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//n)Receba dois números inteiros e mostre o menor

#include <stdio.h>
#include <stdlib.h>
   
    void main(){
       
        int num1, num2;

        printf("Entre com os Numeros para comparacao: \n");
        printf("Entre com o primeiro numero: ");
            scanf("%d", &num1);
        
        printf("Entre com o segundo numero: ");
            scanf("%d", &num2);

        if(num1 < num2){
            printf("O numero menor e o primeiro numero %d", num1);
        }else{
            printf("O numero menor e o segundo numero %d", num2);
        }

        return 0;
    }

    //INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//21/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//o)Receba três números inteiros e mostre o maior

#include <stdio.h>
#include <stdlib.h>
   
    void main(){
       
        int num1, num2 , num3;

        printf("Entre com os Numeros para comparacao: \n");
        printf("Entre com o primeiro numero: ");
            scanf("%d", &num1);
        
        printf("Entre com o segundo numero: ");
            scanf("%d", &num2);

        printf("Entre com o terceiro numero: ");
            scanf("%d", &num3);

        if(num1 > num2 && num1 > num3){
            printf("O numero maior e o primeiro numero %d", num1);
        }else if (num2 > num1 && num2 > num3){
            printf("O numero maior e o segundo numero %d", num2);
        }else if (num3 > num1 && num3 > num2){
            printf("O numero maior e o terceiro numero %d", num3);
        }

        return 0;
    }


    //INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//21/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//p)Leia dois números inteiros em variáveis A e B e efetue a troca entre os valores. Exiba os valores das variáveis antes e após a troca.

#include <stdio.h>
#include <stdlib.h>
   
    void main(){
       
        int a, b , aux;

        printf("Entre com os Numeros para troca: \n");
        printf("Entre com o A numero: ");
            scanf("%d", &a);
        
        printf("Entre com o B numero: ");
            scanf("%d", &b);

        aux = a;
        a = b;
        b = aux;

        printf("O valor de A era %d e de B era %d \nAgora sao A = %d e B = %d", b , a , a , b);

        return 0;
    }

    //INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//21/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//q)Dois estudantes irão juntos ao cinema e fizeram uma aposta: “quem de nós tirar menor nota na prova de Linguagem de Programação pagará as nossas duas entradas pro cinema”. O valor de cada entrada inteira do cinema é R$25,00. Estudantes pagam meia entrada. Escreva um programa que leia as notas dos dois estudantes na prova de Linguagem de Programação e mostre os valores que eles gastarão.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
   
    void main(){
       
        float nota1, nota2, valor_ingresso, meio_ingresso, total;
        char aluno1[50], aluno2[50];

        printf("Entre com os nomes e as Notas das provas de Linguagem de programacao \n");

        printf("Entre com o nome do primeiro aluno: ");
            scanf("%s", &aluno1);

        printf("Entre com o nome do segundo aluno: ");
            scanf("%s", &aluno2);

        printf("%s, Entre com sua nota: ", aluno1);
            scanf("%f", &nota1);
        
        printf("%s, Entre com sua nota: ", aluno2);
            scanf("%f", &nota2);

        printf("Entre com o valor do ingresso: ");
            scanf("%f", &valor_ingresso);

        meio_ingresso = valor_ingresso / 2;
        
        total = meio_ingresso * 2;

        if(nota1 < nota2){
            printf("%s voce tirou %.2f e voce pagara um total de R$%.2f,\no ingresso de R$%.2f saiu por R$%.2f porque sao estudantes", aluno1, nota1, total, valor_ingresso , meio_ingresso);
        }else{
            printf("%s voce tirou %.2f e voce pagara um total de R$%.2f,\no ingresso de R$%.2f saiu por R$%.2f porque sao estudantes", aluno2, nota2, total, valor_ingresso , meio_ingresso);
        }

        return 0;
    }

//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//21/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//r)Calcule as raízes reais de uma equação de segundo grau, ou emita uma mensagem caso as mesmas não existam.

#include <stdio.h>
//INCLUSAO DE BIBLIOTECA MATEMATICA
#include <math.h>

void main(){
    float a;
    float b;
    float c;
    float delta;
    float x1;
    float x2;

    printf("Equacao base -> 'ax^2 + bx + c =0'\n");
    printf("Entre com os valores:\n");
    printf("Entre com o valor de A: ");
        scanf("%f" , &a);
    printf("Entre com o valor de B: ");
        scanf("%f" , &b);
    printf("Entre com o valor de C: ");
        scanf("%f" , &c);

    if (a == 0) {
        if (b != 0) {  
            printf("EQUACAO DE PRIMEIRO GRAU");
        }else{
            if (c == 0) {
	            printf("VALORES ZERADOS!\n");
            }
        }
    }else{

    delta = (b*b) - (4*a*c);
    printf("DELTA vale: %.1f\n", delta);

    if (delta < 0) {
      printf("NAO EXISTE SOLUCAO");
    }else{
        x1 = ((-b) + sqrt(delta)) / (2*a);
        x2 = ((-b) - sqrt(delta)) / (2*a);
        printf("O valor de x1: %.3f\nO valor de x2: %.3f" , x1 , x2);
    }
    }
}


//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//21/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//r)Calcule as raízes reais de uma equação de segundo grau, ou emita uma mensagem caso as mesmas não existam.

#include <stdio.h>
//INCLUSAO DE BIBLIOTECA MATEMATICA
#include <math.h>

void main(){
    float a;
    float b;
    float c;
    float delta;
    float x1;
    float x2;

    printf("Equacao base -> 'ax^2 + bx + c =0'\n");
    printf("Entre com os valores:\n");
    printf("Entre com o valor de A: ");
        scanf("%f" , &a);
    printf("Entre com o valor de B: ");
        scanf("%f" , &b);
    printf("Entre com o valor de C: ");
        scanf("%f" , &c);

    if (a == 0) {
        if (b != 0) {  
            printf("EQUACAO DE PRIMEIRO GRAU");
        }else{
            if (c == 0) {
	            printf("VALORES ZERADOS!\n");
            }
        }
    }else{

    delta = (b*b) - (4*a*c);
    printf("DELTA vale: %.1f\n", delta);

    if (delta < 0) {
      printf("NAO EXISTE SOLUCAO");
    }else{
        x1 = ((-b) + sqrt(delta)) / (2*a);
        x2 = ((-b) - sqrt(delta)) / (2*a);
        printf("O valor de x1: %.3f\nO valor de x2: %.3f" , x1 , x2);
    }
    }
}


//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//21/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//t)Receba três valores A, B e C que representam os lados de um triângulo. Emita uma mensagem informando que os valores recebidos não formam um triângulo OU verifique o tipo desse triângulo em função do comprimento dos seus lados (escaleno, equilátero ou isósceles). O programa deve repetir até que o usuário não deseje mais executar.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    
void main(){
    int lado1, lado2, lado3, contador, saida;

    while(1 ==1){

        printf("Entre com os lados do Triangulo: \n");
        printf("Entre com o primeiro lado: ");
            scanf("%d" , &lado1);
        printf("Entre com o segundo lado: ");
            scanf("%d" , &lado2);
        printf("Entre com o terceiro lado: ");
            scanf("%d" , &lado3);

        if(lado1 + lado2 < lado3){
            printf("Os lados nao formao um triangulo ");
        }else if(lado1 != lado2 && lado1 != lado3 && lado2 != lado3){
            printf("Triangulo ESCALENO\n\n");
        }else if(lado1 == lado2 && lado1 == lado3 && lado2 == lado3){
            printf("Triangulo EQUILATERO\n\n");
        }else if(lado1 == lado2 && lado1 != lado3 || lado1 == lado3 && lado1 != lado2){
            printf("Triangulo ISOSCELES\n\n");
        }

        printf("Deseja parar ?\nSe sim digite: 1\nSe nao digite: 0\n");
            scanf("%d", &saida);

        if(saida == 1){
            break;
        }
    }
    return 0;
}


//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//21/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//u)Receba a medida de um ângulo em graus e determine
    //a)Em qual quadrante ele está localizado;
    //b)O número de voltas no círculo trigonométrico
    //c)O sentido da volta (anti-horário ou horário).
       //Observações:
        //a)Se ele estiver em cima de um dos eixos explicite entre quais quadrantes ele se encontra.
        //b)Considere ângulos entre -720 e 720. Caso a medida informada não estiver nesse intervalo dê uma mensagem.

#include <stdio.h>
#include <stdlib.h>
   
    void main(){
       
        int angulo, angulo_aux;

        printf("Entre com o Angulo: ");
            scanf("%d", &angulo);

        if(angulo > 720 || angulo < -720){
            printf("Angulo Acima do permitido !!");

        }else if(angulo > 360 || angulo < -360){

            if(angulo > 0){
                printf("Volta sentido: ANTI-HORARIO\n");
                angulo_aux = angulo - 360;
            }else if(angulo < 0){
                printf("Volta sentido: HORARIO\n");
                angulo_aux = angulo + 360;
                angulo_aux = angulo_aux * (-1);
            }

            if(angulo_aux > 0 && angulo_aux < 90){
                printf("O angulo %d esta no quadrante 1\n", angulo);
            }else if (angulo_aux > 90 && angulo_aux < 180){
                printf("O angulo %d esta no quadrante 2\n", angulo);
            }else if (angulo_aux > 180 && angulo_aux < 270){
                printf("O angulo %d esta no quadrante 3\n", angulo);
            }else if (angulo_aux > 270 && angulo_aux < 360){
                printf("O angulo %d esta no quadrante 4\n", angulo);
            }
            else if(angulo_aux == 0 || angulo_aux == 360){
                printf("O angulo %d esta ente os quadrantes 1 e 4\n", angulo);
            }else if(angulo_aux == 90){
                printf("O angulo %d esta ente os quadrantes 1 e 2\n", angulo);
            }else if(angulo_aux == 180){
                printf("O angulo %d esta ente os quadrantes 2 e 3\n", angulo);
            }else if(angulo_aux == 270){
                printf("O angulo %d esta ente os quadrantes 3 e 4\n", angulo);
            }


            if(angulo == 360 || angulo == -360){
                printf("O angulo deu duas volta no circulo trigonometrico");
            }else if(angulo_aux > 0 && angulo_aux <= 90){
                printf("O angulo %d deu uma volta e %d/360 avos de volta ", angulo, angulo_aux);
            }else if (angulo_aux > 90 && angulo_aux <= 180){
                printf("O angulo %d deu uma volta e %d/360 avos de volta", angulo, angulo_aux);
            }else if (angulo_aux > 180 && angulo_aux <= 270){
                printf("O angulo %d deu uma volta e %d/360 avos de volta", angulo, angulo_aux);
            }else if (angulo_aux > 270 && angulo_aux < 360){
                printf("O angulo %d deu uma volta e %d/360 avos de volta", angulo, angulo_aux);
            }

        }else if(angulo < 360 || angulo > -360){

            if(angulo > 0){
                printf("Volta sentido: ANTI-HORARIO\n");
            }else if(angulo < 0){
                printf("Volta sentido: HORARIO\n");
            }
            if(angulo > 0 && angulo < 90){
                printf("O angulo %d esta no quadrante 1\n", angulo);
            }else if (angulo > 90 && angulo < 180){
                printf("O angulo %d esta no quadrante 2\n", angulo);
            }else if (angulo > 180 && angulo < 270){
                printf("O angulo %d esta no quadrante 3\n", angulo);
            }else if (angulo > 270 && angulo < 360){
                printf("O angulo %d esta no quadrante 4\n", angulo);
            }
            else if(angulo == 0 || angulo == 360){
                printf("O angulo %d esta ente os quadrantes 1 e 4\n", angulo);
            }else if(angulo == 90){
                printf("O angulo %d esta ente os quadrantes 1 e 2\n", angulo);
            }else if(angulo == 180){
                printf("O angulo %d esta ente os quadrantes 2 e 3\n", angulo);
            }else if(angulo == 270){
                printf("O angulo %d esta ente os quadrantes 3 e 4\n", angulo);
            }

            if(angulo == 360 || angulo == -360){
                printf("O angulo deu uma volta no circulo trigonometrico");
            }else if(angulo > 0 && angulo <= 90){
                printf("O angulo %d deu %d/360 avos de volta", angulo, angulo);
            }else if (angulo > 90 && angulo <= 180){
                printf("O angulo %d deu %d/360 avos de volta", angulo, angulo);
            }else if (angulo > 180 && angulo <= 270){
                printf("O angulo %d deu %d/360 avos de volta", angulo, angulo);
            }else if (angulo > 270 && angulo < 360){
                printf("O angulo %d deu %d/360 avos de volta", angulo, angulo);
            }
            
        }
    return 0;
    }


//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//21/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//v)Receba três números reais e uma opção (inteiro entre 1 e 3). Valide a opção informada. Caso a opção não for válida emita uma mensagem de erro e não execute mais nada. Monte o seguinte menu de opções (tabela) e informe os números dispostos de acordo com a opção escolhida:
//Opções de Saída
//--------------------------------------
//1 - numeros em forma descendente
//2 - numeros em forma ascendente
//3 - o maior entre os outros dois
//--------------------------------------

#include <stdio.h>
#include <stdlib.h>
   
    void main(){

        int num1, num2, num3, escolha;

        printf("Ente com os numero: \n");
        printf("Entre com o primeiro numero: ");
            scanf("%d" , &num1);
        printf("Entre com o segundo numero: ");
            scanf("%d" , &num2);
        printf("Entre com o terceiro numero: ");
            scanf("%d" , &num3);

        printf("\n\nOpcoes de Saida \n-------------------------------------- \n1 - numeros em forma descendente \n2 - numeros em forma ascendente \n3 - o maior entre os outros dois \n--------------------------------------\n");
        printf("Escolha: ");
            scanf("%d", &escolha);
       
        switch(escolha){
            case 1:
                if(num1 == num2 && num2 == num3){
                    printf("Os numeros digitados sao iguais\n");
                }else{
                
                    if(num1 > num2 && num1 > num3){
                        printf("Maior: %d\n" , num1);
                    }else if(num2 > num1 && num2 > num3){
                        printf("Maior: %d\n" , num2);
                    }else if(num3 > num1 && num3 > num2){
                        printf("Maior: %d\n" , num3);
                    }


                    if(num1 > num2 && num1 < num3){
                        printf("Medio: %d\n" , num1);
                    }else if(num1 < num2 && num1 > num3){
                        printf("Medio: %d\n" , num1);
                    }else if(num2 > num1 && num2 < num3){
                        printf("Medio: %d\n" , num2);
                    }else if(num2 < num1 && num2 > num3){
                        printf("Medio: %d\n" , num2);
                    }else if(num3 > num1 && num3 < num2){
                        printf("Medio: %d\n" , num3);
                    }else if(num3 < num1 && num3 > num2){
                        printf("Medio: %d\n" , num3);
                    }


                    if(num1 < num2 && num1 < num3){
                        printf("Menor: %d\n" , num1);
                    }else if(num2 < num1 && num2 < num3){
                        printf("Menor: %d\n" , num2);
                    }else if(num3 < num1 && num3 < num2){
                        printf("Menor: %d\n" , num3);
                    }
                }
            break;

            case 2:
                if(num1 == num2 && num2 == num3){
                    printf("Os numeros digitados sao iguais\n");S
                }else{

                    if(num1 < num2 && num1 < num3){
                        printf("Menor: %d\n" , num1);
                    }else if(num2 < num1 && num2 < num3){
                        printf("Menor: %d\n" , num2);
                    }else if(num3 < num1 && num3 < num2){
                        printf("Menor: %d\n" , num3);
                    }
                
                    
                    if(num1 > num2 && num1 < num3){
                        printf("Medio: %d\n" , num1);
                    }else if(num1 < num2 && num1 > num3){
                        printf("Medio: %d\n" , num1);
                    }else if(num2 > num1 && num2 < num3){
                        printf("Medio: %d\n" , num2);
                    }else if(num2 < num1 && num2 > num3){
                        printf("Medio: %d\n" , num2);
                    }else if(num3 > num1 && num3 < num2){
                        printf("Medio: %d\n" , num3);
                    }else if(num3 < num1 && num3 > num2){
                        printf("Medio: %d\n" , num3);
                    }


                    if(num1 > num2 && num1 > num3){
                        printf("Maior: %d\n" , num1);
                    }else if(num2 > num1 && num2 > num3){
                        printf("Maior: %d\n" , num2);
                    }else if(num3 > num1 && num3 > num2){
                        printf("Maior: %d\n" , num3);
                    }
                }
            break;

            case 3:
                if(num1 > num2 && num1 > num3){
                        printf("Maior: %d\n" , num1);
                    }else if(num2 > num1 && num2 > num3){
                        printf("Maior: %d\n" , num2);
                    }else if(num3 > num1 && num3 > num2){
                        printf("Maior: %d\n" , num3);
                    }
            break;

            default:
                printf("Opcao invalida!!");
                    
        }
        return 0;
    }