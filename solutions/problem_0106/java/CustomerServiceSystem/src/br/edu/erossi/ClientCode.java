package br.edu.erossi;

import javax.swing.JOptionPane;

public class ClientCode {

	private static final String TITLE = "Controle de Atendimento INOO";
	
	public static void main(String[] args) {
		
		ManageService manager = new ManageService();
		
		String output = "";
		int option;
		
		do {
			option = options();
			if (option == 1) {
				output = manager.includeClient(false);
			} else if (option == 2) {
				output = manager.includeClient(true);
			} else if (option == 3) {
				Counter counter = readConter();
				output = manager.callClient(counter);
			} else {
				output = "Obrigado por utilizar um sistema INOO";
			}
			
			showMessage(output);
		} while (option != 0);

	}

	private static void showMessage(String output) {
		JOptionPane.showMessageDialog(null, 
				output,
				TITLE,
				JOptionPane.INFORMATION_MESSAGE);
	}

	private static Counter readConter() {
		String input = JOptionPane.showInputDialog(null,
				"Número do Caixa:",
				TITLE,
				JOptionPane.QUESTION_MESSAGE);
		
		int number = Integer.parseInt(input);
		
		int counterType = JOptionPane.showConfirmDialog(null,
				"É um caixa de atendimento proferencial?",
				TITLE,
				JOptionPane.YES_NO_OPTION);
		
		if (counterType == 0) {
			return new PriorityCounter(number);
		} else {
			return new Counter(number);
		}
		
	}

	private static int options() {
		Object optionArr[] = {
				"Nova senha normal",
				"Nova senha preferencial",
				"Chamar cliente",
				"Encerrar o sistema"
		};
		
		String response = (String) JOptionPane.showInputDialog(null,
				"Selecione uma opção no menu",
				TITLE,
				JOptionPane.QUESTION_MESSAGE,
				null,
				optionArr,
				optionArr[2]);
		
		if (optionArr[0].equals(response)) {
			return 1;
		} else if (optionArr[1].equals(response)) {
			return 2;
		} else if (optionArr[2].equals(response)) {
			return 3;
		} else {
			return 0;
		}
	}

}
