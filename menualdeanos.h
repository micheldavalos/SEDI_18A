#ifndef MENUALDEANOS_H
#define MENUALDEANOS_H

#include "civilizacion.h"

class MenuAldeanos
{
public:
    MenuAldeanos();
    void nombreCivilizacion(Civilizacion &civilizacion); // sin const ya que voy a modificar la civilizacion
    void agregarAldeano(Civilizacion &civilizacion); // sin const ya que voy a modificar la civilizaion para agregarle aldeanos
    void eliminarAldeano(Civilizacion &civilizacion);
    void resumen(const Civilizacion &civilizacion); // es const porque solamente voy a leer datos del objeto civilizacion
};

#endif // MENUALDEANOS_H
