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
