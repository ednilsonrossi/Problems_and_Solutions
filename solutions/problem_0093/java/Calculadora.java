public class Calculadora {

    public int soma(int arg1, int arg2) {
        return arg1 + arg2;
    }

    public int multiplicacao(int arg1, int arg2) {
        return sucessiveSum(arg1, arg2);
    }

    private int sucessiveSum(int base, int multiplier) {
        int result = base;
        for (int i = 1; i != multiplier; i++) {
            result += base;
        }
        return result;

    }

    public static void main(String[] args) {
        Calculadora calc = new Calculadora();
        int a = 5;
        int b = 8;

        System.out.println(a + " + " + b + " = " + calc.soma(a, b) );
        System.out.println(a + " x " + b + " = " + calc.multiplicacao(a, b) );
    }
}