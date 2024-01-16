package repository;

import dao.DirectorDao;
import model.Director;

import java.util.List;

public class DirectorRepository {

    private final DirectorDao dao;

    public DirectorRepository() {
        dao = DirectorDao.getInstance();
    }

    public void save(Director director){
        if(director != null)
            dao.create(director);
    }

    public List<Director> findAll(){
        return dao.retrieve();
    }
}
