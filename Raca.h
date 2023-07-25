#ifndef RACA_H
#define RACA_H

#include <string>

class Raca {
public:
	Raca(std::string nome, std::string habilidadePassiva, std::string descricao);

	std::string GetNome() const;
	std::string GetHabilidadePassiva() const;
	std::string GetDescricao() const;

private:
	std::string nome;
	std::string habilidadePassiva;
	std::string descricao;
};

#endif // RACA_H


