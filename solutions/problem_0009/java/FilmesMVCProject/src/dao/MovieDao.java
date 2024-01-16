package dao;

import model.Movie;

import java.util.ArrayList;
import java.util.List;

public class MovieDao implements Dao<Movie, String> {

    private static MovieDao instante;
    private final List<Movie> dataset;

    private MovieDao() {
        dataset = new ArrayList<>();
    }

    public static MovieDao getInstance() {
        if (instante == null) {
            instante = new MovieDao();
        }
        return instante;
    }

    @Override
    public List<Movie> retrieve() {
        return dataset;
    }

    @Override
    public boolean create(Movie element) {
        var movie = retrieve(element.getTitle());
        if (movie == null) {
            return dataset.add(element);
        }
        return false;
    }

    @Override
    public Movie retrieve(String key) {
        for (Movie movie : dataset) {
            if (movie.getTitle().equals(key)) {
                return movie;
            }
        }
        return null;
    }

    @Override
    public boolean update(Movie element) {
        var movie = retrieve(element.getTitle());
        if (movie != null) {
            movie.setYear(element.getYear());
            movie.setMark(element.getMark());
            movie.setDirector(element.getDirector());
            movie.setActors(element.getActors());
            return true;
        }
        return false;
    }

    @Override
    public boolean delete(String key) {
        var movie = retrieve(key);
        return dataset.remove(movie);
    }
}
