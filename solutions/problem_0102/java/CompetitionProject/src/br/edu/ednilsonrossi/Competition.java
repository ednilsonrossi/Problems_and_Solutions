package br.edu.ednilsonrossi;

public class Competition {
	private Candidate candidateA;
	private Candidate candidateB;
	private Candidate candidateC;

	private Candidate firstPlace;
	private Candidate secondPlace;
	private Candidate thirdPlace;

	public Competition(Candidate candidateA, Candidate candidateB, Candidate candidateC) {
		this.candidateA = candidateA;
		this.candidateB = candidateB;
		this.candidateC = candidateC;
		classify();
	}

	public Candidate getFirstPlace() {
		return firstPlace;
	}

	public Candidate getSecondPlace() {
		return secondPlace;
	}

	public Candidate getThirdPlace() {
		return thirdPlace;
	}

	private void classify() {
		if (candidateA.getFinalGrade() >= candidateB.getFinalGrade()
				&& candidateA.getFinalGrade() >= candidateC.getFinalGrade()) {
			firstPlace = candidateA;
			if (candidateB.getFinalGrade() > candidateC.getFinalGrade()) {
				secondPlace = candidateB;
				thirdPlace = candidateC;
			} else {
				secondPlace = candidateC;
				thirdPlace = candidateB;
			}
		} else if (candidateB.getFinalGrade() >= candidateA.getFinalGrade()
				&& candidateB.getFinalGrade() >= candidateC.getFinalGrade()) {
			firstPlace = candidateB;
			if (candidateA.getFinalGrade() > candidateC.getFinalGrade()) {
				secondPlace = candidateA;
				thirdPlace = candidateC;
			} else {
				secondPlace = candidateC;
				thirdPlace = candidateA;
			}
		} else {
			firstPlace = candidateC;
			if (candidateA.getFinalGrade() > candidateB.getFinalGrade()) {
				secondPlace = candidateA;
				thirdPlace = candidateB;
			} else {
				secondPlace = candidateB;
				thirdPlace = candidateC;
			}
		}
	}

	public static void main(String[] args) {
		Competition competition;
		competition = new Competition(Candidate.read(), Candidate.read(), Candidate.read());
		System.out.println("Classificação:");
		System.out.println("1º Colocado: " + competition.getFirstPlace());
		System.out.println("2º Colocado: " + competition.getSecondPlace());
		System.out.println("3º Colocado: " + competition.getThirdPlace());
	}
}
