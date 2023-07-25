#ifndef CLASSE_H
#define CLASSE_H

#include <string>

class Classe {
public:
	Classe(std::string nome, std::string arma, std::string armadura, std::string habilidadeAtiva, std::string descricao);

	std::string GetNome() const;
	std::string GetArma() const;
	std::string GetArmadura() const;
	std::string GetHabilidadeAtiva() const;
	std::string GetDescricao() const;

	void Atacar() const;

private:
	std::string nome;
	std::string arma;
	std::string armadura;
	std::string habilidadeAtiva;
	std::string descricao;
};

#endif // CLASSE_H


