package dao;

import model.Actor;

import java.util.ArrayList;
import java.util.List;

public class ActorDao implements Dao<Actor, String> {

    private static ActorDao instance;
    private final List<Actor> dataset;

    private ActorDao() {
        dataset = new ArrayList<>();
    }

    public static ActorDao getInstance() {
        if (instance == null) {
            instance = new ActorDao();
        }
        return instance;
    }

    @Override
    public boolean create(Actor element) {
        var search = retrieve(element.getName());
        if (search == null) {
            dataset.add(element);
            return true;
        }
        return false;
    }

    @Override
    public List<Actor> retrieve() {
        return dataset;
    }

    @Override
    public Actor retrieve(String key) {
        for (Actor a : dataset) {
            if (a.getName().equals(key)) {
                return a;
            }
        }
        return null;
    }

    @Override
    public boolean update(Actor element) {
        for (Actor actor : dataset) {
            if (actor.getName().equals(element.getName())) {
                actor.setYearOfBirth(element.getYearOfBirth());
                return true;
            }
        }
        return false;
    }

    @Override
    public boolean delete(String key) {
        var toDelete = retrieve(key);
        if (toDelete != null) {
            return dataset.remove(toDelete);
        }
        return false;
    }
}
