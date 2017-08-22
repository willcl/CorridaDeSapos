#ifndef SAPO_H
#define SAPO_H
/**
* Biblioteca necessaria para usaro o rand
*/
#include <ctime>
#include <cstdlib>

using namespace std;

/**
*   Classe Sapo
*   para ser inicializada Sapo "objeto" ou Sapo "objeto"("numero inteiro").
*   "numero inteiro" = valor maximo permitido para o pulo.
*/
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
    /**
    *   --Construtor Sapo--
    *   Recebe o valor do pulo maximo, caso não seja passado nada o valor atribuido é = 6.
    */
    Sapo ( int puloMaximo = 6);
    /**
    *   --Construtor copia Sapo--
    *   Recebe um objeto da classe Sapo e realiza a copia dos dados de um objeto para o outro.
    */
    Sapo(Sapo &s);

    /** 
    *	Função pular() 
    *	gera um valor aleatorio entre 1 e puloMaximo,
    *   soma esse valor a distancia percorrida
    *   e incrementa a quantidade de pulos
	*/
    void pular();

    private:
    // Gera valores aleatorios entre 1 e puloMaximo.
    int gerarValor(int a, int b);

    /** 
    *   ----Gets e Sets----
    *   getId() -> retorna o id.
    *   setId(int id); -> seta o valor no id.
    *   getDistanciaPercorrida() -> retorna a distancia percorrida.
    *   setDistanciaPercorrida(int distanciaPercorrida) -> adiciona um valor a distancia ja percorrida, inicia em 0.
    *   getQuantidadeDePulos() -> retorna a quantidade de pulos dadas até o momento.
    *   setQuantidadeDePulos(int quantidadeDePulos) -> adiciona 1 a quantidad de pulos que inicia em 0.
    *   getPuloMaximo() -> retorna o tamanho do pulo maximo permitido.
    *   setPuloMaximo(int puloMaximo) -> troca o valor para o pulo maximo, caso não seja definido inicia em 6
    */
    public:
    int getId();
    void setId(int id);
    int getDistanciaPercorrida();
    void setDistanciaPercorrida(int distanciaPercorrida);
    int getQuantidadeDePulos();
    void setQuantidadeDePulos(int quantidadeDePulos);
    int getPuloMaximo();
    void setPuloMaximo(int puloMaximo);
};



#endif