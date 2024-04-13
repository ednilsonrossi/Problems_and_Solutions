package model;

public class RationalUtil {

    public static int mdc(int value_1, int value_2){
        int rest;
        do{
            rest = value_1 % value_2;
            value_1 = value_2;
            value_2 = rest;
        } while (rest != 0);
        return  value_1;
    }

}
