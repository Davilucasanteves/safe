//EF3_Daví Lucas.c

//celst = Constante elástica; deform = deformação da mola; deform2 = segunda deformação da mola
//epe = Energia Potencial Elástica; epe2 = Segunda Energia Potencial Elástica ; difere = diferença entre as epe.

#include <stdio.h>

typedef struct mola
{
    float celst, deform;  
    
}MOLA;

void entraMOLA(MOLA*Mola)
{
    printf("Digite a constante elástica(N/m): ");
    scanf("%f", &(Mola->celst));//(*Mola).celst
    getchar();
    printf("Digite a deformação da mola(m): ");
    scanf("%f", &(Mola->deform));
}

void saiMOLA(MOLA Mola)
{
    printf("A constante elástica é %g J\nA deformação atual é %g m\n", Mola.celst, Mola.deform); 
}

float energPelast(MOLA Mola)
{
    float epe;
    epe=Mola.celst*(Mola.deform*Mola.deform)/2;
    return epe;
}

float diferePe(MOLA *Mola) //quero atualizar o valor da DEFORMAÇÃO;
{
    float difere;
    float epl2,epl;
    epl=energPelast(*Mola);//cria um tipo MOLA mola;
    printf("Digite a nova deformação da mola(m): ");
        scanf("%f",&Mola->deform);
    epl2=energPelast(*Mola);
    difere=epl-epl2;
    return difere;
}

int main()
{
    MOLA Mola;
    char op;
    do{
        printf("----Energias Potenciais Elásticas----\n\n");
        
        entraMOLA(&Mola);
        
        printf("A primeira energia potencial elástica é %g J\n\n",energPelast(Mola));
        
        printf("\nA diferença entre as energias potenciais elásticas é %g J\n\n",diferePe(&Mola));//põe a função emcima;
         printf("A segunda energia potencial elástica é %g J\n", energPelast(Mola));
        printf("----Dados da Mola----\n");
        saiMOLA(Mola);
        getchar();
        printf("Pressione [Enter] para continuar ou selecione"
        " outra tecla para sair...\n ");
        op = getchar();
    }while(op=='\n');
}

