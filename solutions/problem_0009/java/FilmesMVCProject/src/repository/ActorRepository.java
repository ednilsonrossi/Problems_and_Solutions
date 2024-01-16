package repository;

import dao.ActorDao;
import model.Actor;

import java.util.List;

public class ActorRepository {

    private final ActorDao dao;

    public ActorRepository() {
        dao = ActorDao.getInstance();
    }

    public void save(Actor actor){
        if(actor != null){
            dao.create(actor);
        }
    }

    public List<Actor> findAll(){
        return dao.retrieve();
    }

    public Actor findByName(String actorName){
        return dao.retrieve(actorName);
    }
}
