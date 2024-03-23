public class MyNumber {

    private final int number;
    
    public MyNumber(int number){
        this.number = number;
    }

    public int getNext(){
        return number + 1;
    }

    public int getNumber() {
        return number;
    }

    public int getPrevious(){
        return number - 1;
    }


}
