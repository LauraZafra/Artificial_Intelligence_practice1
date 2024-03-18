#ifndef COMPORTAMIENTOJUGADOR_H
#define COMPORTAMIENTOJUGADOR_H

#include "comportamientos/comportamiento.hpp"
using namespace std;

struct state{
    int fil;
    int col;
    Orientacion brujula;
};

class ComportamientoJugador : public Comportamiento{

  public:
    ComportamientoJugador(unsigned int size) : Comportamiento(size){
      // Constructor de la clase
      // Dar el valor inicial a las variables de estado
        current_state.fil = current_state.col = 99;
        current_state.brujula = norte;
        last_action = actIDLE;
        girar_derecha = false;
        bien_situado = false;
    }

    ComportamientoJugador(const ComportamientoJugador & comport) : Comportamiento(comport){}
    ~ComportamientoJugador(){}

    Action think(Sensores sensores);
    int interact(Action accion, int valor);

  private:
  // Declarar aquí las variables de estado
    Action last_action = actIDLE;
    state current_state;
    bool girar_derecha;
    bool bien_situado; //si el valor de la variable current state refleja la posicion correcta en el mapa del agente
};
#endif


