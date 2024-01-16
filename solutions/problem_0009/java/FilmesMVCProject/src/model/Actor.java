package model;

import java.time.LocalDate;
import java.time.Period;

public class Actor {
    private String name;
    private int yearOfBirth;

    public Actor(String name, int yearOfBirth) {
        this.name = name;
        this.yearOfBirth = yearOfBirth;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getYearOfBirth() {
        return yearOfBirth;
    }

    public void setYearOfBirth(int yearOfBirth) {
        this.yearOfBirth = yearOfBirth;
    }

    public int getAge() {
        LocalDate today = LocalDate.now();
        LocalDate born = LocalDate.of(yearOfBirth, 1, 1);
        Period period = Period.between(born, today);
        return period.getYears();
    }
}
