# Problemas e Soluções

Este repositório compartilha soluções de problemas computacionais utilizados no ensino de lógica, linguagens e paradgimas de programação. Os enunciados dos problemas têm origem em livros, artigos e sites de diversos autores. Selecione o problema e acesse a solução.


## Problemas


### [Problema 1](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0001)

Desenvolva um programa que leia dois números inteiros referentes aos lados de uma figura geométrica. O programa deve informar se os dados formam um quadrado ou um retângulo.

### [Problema 2](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0002)

Desenvolva um programa que leia três valores do tipo ponto flutuante e verifique se esses valores formam ou não um triângulo. Caso formem triângulo, o programa deve informar o tipo do triângulo (equilátero, isósceles ou escaleno).

### [Problema 3](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0003)

Desenvolva um programa que apresente os números de 1 a 100 na mesma linha, em ordem crescente.

### [Problema 4](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0004)

Desenvolva um programa que apresente os números de 1 a 100 na mesma linha, em ordem decrescente.

### [Problema 5](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0005)

Desenvolva um programa que leia um valor inteiro N. Este N indica a quantidade de linhas de saída que serão apresentadas na execução do programa. Observando a tela e saída, apresentada abaixo, descubra a lógica da brincadeira e elabore o programa.

![I/O screen](https://github.com/ednilsonrossi/Problems_and_Solutions/blob/main/assets/problem_0005.png?raw=true)

### [Problema 6](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0006)

Dois números são ditos amigáveis, se cada um deles é igual à soma dos divisores próprios do outro. Por exemplo, 284 e 220 são amigáveis, pois a soma dos divisores próprios de 220 dá 284, ao passo que a soma dos divisores próprios de 284 é 220. Desenvolva um programa que receba um número inteiro qualquer e verifique se este possui um número amigável.

### [Problema 7](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0007)

Desenvolva um programa para ler N valores inteiros, sendo N fornecido pelo usuário. Calcule e mostre: O maior valor negativo; O menor valor positivo.

### [Problema 8](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0008)

Desenvolva um programa que calcule o fatorial de um número inteiro fornecido pelo usuário.

### [Problema 9](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0009)

Desenvolva um projeto para gerenciar dados de filmes. 

Sabe-se que os dados armazenados são:

- Filme [título, Diretor, elenco (vários atores), ano de lançamento, nota (de 0 a 5) ]
- Diretor [nome]
- Ator [nome, ano de nascimento]

Os requisitos funcionais são:

- **Adicionar filme:** O usuário informa título, nome do diretor, nome de todos atores do elenco, ano de lançamento e nota. O sistema deve armazenar os dados do filme.
- **Listar todos os filmes:** O usuário solicita a apresentação da lista de todos os filmes já cadastrados.
- **Listar diretores:** O usuário solicita a apresentação da lista de diretores cadastrados.
- **Lista de atores:** O usuário solicita a apresentação da lista de atores cadastrados.
- **Listar filmes de um diretor:** O usuário seleciona um diretor e o sistema apresenta uma lista com todos os filmes dirigidos pelo diretor selecionado.
- **Listar filmes de um ator:** O usuário seleciona um ator e o sistema apresenta uma lista com todos os filmes em que o ator fez parte do elenco.
- **Listar filmes por nota:** o usuário informa uma nota e o sistema apresenta uma lista com os filmes com nota igual ou superior à informada.

### [Problema 10](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0010)

Desenvolva um sistema simples de gerenciamento de usuários e login. A aplicação deve simular o acesso a um banco de dados por meio de listas em memória. Deve-se utilizar no desenvolvimento os padrões Singleton e DAO.

O sistema possui uma entidade User com os seguintes atributos: userId, username, e-mail, password. 

São requisitos funcionais do sistema:

1. Inclusão de novos usuários no sistema. Não é permitido o uso de username e/ou e-mail repetidos no sistema. O usuário deve ser informado se a inclusão foi realizada ou não.
2. Recuperar a senha. A funcionalidade de recuperar a senha permite que o usuário troque a senha atual por uma nova. O usuário informa seu username e seu e-mail, caso os dados estejam corretos ele poderá gerar uma nova senha.
3. Fazer login. O usuário informa username e senha, caso os dados estejam corretos é apresentada a mensagem de sucesso de login, caso contrário o usuário recebe informação de erro.

### [Problema 11](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0011)

Crie uma classe USMoney com dois atributos inteiros: dollars e cents. Adicione um construtor com dois parâmetros para a inicialização do objeto USMoney. O construtor deve verificar se o valor de cents está entre 0 e 99 e,  se não estiver, transferir alguns dos cents para o atributo dollars para que ela passe a ter entre 0 e 99.

Implemente um método plus() que recebe um objeto USMoney como argumento. Esse método deve criar e retornar um novo objeto USMoney representando a soma dos objeto cujo método plus() está sendo chamado mais o argumento, sem modificar os valores dos dois objetos já existentes.

Deve-se assegurar que o valor do atributo cents do novo objeto esteja entre 0 e 99. Por exemplo, se x for um objeto USMoney com 5 dollars e 80 cents e se y for um objeto USMoney de 1 dollar e 90 cents, x.plus(y) retornará um novo objeto USMoney com 7 dollars e 70 cents.

### [Problema 12](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0012)

Implemente a classe Carta que representa a carta de um baralho. Essa classe possui como atributos o inteiro valor (representa o valor da carta de 1 a 13) e o caractere naipe (‘P’ paus, ‘C’ copas, ‘O’ ouros e ‘E’ espadas).

Deve-se implementar um construtor que receba os dois argumentos e valide-os garantindo que o objeto carta instanciado é válido. Implemente também os métodos de acesso e modificadores. Implemente a classe CartaTeste que possui o método principal.

O main() deve instanciar 5 cartas com dados fornecidos pelo usuário e verificar se as cartas formam um full house (isto é, três cartas com o mesmo valor e  outras duas com valores iguais). Caso formem um full house, apresente as 5 cartas usando o método toString() de cada uma delas (personalize para que seja apresentado o naipe e o valor de cada carta), caso não forme full house, apresente uma mensagem de consolação.

### [Problema 13](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0013)

Uma empresa de ônibus deseja informatizar seu sistema e registrar seus passageiros em cada viagem. Existem três tipos de passageiros: __regular__, que paga a tarifa inteira da viagem; __estudante__, que paga metade do valor da passagem; e __aposentado__ que não paga passagem. Dos passageiros regulares deseja-se armazenar apenas o nome. Dos estudantes deseja-se armazenar o nome, registro acadêmico e nome da escola. Por fim, dos aposentados deseja-se armazenar o nome, ano de nascimento e RG.

Deve-se implementar os seguintes métodos para os passageiros:

- Construtores: de acordo com os dados de cada tipo de passageiro;
- Métodos modificadores e de acesso de acordo com os atributos;
- Método double getValorPagamento(double tarifa) → método recebe como argumento o valor da tarifa inteira da viagem e retorna o valor que será pago pelo passageiro;
- Método String toString() que apresenta os dados dos passageiros, incluindo o valor do pagamento.

Sabendo que o ônibus possui capacidade máxima de 40 passageiros, implemente um sistema que:

- Permita o cadastro dos passageiros em um arranjo único. Observe que o usuário irá informar apenas os dados das passagens vendidas, ou seja, não necessariamente o ônibus está cheio em todas as viagens.
- Permita a consulta da quantidade de passageiros de cada tipo durante o uso do sistema.
- Apresente o valor faturado (faturamento bruto) da viagem.
- Apresente o valor do lucro ou prejuízo da viagem, de acordo com o custo da viagem informado pelo usuário.

### [Problema 14](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0014)

Desenvolva um sistema orientado a objetos que gerencie tarefas, utilizando o padrão arquitetural MVC (Model-View-Controller). O sistema deve possibilitar a inclusão de novas tarefas e a marcação de uma tarefa como concluída. Cada tarefa, representada pela entidade 'Tarefa', possui uma descrição e um indicador que especifica se a tarefa foi concluída ou não.

### [Problema 15](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0015)

Desenvolva um programa que receba um número e apresente como resultado o número elevado ao quadrado e o número elevado ao cubo.

### [Problema 16](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0016)

Desenvolva um programa que calcule a apresente o valor do volume de uma caixa retangular usando a fórmula:
VOLUME <- COMPRIMENTO  x LARGURA x ALTURA

### [Problema 17](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0017)

Alan e Cristiano irão viajar para no fim de semana. Sabe-se que seu automóvel faz em média 12 quilômetros por litro de combustível. Eles desejam saber quantos litros de combustível gastarão na viagem.

Para realizar o cálculo, o usuário deverá fornecer o TEMPO gasto na viagem e a VELOCIDADE MÉDIA durante a viagem.

O programa deve apresentar como resultado:

- A velocidade média;
- Tempo gasto na viagem;
- Distância percorrida;
- Quantidade de litros consumidos.

### [Problema 18](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0018)

Uma locadora de charretes cobra R$ 8,50 de taxa para cada 3 horas de uso destas e R$ 3,50 para cada hora abaixo destas 3 horas.

Desenvolva um programa que, dado a quantidade de horas que a charrete foi usada, calcule e escreva quanto o cliente tem de pagar.

Exemplos:

- Utilização 2 horas, pagar R$ 7,00;
- Utilização 3 horas, pagar R$ 8,50;
- Utilização 5 horas, pagar R$ 15,50.

### [Problema 19](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0019)

Desenvolva um programa que lê um valor em reais (R$) e calcule qual o menor número possível de notas (cédulas) de 100, 50, 10, 5 e 1 em que o valor lido pode ser decomposto. Escrever o valor lido e a relação de notas necessárias.

### [Problema 20](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0020)

Desenvolva um programa que lê o valor de uma compra em dólares, a taxa do dólar no dia da compra, o percentual de ICMS e o percentual de lucro da empresa; e que calcule e escreva o valor a ser pago em reais, sabendo-se que o percentual de lucro e o percentual de ICMS incidem sobre o valor em reais.

### [Problema 21](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0021)

Um hotel com 42 apartamentos resolveu fazer promoções para os fins de semana fora da alta temporada, isto é, nos meses de abril, maio, junho, agosto, setembro, outubro e novembro. A taxa da promoção é de 22% da diária normal. A ocupação média do hotel sem promoção é de 40%. A expectativa é aumentar a taxa de ocupação para 70%. Supondo que as expectativas se confirmem, desenvolver um programa que lê a diária normal, que calcule e escreva as seguintes informações: 

(a) O valor da diária no período da promoção. 
(b) O valor médio arrecadado sem a promoção, durante um mês. 
(c) O valor médio arrecadado com a promoção, durante um mês. 
(d) O lucro ou prejuízo mensal com a promoção.

### [Problema 22](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0022)

Desenvolva um programa que lê o público total de uma partida de futebol e forneça a renda do jogo, sabendo-se que havia 4 tipos de ingressos assim distribuídos: popular - 10% a R$ 1,00, geral - 50% a R$ 5,00, arquibancada - 30% a R$ 10,00 e cadeiras - 10% a R$ 20,00.

### [Problema 23](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0023)

Uma autolocadora aluga seus carros com uma taxa fixa por dia, uma taxa por km rodado e desconto de 10% na taxa fixa de aluguel por dia. Desenvolva um programa que leia a taxa fixa por dia, a taxa por km rodado, o número de dias e o número de quilômetros rodados. Deve também calcular e escrever o valor total do aluguel, o valor do desconto, o número de dias e a quilometragem rodada.

### [Problema 24](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0024)

Desenvolver um programa que leia a taxa de potência de um refrigerador, o tempo que permaneceu ligado, o valor do quilowatt hora e que calcule e escreva a energia total gasta pelo refrigerador, bem como o valor a ser pago à companhia de Energia Elétrica.

### [Problema 25](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0025)

Desenvolver um programa que, dado 4 notas de provas, a b, c, e d, calcule e escreva o valor das seguintes médias:

![Aritmética](https://github.com/ednilsonrossi/Problems_and_Solutions/blob/main/assets/problem_0025_A.png?raw=true)

![Quadrática](https://github.com/ednilsonrossi/Problems_and_Solutions/blob/main/assets/problem_0025_B.png?raw=true)

![Harmônica](https://github.com/ednilsonrossi/Problems_and_Solutions/blob/main/assets/problem_0025_C.png?raw=true)

### [Problema 26](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0026)

Desenvolva um programa que calcule o valor em R$, gasto por um fumante. Dados: o número de anos que ele fuma, o número de cigarros consumidos por dia e o preço de um maço de cigarros. Leve em consideração que um maço de cigarros possui 20 cigarros.

### [Problema 27](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0027)

O coração humano bate em média uma vez por segundo. Desenvolva um programa para calcular e escrever quantas vezes o coração de uma pessoa baterá se viver X anos. Dado de entrada: idade da pessoa (inteiro em anos). Considerações: 1 ano = 365,25 dias, 1 dia = 24 horas, 1 hora = 60 minutos e 1 minuto = 60 segundos.

### [Problema 28](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0028)

Desenvolva um programa que leia um número inteiro qualquer. O programa deve apresentar o duplo antecessor, o antecessor, o número lido, o sucessor e o duplo sucessor. Por exemplo, se o número lido for 5, deve-se apresentar a seguinte lista de números: 3, 4, 5, 6, 7.

Para solucionar o problema deve-se utilizar as seguintes (somente essas) funções:

- int antecessor(int numero);
- int sucessor(int numero);

### [Problema 29](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0029)

Desenvolva um programa que leia uma data no formado ddmmaaaa, em apenas um número inteiro. O programa deve apresentar a data no formato dd/mm/aaaa.

Para solucionar o problema deve-se utilizar as seguintes funções:

- int obtem_dia(int datacompleta);
- int obtem_mes(int datacompleta);
- int obtem_ano(int datacompleta);

### [Problema 30](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0030)

Uma fábrica de camisetas produz camisetas nos tamanhos pequeno, médio e grande e cada uma é vendida, respectivamente por R$10.00, R$12.00 e R$15.00. Desenvolva um programa no qual o usuário forneça a quantidade de camisetas pequenas, médias e grandes referentes a uma venda. O programa deve calcular e mostrar o valor total da venda e o valor total da venda com um desconto de 25%. Todos os cálculos devem ser realizados em funções.

### [Problema 31](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0031)

Desenvolva um programa que leia um número inteiro de três algarismos, apresente a soma entre o número e o inverso deste número. Exemplo: número = 123, inverso = 321, soma = 444. Deve-se utilizar as seguintes funções:

- int inverter(int numero);
- int soma(int a, int b);

### [Problema 32](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0032)

Desenvolva um programa para ler um número inteiro de 3 algarismos e construir e mostrar outro número de 4 algarismos de acordo com a seguintes regras:
a. Os três primeiros algarismos, contados da esquerda para direita são iguais aos do número dado.
b. O quarto algarismo é um dígito de controle calculado da seguinte forma: primeiro algarismo + segundo algarismo x 3 + terceiro algarismo x 5; o digito de controle é igual ao resto da divisão dessa soma por 7.

Deve-se utilizar as seguintes funções:

- int digito_verificador(int numero);
- int numero_quatro_algarismos(int numero);

Observe que a função numero_quatro_algarismos() devolve o número final calculado usando a função digito_verificador().

### [Problema 33](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0033)

Desenvolva um programa que calcule a [média ponderada](https://brasilescola.uol.com.br/matematica/media-ponderada.htm) de um aluno. Sabe-se que o peso das notas são: 

- nota 1 com peso 5;
- nota 2 com peso 7;
- nota 3 com peso 3.

O programa deve obter as notas e calcular a mostrar a média do aluno.

### [Problema 34](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0034)

Desenvolva um programa para ler o número de votos brancos, nulos e válidos. Calcular e escrever o total de votos (total de eleitores) e o percentual que cada um representa em relação ao total de eleitores.

### [Problema 35](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0035)

Pedro comprou um saco de ração com peso em quilos. Pedro possui dois gatos para os quais fornece, diariamente, a quantidade de ração,  em gramas. Desenvolva um programa que receba o peso do saco de ração e a quantidade de ração fornecida para cada gato. Calcule e mostre quanto restará de ração no saco após 5 dias.

### [Problema 36](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0036)

Um motorista de táxi deseja calcular o rendimento de seu carro na praça. Sabendo-se que o preço do combustível é de R$3,82 faça um programa para ler a marcação do odômetro no início do dia, a marcação do odômetro no final do dia, o número de litros de combustível gastos e o valor total (R$) recebido dos passageiros. Desenvolva um programa para calcular e escrever a média do consumo em km/l e o lucro líquido do dia.

### [Problema 37](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0037)

Três amigos, Carlos, André e Felipe decidiram rachar igualmente a conta de um bar. Desenvolva  um programa para ler o valor total da conta, calcular e mostrar quanto cada um deve pagar, mas faça com que Carlos e André não paguem centavos. Ex.: uma conta de R$101,53 resulta em R$33,00 para Carlos, R$33,00 para André e R$35,53 para Felipe. 

### [Problema 38](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0038)

Desenvolva um programa para ler o ano de nascimento de uma pessoa e o ano atual. Calcular e mostrar os itens a seguir.

- A idade dessa pessoa, após seu aniversário no ano atual;
- A idade dessa pessoa no ano de 2052.

### [Problema 39](https://github.com/ednilsonrossi/Problems_and_Solutions/tree/main/solutions/problem_0039)

Desenvolva um programa que leia um valor inteiro referente ao tempo de duração em segundos de um determinado evento. O programa deve informar o tempo expresso no formato horas:minutos:segundos.
