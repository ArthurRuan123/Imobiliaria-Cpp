#include <iostream>
#include "Casa.h"
#include "Terreno.h"

Casa::Casa(){
    //inicialização atributos da classe casa
    numPavimentos = 0;
    numQuartos = 0;
    areaTerreno = 0;
    areaConstruida = 0;
    tipoImovel = 1;
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

string Casa::toString()
{
    stringstream strong;

    strong<< "Casa\n" << "Id: " << id << endl
          << "Tipo Oferta: " << tipoOferta << endl
          << "Valor: " << valor << endl
          << "Descricao: " << descricao << endl
          << "Logradouro: " << getEndereco().getLogradouro() << endl
          << "Numero: " << getEndereco().getNumero() << endl
          << "Bairro: " << getEndereco().getBairro() << endl
          << "Cep: " << getEndereco().getCep() << endl
          << "Cidade: " << getEndereco().getCidade() << endl
          << "Numero de Pavimentos: " << numPavimentos << endl
          << "Numero de Quartos: " << numQuartos << endl
          << "Area do terreno: " << areaTerreno << endl
          << "Area construida: " << areaConstruida << endl;

    return strong.str();
}

string Casa::toStringEdit()//addnumeros
{
    stringstream edit;

    edit<<"Id: " << id << endl
          << "1 - Tipo Oferta: " << tipoOferta << endl
          << "2 - Valor: " << valor << endl
          << "3 - Descricao: " << descricao << endl
          << "4 - Logradouro: " << getEndereco().getLogradouro() << endl
          << "5 - Numero: " << getEndereco().getNumero() << endl
          << "6 - Bairro: " << getEndereco().getBairro() << endl
          << "7 - Cep: " << getEndereco().getCep() << endl
          << "8 - Cidade: " << getEndereco().getCidade() << endl
          << "9 - Numero de Pavimentos: " << numPavimentos << endl
          << "10 - Numero de Quartos: " << numQuartos << endl
          << "11 - Area do terreno: " << areaTerreno << endl
          << "12 - Area construida: " << areaConstruida << endl;

    return edit.str();
}




