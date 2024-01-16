package dto;

import model.Actor;
import model.Director;
import model.Movie;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class MovieDto {

    private String title;
    private int year;
    private int mark;
    private String director;
    private List<ActorDto> actors;

    public MovieDto(String title, int year, int mark, String director) {
        this.title = title;
        this.year = year;
        this.mark = mark;
        this.director = director;
        actors = new ArrayList<>();
    }

    public MovieDto(String title, int year, int mark, String director, ActorDto... actorDtos){
        this.title = title;
        this.year = year;
        this.mark = mark;
        this.director = director;
        actors = Arrays.stream(actorDtos).toList();
    }

    public MovieDto(Movie domain){
        this.title = domain.getTitle();
        this.year = domain.getYear();
        this.mark = domain.getMark();
        this.director = domain.getDirector().getName();
        actors = new ArrayList<>(domain.getActors().size());
        for(Actor actor : domain.getActors()){
            actors.add(new ActorDto(actor));
        }
    }

    public Movie toDomain(){
        List<Actor> actorDomainList = new ArrayList<>();
        for(ActorDto actorDto : actors){
            actorDomainList.add(actorDto.toModelDomain());
        }

        Director directorDomain = new Director(director);

        return new Movie(title, year, mark, directorDomain, actorDomainList);
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
        this.mark = mark;
    }

    public String getDirector() {
        return director;
    }

    public void setDirector(String director) {
        this.director = director;
    }

    public List<ActorDto> getActors() {
        return actors;
    }

    public void setActors(List<ActorDto> actors) {
        this.actors = actors;
    }
}
