//
// Created by michel on 5/26/18.
//

#ifndef SSEDI_18A_MENURECURSO_H
#define SSEDI_18A_MENURECURSO_H

#include "civilizacion.h"
#include "Captura.h"

class MenuRecurso {

public:
    MenuRecurso();

    void agregarRecurso(Civilizacion* &civilizacion);

    void mostrarRecurso(Civilizacion *&civlizacion);
};


#endif //SSEDI_18A_MENURECURSO_H
