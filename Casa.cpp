#include <iostream>
#include "Casa.h"
#include "Terreno.h"

Casa::Casa(){
    //inicialização atributos da classe casa
    numPavimentos = 0;
    numQuartos = 0;
    areaTerreno = 0;
    areaConstruida = 0;
}

int Casa::getNumPavimentos()
{
    return numPavimentos;
}

int Casa::getNumQuartos()
{
    return numQuartos;
}

double Casa::getAreaTerreno()
{
    return areaTerreno;
}

double Casa::getAreaContruida()
{
    return areaConstruida;
}

void Casa::setNumPavimentos(int numPavimentos)
{
    if(numPavimentos<0)
        this -> numPavimentos = 0;
    else
        this -> numPavimentos = numPavimentos;
}

void Casa::setNumQuartos(int numQuartos)
{
    if(numQuartos<0)
        this -> numQuartos = 0;
    else
        this -> numQuartos = numQuartos;
}

void Casa::setAreaTerreno(double areaTerreno)
{
    if(areaTerreno<0)
        this -> areaTerreno= 0;
    else
        this -> areaTerreno=areaTerreno;
}

void Casa::setAreaContruida(double areaConstruida)
{
    if(areaConstruida<0)
        this -> areaConstruida=0;
    else
        this -> areaConstruida=areaConstruida;
}
