#include <iostream>
#include "sapo.h"

/**
*	Definição da distancia da corrida, e do valor para começar o id(indentificação para o sapo)
*/
int Sapo::DISTANCIA_TOTAL_DA_CORRIDA = 30;
int Sapo::ids = 0;

int main(){
    std::srand(std::time(NULL)); // necessario iniciar o srand para resetar o ramdom a cada nova execução.
    Sapo sapos [3];
    
        
    bool ninguemVenceu = true;
    int quemVenceu = -1;

    // laço para executar o jogo em quanto as condições não forem atendidas.
    // condição : nenhum sapo ter chegado a distancia total da corrida.
    while(ninguemVenceu){
        for(int i=0;i<3;i++){
            sapos[i].pular();
            if(sapos[i].getDistanciaPercorrida() >= Sapo::DISTANCIA_TOTAL_DA_CORRIDA){
                ninguemVenceu = false;
                quemVenceu = i;
            }
        }
    }
    //impressão do resultado do sapo vencedor.
    cout 	<< "Sapo "<< sapos[quemVenceu].getId() + 1 
    		<<" venceu.\n" 
    		<< "Quantidade de pulos: "
    		<< sapos[quemVenceu].getQuantidadeDePulos() 
    		<< "\nDistancia percorrida: " 
    		<< sapos[quemVenceu].getDistanciaPercorrida() 
    		<< endl;

}