#include "../Comportamientos_Jugador/jugador.hpp"
#include <iostream>
using namespace std;

void PonerTerrenoEnMatriz(const vector<unsigned char> & terreno, const state &st, vector<vector<unsigned char>> &matriz){
    // extiende esta version inicial donde solo se pone la componente 0
    // en la matriz; la nueva version debe poner todas las componentes    
    // de terreno en funcion de la orientacion del agente
    matriz[st.fil][st.col] = terreno[0]; //casilla en la que estoy
     switch (st.brujula){
        case norte:
        matriz[st.fil - 1][st.col - 1] = terreno[1];
        matriz[st.fil - 1][st.col] = terreno[2];
        matriz[st.fil - 1][st.col + 1] = terreno[3];
        matriz[st.fil - 2][st.col - 2] = terreno[4];
        matriz[st.fil - 2][st.col - 1] = terreno[5];
        matriz[st.fil - 2][st.col] = terreno[6];
	matriz[st.fil - 2][st.col + 1] = terreno[7];
	matriz[st.fil - 2][st.col + 2] = terreno[8];
	matriz[st.fil - 3][st.col - 3] = terreno[9];
	matriz[st.fil - 3][st.col - 2] = terreno[10];
	matriz[st.fil - 3][st.col - 1] = terreno[11]
	matriz[st.fil - 3][st.col] = terreno[12];
	matriz[st.fil - 3][st.col + 1]  = terreno[13];
	matriz[st.fil - 3][st.col + 2] = terreno[14];
	matriz[st.fil - 3][st.col + 3] = terreno[15];
	break;
	 case sur:
        matriz[st.fil + 1][st.col + 1] = terreno[1];
        matriz[st.fil + 1][st.col] = terreno[2];
        matriz[st.fil + 1][st.col - 1] = terreno[3];
        matriz[st.fil + 2][st.col + 2] = terreno[4];
        matriz[st.fil + 2][st.col + 1] = terreno[5];
matriz[st.fil + 2][st.col] = terreno[6];
matriz[st.fil + 2][st.col - 1] = terreno[7];
matriz[st.fil + 2][st.col - 2] = terreno[8];
matriz[st.fil + 3][st.col + 3] = terreno[9];
matriz[st.fil + 3][st.col + 2] = terreno[10];
matriz[st.fil + 3][st.col + 1] = terreno[11]
matriz[st.fil + 3][st.col] = terreno[12];
matriz[st.fil + 3][st.col - 1]  = terreno[13];
matriz[st.fil + 3][st.col - 2] = terreno[14];
matriz[st.fil + 3][st.col - 3] = terreno[15];
	break;
case este:
        matriz[st.fil - 1][st.col + 1] = terreno[1];
        matriz[st.fil ][st.col +1] = terreno[2];
        matriz[st.fil + 1][st.col + 1] = terreno[3];
        matriz[st.fil - 2][st.col + 2] = terreno[4];
        matriz[st.fil - 1][st.col + 2] = terreno[5];
        matriz[st.fil][st.col + 2] = terreno[6];
	matriz[st.fil + 1][st.col + 2] = terreno[7];
	matriz[st.fil + 2][st.col + 2] = terreno[8];
	matriz[st.fil - 3][st.col + 3] = terreno[9];
	matriz[st.fil - 2][st.col + 3] = terreno[10];
	matriz[st.fil - 1][st.col + 3] = terreno[11]
	matriz[st.fil ][st.col + 3] = terreno[12];
	matriz[st.fil + 1][st.col + 3]  = terreno[13];
	matriz[st.fil + 2][st.col + 3] = terreno[14];
	matriz[st.fil + 3][st.col + 3] = terreno[15];
	break;
case oeste:
matriz[st.fil + 1][st.col - 1] = terreno[1];
matriz[st.fil][st.col - 1] = terreno[2];
matriz[st.fil - 1][st.col - 1] = terreno[3];
matriz[st.fil + 2][st.col - 2] = terreno[4];
matriz[st.fil + 1][st.col - 2] = terreno[5];
matriz[st.fil][st.col - 2] = terreno[6];
matriz[st.fil - 1][st.col - 2] = terreno[7];
matriz[st.fil - 2][st.col - 2] = terreno[8];
matriz[st.fil + 3][st.col - 3] = terreno[9];
matriz[st.fil + 2][st.col - 3] = terreno[10];
matriz[st.fil + 1][st.col - 3] = terreno[11]
matriz[st.fil][st.col - 3] = terreno[12];
matriz[st.fil - 1][st.col - 3] = terreno[13];
matriz[st.fil - 2][st.col - 3] = terreno[14];
matriz[st.fil - 3][st.col - 3] = terreno[15];
break;
case noreste:
    matriz[st.fil - 1][st.col] = terreno[1];
    matriz[st.fil - 1][st.col + 1] = terreno[2];
    matriz[st.fil][st.col + 1] = terreno[3];
    matriz[st.fil - 2][st.col] = terreno[4];
    matriz[st.fil - 2][st.col + 1] = terreno[5];
    matriz[st.fil - 2][st.col + 2] = terreno[6];
    matriz[st.fil - 1][st.col + 2] = terreno[7];
    matriz[st.fil][st.col + 2] = terreno[8];
    matriz[st.fil - 3][st.col] = terreno[9];
    matriz[st.fil - 3][st.col + 1] = terreno[10];
    matriz[st.fil - 3][st.col + 2] = terreno[11];
    matriz[st.fil - 3][st.col + 3] = terreno[12];
    matriz[st.fil - 2][st.col + 3] = terreno[13];
    matriz[st.fil - 1][st.col + 3] = terreno[14];
    matriz[st.fil][st.col + 3] = terreno[15];
break; 
case noroeste:
 matriz[st.fil][st.col - 1] = terreno[1];
    matriz[st.fil - 1][st.col - 1] = terreno[2];
    matriz[st.fil - 1][st.col] = terreno[3];
matriz[st.fil][st.col - 2] = terreno[4];
    matriz[st.fil - 1][st.col - 2] = terreno[5];
    matriz[st.fil - 2][st.col - 2] = terreno[6];
    matriz[st.fil - 2][st.col - 1] = terreno[7];
 matriz[st.fil - 2][st.col] = terreno[8];
    matriz[st.fil][st.col - 3] = terreno[9];
matriz[st.fil - 1][st.col - 3] = terreno[10];
    matriz[st.fil - 2][st.col - 3] = terreno[11];
    matriz[st.fil - 3][st.col - 3] = terreno[12];
    matriz[st.fil - 3][st.col - 2] = terreno[13];
matriz[st.fil - 3][st.col - 1] = terreno[14];
    matriz[st.fil - 3][st.col] = terreno[15];
break; 
case sureste:
matriz[st.fil][st.col + 1] = terreno[1];
    matriz[st.fil + 1][st.col + 1] = terreno[2];
    matriz[st.fil + 1][st.col] = terreno[3];
matriz[st.fil][st.col + 2] = terreno[4];
    matriz[st.fil + 1][st.col + 2] = terreno[5];
    matriz[st.fil + 2][st.col + 2] = terreno[6];
    matriz[st.fil + 2][st.col + 1] = terreno[7];
matriz[st.fil + 2][st.col] = terreno[8];
    matriz[st.fil][st.col + 3] = terreno[9];
matriz[st.fil + 1][st.col + 3] = terreno[10];
    matriz[st.fil + 2][st.col + 3] = terreno[11];
    matriz[st.fil + 3][st.col + 3] = terreno[12];
    matriz[st.fil + 3][st.col + 2] = terreno[13];
    matriz[st.fil + 3][st.col + 1] = terreno[14];
    matriz[st.fil + 3][st.col] = terreno[15];
break; 
case suroeste:
matriz[st.fil + 1][st.col] = terreno[1];
    matriz[st.fil + 1][st.col - 1] = terreno[2];
    matriz[st.fil][st.col - 1] = terreno[3];
    matriz[st.fil + 2][st.col] = terreno[4];
    matriz[st.fil + 2][st.col - 1] = terreno[5];
    matriz[st.fil + 2][st.col - 2] = terreno[6];
    matriz[st.fil + 1][st.col - 2] = terreno[7];
    matriz[st.fil][st.col - 2] = terreno[8];
matriz[st.fil + 3][st.col] = terreno[9];
    matriz[st.fil + 3][st.col - 1] = terreno[10];
    matriz[st.fil + 3][st.col - 2] = terreno[11];
    matriz[st.fil + 3][st.col - 3] = terreno[12];
    matriz[st.fil + 2][st.col - 3] = terreno[13];
    matriz[st.fil + 1][st.col - 3] = terreno[14];
    matriz[st.fil][st.col - 3] = terreno[15];
break; 
     }
}

