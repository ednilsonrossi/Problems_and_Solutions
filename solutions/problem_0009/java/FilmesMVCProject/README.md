# FILMES MVC PROJECT

Este projeto é um exemplo didático do uso do padrão MVC (_model-view-controller_) aplicado a um contexto conhecido pelos estudantes na disciplina Desenvolvimento Orientado a Objetos do CST em Sistemas para Internet do IFSP _Campus_ Araraquara. 

## Requisitos

Considerando os requisitos a seguir, desenvolva um sistema orientado a objetos, em Java, para gerenciar filmes.

As entidades e seus campos que serão armazenadas no sistema são:
- Filme [título, Diretor, elenco (vários atores), ano de lançamento, nota (de 0 a 5) ]
- Diretor [nome]
- Ator [nome, ano de nascimento]

**Requisitos funcionais**

- **Adicionar filme:** O usuário informa título, nome do diretor, nome de todos atores do elenco, ano de lançamento e nota. O sistema deve armazenar os dados do filme.
- **Listar todos os filmes:** O usuário solicita a apresentação da lista de todos os filmes já cadastrados.
- **Listar diretores:** O usuário solicita a apresentação da lista de diretores cadastrados.
- **Lista de atores:** O usuário solicita a apresentação da lista de atores cadastrados.
- **Listar filmes de um diretor:** O usuário seleciona um diretor e o sistema apresenta uma lista com todos os filmes dirigidos pelo diretor selecionado.
- **Listar filmes de um ator:** O usuário seleciona um ator e o sistema apresenta uma lista com todos os filmes em que o ator fez parte do elenco.
- **Listar filmes por nota:** o usuário informa uma nota e o sistema apresenta uma lista com os filmes com nota igual ou superior à informada.

## Comentários da solução

Foram utilizados no projeto os padrões: DAO (_data access object_) e Singleton. Ambos os padrões foram utilizados no contexto de simulação da fonte de dados. A fonte de dados é uma lista em memória mantida por um singleton, enquanto os dados são acessados por um DAO.

O conceito de MVC aplicado consiste na VIEW solicita dados ao CONTROLLER, de forma que VIEW não conhece os dados de negócio e a lógica da aplicação. Os objetos conhecidos por view e controller são do tipo DTO (_data transfer object_). Por sua vez, controller conhece a lógica de negócio, assim acessa o pacote repository para ter acesso a dados. Controller e as demais camadas conhecem a lógica, de forma que trabalham com as classes de model.