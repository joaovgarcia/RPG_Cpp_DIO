#include "Classe.h"
#include <iostream>

Classe::Classe(std::string nome, std::string arma, std::string armadura, std::string habilidadeAtiva, std::string descricao)
	: nome(nome), arma(arma), armadura(armadura), habilidadeAtiva(habilidadeAtiva), descricao(descricao) {}

std::string Classe::GetNome() const {
	return nome;
}

std::string Classe::GetArma() const {
	return arma;
}

std::string Classe::GetArmadura() const {
	return armadura;
}

std::string Classe::GetHabilidadeAtiva() const {
	return habilidadeAtiva;
}

std::string Classe::GetDescricao() const {
	return descricao;
}

void Classe::Atacar() const {
	std::cout << "Atacando com " << arma << std::endl;
}


