Super Trunfo - Comparador de Cartas em C
📌 Descrição do Projeto

Este projeto é uma implementação em C do clássico jogo Super Trunfo, com foco em comparação de atributos entre cartas. Cada carta representa um país e possui diversos atributos, como população, área, PIB, pontos turísticos e densidade demográfica.

O projeto permite que o usuário escolha um ou dois atributos para comparar as cartas, usando menus interativos, switch e if-else aninhados. O sistema calcula os resultados com base em regras específicas e trata empates de forma clara.

Este projeto é ideal para estudantes que querem praticar:

Estruturas de controle (if, switch)

Operações aritméticas e cálculos derivados

Entrada e saída de dados em C

Menus interativos e lógica de jogos

⚙️ Funcionalidades

Cadastro pré-definido de duas cartas (países) com atributos:

Nome do país

População

Área (km²)

PIB (bilhões)

Número de pontos turísticos

Densidade demográfica (calculada automaticamente)

Menus interativos para escolha de um ou dois atributos para comparação.

Comparação de atributos seguindo regras:

Maior valor vence, exceto densidade demográfica (menor vence)

Soma dos atributos quando dois são escolhidos, determinando o vencedor final.

Tratamento de empates.

Mensagens e resultados exibidos de forma clara e organizada.

🛠️ Tecnologias Utilizadas

Linguagem de Programação: C

Compilador sugerido: GCC ou qualquer compilador compatível com C99

Ambiente de execução: Terminal ou console

🎮 Como Executar

Clone o repositório:

git clone https://github.com/SEU_USUARIO/super-trunfo-c.git


Navegue até o diretório do projeto:

cd super-trunfo-c


Compile o programa:

gcc -o super_trunfo super_trunfo.c


Execute o programa:

./super_trunfo


Siga as instruções no terminal para escolher os atributos e visualizar o resultado da comparação.

📚 Estrutura do Projeto
super-trunfo-c/
│
├─ super_trunfo.c      # Código-fonte principal em C
├─ README.md           # Este arquivo
└─ LICENSE             # (Opcional) Licença do projeto

💡 Exemplo de Uso
===== SUPER TRUNFO - COMPARACAO AVANCADA =====
Carta 1: Brasil
Carta 2: Japão

Escolha o PRIMEIRO atributo para comparacao:
1 - Populacao
2 - Area
3 - PIB
4 - Numero de Pontos Turisticos
5 - Densidade Demografica
Digite sua opcao: 5

Escolha o SEGUNDO atributo (diferente do primeiro):
1 - Populacao
2 - Area
3 - PIB
4 - Numero de Pontos Turisticos
Digite sua opcao: 3

===== RESULTADOS DAS COMPARACOES =====
1º Atributo: Densidade Demografica
Brasil: 25.13 hab/km²
Japão: 332.91 hab/km²

2º Atributo: PIB
Brasil: 2300.00 bilhoes
Japão: 5050.00 bilhoes

===== SOMA DOS ATRIBUTOS =====
Brasil: 2325.13
Japão: 5382.91

===== RESULTADO FINAL =====
Vencedor: Japão 🏆

📝 Observações

O projeto utiliza valores pré-definidos para as cartas, mas pode ser adaptado para permitir cadastro dinâmico pelo usuário.

Menus interativos garantem que o mesmo atributo não possa ser selecionado duas vezes.

Fácil de estender: adicionar mais cartas, atributos ou funcionalidades é simples.