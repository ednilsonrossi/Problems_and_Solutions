package view;

import model.Rational;

public interface AverageRationalView{

    void showRational(String messagem, Rational rational);

    Rational readRational();

    boolean finishReading();
}
