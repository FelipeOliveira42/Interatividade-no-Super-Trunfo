🃏 Super Trunfo — Comparação de Cartas
📘 Descrição

Este projeto é uma continuação do desafio anterior de cadastro de cartas do jogo Super Trunfo.
Agora, o programa permite comparar duas cartas de países com base em diferentes atributos, escolhidos pelo usuário por meio de um menu interativo implementado com switch e estruturas condicionais if-else.

O jogo exibe o resultado da comparação, indicando qual país venceu em cada atributo ou se houve empate.

🧱 Funcionalidades

Exibe um menu interativo no terminal.

Permite ao jogador escolher qual atributo deseja comparar entre duas cartas.

Implementa regras específicas:

Atributos numéricos → vence o maior valor.

Densidade demográfica → vence o menor valor.

Mostra o resultado detalhado:

Nome dos países.

Valores dos atributos.

Qual carta venceu ou se houve empate.

⚙️ Atributos disponíveis para comparação
Opção	Atributo	Tipo	Regra de vitória
1	População	int	Vence o país com maior população
2	Área	float	Vence o país com maior área
3	PIB	float	Vence o país com maior PIB
4	Pontos turísticos	int	Vence o país com mais pontos turísticos
5	Densidade demográfica	float	Vence o país com menor densidade (regra invertida)
💻 Como compilar e executar
🧩 Pré-requisitos

Ter um compilador C instalado, como o GCC.

(Opcional) Um ambiente de desenvolvimento como Code::Blocks, VS Code, ou o terminal do seu sistema operacional.

🛠️ Compilação via terminal

Salve o arquivo com o nome super_trunfo.c

Abra o terminal na pasta onde o arquivo foi salvo.

Compile o programa:

gcc super_trunfo.c -o super_trunfo


Execute o programa:

./super_trunfo


No Windows (Prompt de Comando):

super_trunfo.exe

🎮 Exemplo de uso

Saída esperada no terminal:

=== SUPER TRUNFO: Comparacao de Cartas ===

Carta 1: Brasil
Carta 2: Argentina

Escolha o atributo para comparacao:
1 - Populacao
2 - Area
3 - PIB
4 - Numero de pontos turisticos
5 - Densidade demografica

Digite a opcao desejada: 3

=== Resultado da Comparacao ===
Atributo escolhido: PIB
Brasil: 22000.00 bilhoes de reais
Argentina: 6300.00 bilhoes de reais
Vencedor: Brasil (maior PIB)

📄 Estrutura do projeto
super_trunfo/
├── super_trunfo.c   # Código-fonte principal do programa
├── README.md        # Este arquivo com instruções e descrição

🧠 Conceitos utilizados

Estrutura de controle switch

Estruturas condicionais if-else

Variáveis e tipos de dados (int, float, char[])

Cálculo de densidade demográfica (população ÷ área)

Entrada e saída de dados no terminal (scanf e printf)