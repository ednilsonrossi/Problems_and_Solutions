package dto;

import model.Actor;

public class ActorDto {
    private String name;
    private int yearOfBirth;
    private int age;

    public ActorDto(String name, int yearOfBirth, int age) {
        this.name = name;
        this.yearOfBirth = yearOfBirth;
        this.age = age;
    }

    public ActorDto(Actor actor){
        this.name = actor.getName();
        this.yearOfBirth = actor.getYearOfBirth();
        this.age = actor.getAge();
    }

    public Actor toModelDomain(){
        return new Actor(
                getName(),
                getYearOfBirth()
        );
    }

    public String getName() {
        return name;
    }

    public int getYearOfBirth() {
        return yearOfBirth;
    }

    public int getAge() {
        return age;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setYearOfBirth(int yearOfBirth) {
        this.yearOfBirth = yearOfBirth;
    }

    public void setAge(int age) {
        this.age = age;
    }
}
