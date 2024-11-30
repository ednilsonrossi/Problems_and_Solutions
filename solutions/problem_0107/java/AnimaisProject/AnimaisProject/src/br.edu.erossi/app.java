import java.util.Random;

public class app {
    
    public static void main(String[] args) {
        
        Random random = new Random();
        Animal animal;

        for (int i = 0; i < 100; i++) {
            if (random.nextInt(2) == 0) {
                animal = new Cachorro("Totó");
            } else {
                animal = new Gato("Marie");
            }
            System.out.println(animal.emiteSom());
        }

    }

}
