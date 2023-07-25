#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include "Raca.h"
#include "Classe.h"

class Personagem : public Classe {
public:
	Personagem(std::string nome, Raca raca, std::string classeNome, std::string arma, std::string armadura, std::string habilidadeAtiva, std::string descricao);

	std::string GetNome() const;
	Raca GetRaca() const;
	std::string GetDescricao() const;

	void Atacar() const;

private:
	std::string nome;
	Raca raca;
};

#endif // PERSONAGEM_H


