package repository;

import dao.MovieDao;
import model.Actor;
import model.Director;
import model.Movie;

import java.util.ArrayList;
import java.util.List;

public class MovieRepository {

    private final MovieDao dao;

    public MovieRepository() {
        dao = MovieDao.getInstance();
    }

    public void save(Movie movie) {
        if (movie != null) {
            dao.create(movie);
        }
    }

    public List<Movie> findAll() {
        return dao.retrieve();
    }

    public List<Movie> findByDirector(Director director) {
        List<Movie> filter = new ArrayList<>();
        for (Movie movie : dao.retrieve()) {
            if (movie.getDirector().getName().equals(director.getName())) {
                filter.add(movie);
            }
        }
        return filter;
    }

    public List<Movie> findByActor(Actor actor) {
        List<Movie> filter = new ArrayList<>();
        for (Movie movie : dao.retrieve()) {
            for (Actor a : movie.getActors()){
                if(a.getName().equals(actor.getName())){
                    filter.add(movie);
                }
            }
        }
        return filter;
    }

    public List<Movie> findByMark(int mark) {
        List<Movie> filter = new ArrayList<>();
        for (Movie movie : dao.retrieve()) {
            if (movie.getMark() >= mark){
                filter.add(movie);
            }
        }
        return filter;
    }
}
