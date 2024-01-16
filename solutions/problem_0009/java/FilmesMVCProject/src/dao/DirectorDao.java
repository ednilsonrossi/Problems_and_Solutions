package dao;

import model.Director;

import java.util.ArrayList;
import java.util.List;

public class DirectorDao implements Dao<Director, String> {

    private static DirectorDao instance;
    private final List<Director> dataset;

    private DirectorDao() {
        dataset = new ArrayList<>();
    }

    public static DirectorDao getInstance() {
        if (instance == null) {
            instance = new DirectorDao();
        }
        return instance;
    }

    @Override
    public boolean create(Director element) {
        var search = retrieve(element.getName());
        if (search == null) {
            dataset.add(element);
            return true;
        }
        return false;
    }

    @Override
    public List<Director> retrieve() {
        return dataset;
    }

    @Override
    public Director retrieve(String key) {
        for (Director director : dataset) {
            if (director.getName().equals(key)) {
                return director;
            }
        }
        return null;
    }

    @Override
    public boolean update(Director element) {
        /* Como o único atributo de Diretor é a própria chave de busca,
         * os dados não são atualizados.
         */
        return false;
    }

    @Override
    public boolean delete(String key) {
        var director = retrieve(key);
        if (director != null)
            return dataset.remove(director);
        return false;
    }
}
