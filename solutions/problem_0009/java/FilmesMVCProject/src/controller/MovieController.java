package controller;

import dto.MovieDto;
import model.Actor;
import model.Director;
import model.Movie;
import repository.ActorRepository;
import repository.DirectorRepository;
import repository.MovieRepository;

import java.util.ArrayList;
import java.util.List;

public class MovieController {

    private final MovieRepository movieRepository;
    private final DirectorRepository directorRepository;
    private final ActorRepository actorRepository;

    public MovieController(){
        movieRepository = new MovieRepository();
        directorRepository = new DirectorRepository();
        actorRepository = new ActorRepository();
    }

    public boolean save(MovieDto movieDto){
        var movie = movieDto.toDomain();

        var director = movie.getDirector();
        directorRepository.save(director);

        for(Actor a : movie.getActors()){
            actorRepository.save(a);
        }

        movieRepository.save(movie);
        return true;
    }

    public List<MovieDto> getAllMovies(){
        List<Movie> movies = movieRepository.findAll();
        List<MovieDto> moviesDto = new ArrayList<>();
        for(Movie movie : movies){
            moviesDto.add(new MovieDto(movie));
        }
        return moviesDto;
    }

    public List<MovieDto> getMoviesFromDirector(String directorName){
        List<MovieDto> moviesDto = new ArrayList<>();
        for(Movie movie : movieRepository.findByDirector(new Director(directorName))){
            moviesDto.add(new MovieDto(movie));
        }
        return moviesDto;
    }

    public List<MovieDto> getMoviesFromActor(String actorName){
        List<MovieDto> moviesDto = new ArrayList<>();
        for(Movie movie : movieRepository.findByActor(new Actor(actorName, 0))){
            moviesDto.add(new MovieDto(movie));
        }
        return moviesDto;
    }

    public List<MovieDto> getMoviesFromMark(int minimumMark){
        List<MovieDto> moviesDto = new ArrayList<>();
        for(Movie movie : movieRepository.findByMark(minimumMark)){
            moviesDto.add(new MovieDto(movie));
        }
        return moviesDto;
    }
}
