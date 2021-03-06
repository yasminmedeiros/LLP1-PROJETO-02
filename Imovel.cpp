#include "Imovel.h"

Imovel::Imovel(std::string descricao, int tipoOferta, int valor, Endereco endereco)
{
    this->descricao = descricao;
    this->tipoOferta = tipoOferta;
    this->valor = valor;
    this->endereco = endereco;
}
std::string Imovel::getDescricao()
{
    return this->descricao;
}
int Imovel::getTipoOferta()
{
    return this->tipoOferta;
}   
Endereco Imovel::getEndereco()
{
    return this->endereco;
}
double Imovel::getValor()
{
    return this->valor;
}

int Imovel::getTipo()
{
    return this->tipo;
}

void Imovel::setTipo(int tipo)//Invocada quando cadastramos um imóvel, para identificá-lo
{
    this->tipo = tipo;
}