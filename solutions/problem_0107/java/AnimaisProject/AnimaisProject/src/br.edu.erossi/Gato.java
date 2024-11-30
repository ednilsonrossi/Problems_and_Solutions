public class Gato extends Animal {

    public Gato (String nome) {
        super(nome);
    }
    
    public String mia() {
        return "miau";
    }

    public String emiteSom() {
        return mia();
    }
}
