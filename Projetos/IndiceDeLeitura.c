#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
/*Declaração das funções */
int spc(string quant);
int cal(float L, float S);
int count(string senten);
int letra(string txt);


/*Declaração das variáveis*/
int letras = 0;
int sent = 0;
int palavras = 0;

/*Interface */
int main(void)
{
    /*Interface */
    string text = get_string("Texto: ");
    letras = strlen(text);


    /*Calculo da média*/
    
    /*Média de letras por 100 palavras*/
    float valor1 = ((float)(letra(text) / (float)spc(text))) * 100;
    /*Média de sentenças por 100 palavas*/
    float valor2 = ((float)count(text) / (float)spc(text) * 100);

    /* */
    int result = cal(valor1, valor2);
    printf("%i \n", result);
    
    
    /*Interface*/
    if(result <= 1)
    {
        printf("Grade Before 1 \n");
        
    }
    else if (result < 16)
    {
        printf("Grade %i \n", result);
    }
    else if (result >= 16 )
    {
        printf("Grade 16+");
    }
    
    
    
}



/*Funções  */

/*Verificar sentenças*/
int count(string senten)

{
    int num = strlen(senten);
    int i = 0;
    sent = 0;
    for (i = 0; i < num; i++)
    {
        if (senten[i] == '!' || senten[i] == '.')
        {
            sent ++;
        }
    }
    return sent;
}

/*Função para verificar os espaços*/
int spc (string quant)
{
   int i = 0;

    int num = strlen(quant);
    int espaço = 1;

    for(i = 0; i < (num - 1) ; i++)
    {
        if( (isspace(quant[i])))
        {
            espaço += 1;
        }
    }
    return espaço;
}


/* Função para contar as letras*/

int letra(string txt)
{

    int texto = strlen(txt);
    int let = 0;
    for(int i = 0 ; i < texto; i++)
    {
        if (isalpha(txt[i]))
        {
            let += 1;
        }
    }
    return let;
}


/*Calculo do indice de leitura*/

int cal(float L, float S)
{
    float n1 = 0.0588;
    float n2 = 0.296;
    float n3 = 15.8;
    int indice = (n1 * L - n2 * S - n3);

    return indice;
}