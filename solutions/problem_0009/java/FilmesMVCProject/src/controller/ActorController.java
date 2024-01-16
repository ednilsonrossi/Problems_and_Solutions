package controller;

import dto.ActorDto;
import model.Actor;
import repository.ActorRepository;

import java.util.ArrayList;
import java.util.List;

public class ActorController {

    private final ActorRepository repository;

    public ActorController(){
        repository = new ActorRepository();
    }

    public List<ActorDto> getAllActors(){
        List<ActorDto> list = new ArrayList<>();
        for(Actor actor : repository.findAll()){
            list.add(new ActorDto(actor));
        }
        return list;
    }


}
