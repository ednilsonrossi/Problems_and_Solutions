package controller;

import model.Tarefa;
import view.TarefaView;

import java.util.ArrayList;
import java.util.List;

public class TarefaController {

    private List<Tarefa> tarefas;
    private TarefaView view;

    public TarefaController(TarefaView view){
        this.view = view;
        tarefas = new ArrayList<>();
    }

    public void adicionarTarefa(String descricao){
        var tarefa = new Tarefa(descricao);
        tarefas.add(tarefa);
        view.apresentaMensagem("Adicionado com sucesso.");
    }

    public void concluirTarefa(int posicao){
        posicao--;
        if(posicao >= 0 && posicao < tarefas.size()){
            tarefas.get(posicao).marcarComoConcluida();
            view.apresentaMensagem("Tarefa concluída com sucesso.");
        }else{
            view.apresentaMensagem("Tarefa não está na lista.");
        }
    }

    public void listarTarefas(){
        view.apresentarTarefas(tarefas);
    }
}