Action ComportamientoJugador::think(Sensores sensores)
{
    Action accion = actIDLE;
    int a;

    //Actualizacion de las variables de estado
    switch(last_action) {
        case actTURN_SR:
            a = current_state.brujula;
            a = (a + 1 ) % 8;
            current_state.brujula = static_cast<Orientacion>(a);
            girar_derecha = (rand()%2 ==0);
            break;
        case actTURN_L:
            a = current_state.brujula;
            a = (a + 6) % 8;
            current_state.brujula = static_cast<Orientacion>(a); //6 0 7????
            girar_derecha = (rand()%2 ==0);
            break;
        case actWALK:
            switch (current_state.brujula) {
                case norte:
                    current_state.fil--;
                    break;
                case noreste:
                    current_state.fil--;
                    current_state.col++;
                    break;
                case este:
                    current_state.col++;
                    break;
                case sureste:
                    current_state.fil++;
                    current_state.col++;
                    break;
                case sur:
                    current_state.fil++;
                    break;
                case suroeste:
                    current_state.fil++;
                    current_state.col--;
                    break;
                case oeste:
                    current_state.col--;
                    break;
                case noroeste:
                    current_state.fil--;
                    current_state.col--;
                    break;
            }
            break;
        case actRUN: ;
            break;
        //Faltan acciones
    } //fin switch last action

    if (sensores.terreno[0]=='G' and !bien_situado){
        current_state.fil = sensores.posF;
        current_state.col= sensores.posC;
        current_state.brujula = sensores.sentido;
        bien_situado = true;
    }

    if(bien_situado){
        PonerTerrenoEnMatriz(sensores.terreno, current_state, mapaResultado);
        //mapaResultado[current_state.fil][current_state.col] = sensores.terreno[0];
    }

    // Mostrar el valor de los sensores
    cout << "Posicion: fila " << sensores.posF << " columna " << sensores.posC;
    switch (sensores.sentido)
    {
        case norte:   cout << " Norte\n";   break;
        case noreste: cout << " Noreste\n"; break;
        case este:    cout << " Este\n";    break;
        case sureste: cout << " Sureste\n"; break;
        case sur:     cout << " Sur\n"; break;
        case suroeste:cout << " Suroeste\n";    break;
        case oeste:   cout << " Oeste\n";   break;
        case noroeste:cout << " Noroeste\n";    break;
    }
    cout << "Terreno: ";
    for (int i=0; i<sensores.terreno.size(); i++)
        cout << sensores.terreno[i];

    cout << "  Agentes: ";
    for (int i=0; i<sensores.agentes.size(); i++)
        cout << sensores.agentes[i];

    cout << "\nColision: " << sensores.colision;
    cout << "  Reset: " << sensores.reset;
    cout << "  Vida: " << sensores.vida << endl;

    if (current_state.brujula == norte){
        accion = actTURN_L;
    }
    //COMPLETAR

    //Decision de la nueva accion
    if ((sensores.terreno[2] == 'T' or sensores.terreno[2] == 'S' or sensores.terreno[2] == 'G') and (sensores.agentes[2] == '_')) {
        accion = actWALK;
    }
    else if (!girar_derecha){
        accion = actTURN_L;
        girar_derecha = (rand()%2 ==0);
    }
    else{
        accion = actTURN_SR;
        girar_derecha = (rand()%2 ==0);
    }

    //Devuelve el valor de la accion
    last_action = accion;
    return accion;
}

int ComportamientoJugador::interact(Action accion, int valor)
{
    return false;
}

