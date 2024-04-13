import controller.Controller;
import view.AverageRationalViewImpl;

public class Main {
    public static void main(String[] args) {
        Controller controller = new Controller(new AverageRationalViewImpl());
        controller.average();
    }
}
