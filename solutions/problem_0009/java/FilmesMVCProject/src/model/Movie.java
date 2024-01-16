package model;

import java.util.List;

public class Movie {
    private String title;
    private int year;
    private int mark;

    //Composition attributes
    private Director director;
    private List<Actor> actors;

    public Movie(String title, int year, int mark, Director director, List<Actor> actors) {
        this.title = title;
        this.year = year;

        /*
         * Conforme regra de negócio, a nota deve ser de 0 até 5. No caso, se a nota recebida for inválida,
         * é atribuída a nota zero ao filme
         */
        this.mark = validateMark(mark) ? mark : 0;

        this.director = director;
        this.actors = actors;
    }

    public String getTitle() {
        return title;
    }

    public void setTitle(String title) {
        this.title = title;
    }

    public int getYear() {
        return year;
    }

    public void setYear(int year) {
        this.year = year;
    }

    public int getMark() {
        return mark;
    }

    public void setMark(int mark) {
        /*
         * Conforme regra de negócio, a nota deve ser de 0 até 5. No caso, se a nota recebida for inválida,
         * é atribuída a nota zero ao filme
         */
        this.mark = validateMark(mark) ? mark : getMark();
    }

    public Director getDirector() {
        return director;
    }

    public void setDirector(Director director) {
        this.director = director;
    }

    public List<Actor> getActors() {
        return actors;
    }

    public void setActors(List<Actor> actors) {
        this.actors = actors;
    }

    @Override
    public String toString() {
        return "Movie{" +
                "title='" + title + '\'' +
                ", year=" + year +
                ", mark=" + mark +
                ", director=" + director +
                ", actors=" + actors +
                '}';
    }

    private boolean validateMark(int mark){
        return mark >= 0 && mark <= 5;
    }
}
