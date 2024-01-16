package view;

public enum MenuOption {
    SAIR(0),
    CADASTRO(1),
    LISTAR_TODOS(2),
    LISTAR_DIRETORES(3),
    LISTAR_ATORES(4),
    FILME_POR_DIRETOR(5),
    FILMES_POR_ATOR(6),
    FILMES_POR_NOTA(7);

    private final int value;

    MenuOption(int value) {
        this.value = value;
    }

    public int getValue() {
        return value;
    }

}
