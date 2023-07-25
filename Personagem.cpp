#include "Personagem.h"
#include <iostream>

Personagem::Personagem(std::string nome, Raca raca, std::string classeNome, std::string arma, std::string armadura, std::string habilidadeAtiva, std::string descricao)
    : Classe(classeNome, arma, armadura, habilidadeAtiva, descricao), nome(nome), raca(raca) {}

std::string Personagem::GetNome() const {
    return nome;
}

Raca Personagem::GetRaca() const {
    return raca;
}

std::string Personagem::GetDescricao() const {
    return raca.GetDescricao() + "\n" + Classe::GetDescricao();
}

void Personagem::Atacar() const {
    std::cout << "Atacando com " << GetArma() << std::endl;
}

