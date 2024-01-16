package controller;

import model.Director;
import repository.DirectorRepository;

import java.util.ArrayList;
import java.util.List;

public class DirectorController {

    private final DirectorRepository repository;

    public DirectorController(){
        repository = new DirectorRepository();
    }

    public List<String> allDirectors(){
        List<String> directorsNames = new ArrayList<>();
        for(Director director : repository.findAll()){
            directorsNames.add(director.getName());
        }

        return directorsNames;
    }
}
