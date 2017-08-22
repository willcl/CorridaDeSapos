#include "sapo.h"


    Sapo::Sapo ( int puloMaximo ) : puloMaximo(puloMaximo) {
        id = ids++;
        distanciaPercorrida = 0;
        quantidadeDePulos = 0;
    }

    Sapo::Sapo(Sapo &s){
        id = s.getId();
        puloMaximo = s.getPuloMaximo();
        distanciaPercorrida = s.getDistanciaPercorrida();
        quantidadeDePulos = s.getQuantidadeDePulos();
    }

    void Sapo::pular(){
        int valor = Sapo::gerarValor(1, puloMaximo);
        distanciaPercorrida += valor;
        quantidadeDePulos++;
    }

    int Sapo::gerarValor(int a, int b){
        int random_variable =  rand() % b + a;
        return random_variable;
    }

    /* Gets e Sets */

    int Sapo::getId(){
        return id;
    }

    void Sapo::setId(int id){
        this->id = id;
    }

    int Sapo::getDistanciaPercorrida(){
        return this->distanciaPercorrida;
    }

    void Sapo::setDistanciaPercorrida(int distanciaPercorrida){
        this->distanciaPercorrida = distanciaPercorrida;
    }
    
    int Sapo::getQuantidadeDePulos(){
        return quantidadeDePulos;
    }

    void Sapo::setQuantidadeDePulos(int quantidadeDePulos){
        this->quantidadeDePulos = quantidadeDePulos;
    }

    int Sapo::getPuloMaximo(){
        return puloMaximo;
    }

    void Sapo::setPuloMaximo( int puloMaximo ){
        this->puloMaximo = puloMaximo;
    }