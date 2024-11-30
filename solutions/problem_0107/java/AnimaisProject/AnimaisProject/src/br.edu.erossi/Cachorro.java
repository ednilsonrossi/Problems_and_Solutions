public class Cachorro extends Animal {

    public Cachorro(String nome) {
        super(nome);
    }

    public String late() {
        return "auau";
    }

    public String emiteSom() {
        return late();
    }
}
