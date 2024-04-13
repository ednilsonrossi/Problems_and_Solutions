package controller;

import model.Rational;
import view.AverageRationalView;

public class Controller {

    private AverageRationalView view;

    public Controller(AverageRationalView view){
        if(view == null)
            throw new IllegalArgumentException("View argument can not be null.");
        this.view = view;
    }

    /**
     * Método fará a leitura de vários racionais, considerando como estratégia a solicitação do usuário
     * para encerrar a leitura. São lidos e somados diversos números racionais e a média aritmética
     * é obtida pela divisão da soma dos racionais pela quantidade de racionais, aplicando a propriedade
     * dos racionais sendo:
     *
     * soma_numerador                 1
     * ----------------    X    ---------------
     * soma_denominador           quantidade
     */
    public void average(){
        Rational number, sum, average;
        int quantity;

        quantity = 0;
        sum = Rational.of(0, 1);
        do{
            number = view.readRational();
            sum = sum.sum(number);
            quantity++;
        }while (!view.finishReading());

        if (quantity != 0){
            number = Rational.of(1, quantity);
            average = sum.multiplication(number);
            view.showRational("Média: ", average);
        }
    }
}
