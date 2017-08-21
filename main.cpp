#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


class Sapo {
    public:
        static int DISTANCIA_TOTAL_DA_CORRIDA;
        static int ids;

    private:
        int id;
        int distanciaPercorrida;
        int quantidadeDePulos;

        int puloMaximo;


    public:

    Sapo ( int puloMaximo = 6) : puloMaximo(puloMaximo) {
        id = ids++;
        distanciaPercorrida = 0;
        quantidadeDePulos = 0;
    }

    Sapo(Sapo &s){
        id = s.getId();
        puloMaximo = s.getPuloMaximo();
        distanciaPercorrida = s.getDistanciaPercorrida();
        quantidadeDePulos = s.getQuantidadeDePulos();
    }

    void pular(){
        // gera um valor aleatorio entre 1 e puloMaximo,
        // soma esse valor a distancia percorrida
        // e incrementa a quantidade de pulos
        int valor = gerarValor(1, puloMaximo);
        distanciaPercorrida += valor;
        quantidadeDePulos++;
    }

    private:
    int gerarValor(int a, int b){
        // Gera valores aleatorios entre a e b
        int random_variable =  std::rand() % b + a;
        return random_variable;
    }

    /* Gets e Sets */
    public:

    int getId(){
        return id;
    }

    void setId(int id){
        this->id = id;
    }

    int getDistanciaPercorrida(){
        return this->distanciaPercorrida;
    }

    void setDistanciaPercorrida(int distanciaPercorrida){
        this->distanciaPercorrida = distanciaPercorrida;
    }
    
    int getQuantidadeDePulos(){
        return quantidadeDePulos;
    }

    void setQuantidadeDePulos(int quantidadeDePulos){
        this->quantidadeDePulos = quantidadeDePulos;
    }

    int getPuloMaximo(){
        return puloMaximo;
    }
};

int Sapo::DISTANCIA_TOTAL_DA_CORRIDA = 30;
int Sapo::ids = 0;

int main(){
    std::srand(std::time(0));
    Sapo sapos [3];
    //std::srand(std::time(0)); // use current time as seed for random generator
    
        
    bool ninguemVenceu = true;
    int quemVenceu = -1;

    while(ninguemVenceu){
        for(int i=0;i<3;i++){
            sapos[i].pular();
            if(sapos[i].getDistanciaPercorrida() >= Sapo::DISTANCIA_TOTAL_DA_CORRIDA){
                ninguemVenceu = false;
                quemVenceu = i;
            }
        }
    }

    cout << sapos[quemVenceu].getId() + 1  << " "<< sapos[quemVenceu].getQuantidadeDePulos() << " " <<
            sapos[quemVenceu].getDistanciaPercorrida() << endl;

}