#include <iostream>
#include "Raca.h"
#include "Classe.h"
#include "Personagem.h"

int main() {
    // Criando as três raças disponíveis
    Raca humano("Humano", "Habilidade Passiva: Rápida adaptação a novos ambientes.", "Humanos são conhecidos por sua versatilidade.");
    Raca elfo("Elfo", "Habilidade Passiva: Visão aguçada mesmo em condições de pouca luz.", "Elfos são seres mágicos e ágeis.");
    Raca orc("Orc", "Habilidade Passiva: Grande força física e resistência.", "Orcs são guerreiros fortes e robustos.");

    // Criando as três classes disponíveis
    Classe cavaleiro("Cavaleiro", "Espada", "Armadura de Placas", "Habilidade Ativa: Investida Poderosa.", "Cavaleiros são especialistas em combate corpo a corpo.");
    Classe mago("Mago", "Cajado", "Túnica Encantada", "Habilidade Ativa: Bola de Fogo.", "Magos dominam as artes arcanas e lançam poderosos feitiços.");
    Classe ladrao("Ladrão", "Adaga", "Traje Furtivo", "Habilidade Ativa: Ataque Surpresa.", "Ladrões são ágeis e furtivos, especializados em emboscadas.");

    // Criando o personagem do jogador
    std::cout << "Digite o nome do jogador: ";
    std::string nomeJogador;
    std::cin >> nomeJogador;

    int escolhaRaca;
    std::string racaEscolhida = "";
    std::string habilidadePassiva = "";

    while (true) {
        std::cout << "\nEscolha sua raça (digite o número correspondente):\n";
        std::cout << "1. " << humano.GetNome() << std::endl;
        std::cout << "2. " << elfo.GetNome() << std::endl;
        std::cout << "3. " << orc.GetNome() << std::endl;

        std::cin >> escolhaRaca;

        if (escolhaRaca < 1 || escolhaRaca > 3) {
            std::cout << "Escolha inválida. Tente novamente.\n";
            continue;
        }

        if (escolhaRaca == 1) {
            racaEscolhida = humano.GetNome();
            habilidadePassiva = humano.GetHabilidadePassiva();
        }
        else if (escolhaRaca == 2) {
            racaEscolhida = elfo.GetNome();
            habilidadePassiva = elfo.GetHabilidadePassiva();
        }
        else if (escolhaRaca == 3) {
            racaEscolhida = orc.GetNome();
            habilidadePassiva = orc.GetHabilidadePassiva();
        }

        break;
    }

    int escolhaClasse;
    std::string classeEscolhida = "";

    while (true) {
        std::cout << "\nEscolha sua classe (digite o número correspondente):\n";
        std::cout << "1. " << cavaleiro.GetNome() << std::endl;
        std::cout << "2. " << mago.GetNome() << std::endl;
        std::cout << "3. " << ladrao.GetNome() << std::endl;

        std::cin >> escolhaClasse;

        if (escolhaClasse < 1 || escolhaClasse > 3) {
            std::cout << "Escolha inválida. Tente novamente.\n";
            continue;
        }

        if (escolhaClasse == 1) {
            classeEscolhida = cavaleiro.GetNome();
        }
        else if (escolhaClasse == 2) {
            classeEscolhida = mago.GetNome();
        }
        else if (escolhaClasse == 3) {
            classeEscolhida = ladrao.GetNome();
        }

        break;
    }

    // Criando o personagem do jogador com a raça e classe escolhidas
    Personagem jogador(nomeJogador, Raca(racaEscolhida, habilidadePassiva, ""),
                       classeEscolhida, "", "", "", "");

    std::cout << "\n--- Informações do Personagem ---\n";
    std::cout << "Nome: " << jogador.GetNome() << std::endl;
    std::cout << "Raça: " << jogador.GetRaca().GetNome() << std::endl;
    std::cout << "Habilidade Passiva: " << jogador.GetRaca().GetHabilidadePassiva() << std::endl;
    std::cout << "Classe: " << jogador.GetNome() << std::endl;
    std::cout << "Descrição:\n" << jogador.GetDescricao() << std::endl;

    // O método Atacar foi movido para a classe Personagem
    jogador.Atacar();

    return 0;
}

