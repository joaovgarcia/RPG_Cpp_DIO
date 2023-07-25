#include "Raca.h"

Raca::Raca(std::string nome, std::string habilidadePassiva, std::string descricao)
	: nome(nome), habilidadePassiva(habilidadePassiva), descricao(descricao) {}

std::string Raca::GetNome() const {
	return nome;
}

std::string Raca::GetHabilidadePassiva() const {
	return habilidadePassiva;
}

std::string Raca::GetDescricao() const {
	return descricao;
}


