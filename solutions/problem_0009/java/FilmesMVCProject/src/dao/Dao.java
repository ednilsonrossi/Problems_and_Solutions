package dao;

import java.util.List;

public interface Dao<T, K> {

    boolean create(T element);

    List<T> retrieve();

    T retrieve(K key);

    boolean update(T element);

    boolean delete(K key);

}
