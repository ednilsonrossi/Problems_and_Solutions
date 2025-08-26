# Problema 109: Estrutura de dados

Nesta solução o objetivo é o foco no uso de Tipo Abstrato de Dados (TAD) a partir de seu princípio básico: __alterações no TAD são realizadas exclusivamente pelas operações do TAD__.

## Estratégia de Solução

1. Definição de um TAD Ticket para representar a senha de atendimento. Esse TAD armazena um número e se a senha é ou não preferencial. Com esses dados é possível gerar a apresentação do ticket com a operação toString(). O tipo de dado foi nomeado de T_Ticket.
2. Definição de um TAD para representar o caixa ou guichê de atendimento. São armazenados o número do caixa e se ele é destinado ao atendimento de clientes com a senha prioritária. O tipo de dado foi nomeado de T_Counter.
3. Definição do TAD para representar uma fila. As operações de fila estão implementadas considerando o armazenamento estático (vetor )