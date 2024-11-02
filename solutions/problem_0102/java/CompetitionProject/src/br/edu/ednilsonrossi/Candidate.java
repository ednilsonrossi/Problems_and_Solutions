package br.edu.ednilsonrossi;

import java.util.Scanner;

public class Candidate {

	private final String name;
	private final int theoretical;
	private final int practical;
	private final int interview;

	public Candidate(String name, int theoretical, int practical, int interview) {
		this.name = name.toUpperCase();
		this.theoretical = checkMark(theoretical);
		this.practical = checkMark(practical);
		this.interview = checkMark(interview);
	}

	public String getName() {
		return name;
	}

	public int getTheoretical() {
		return theoretical;
	}

	public int getPractical() {
		return practical;
	}

	public int getInterview() {
		return interview;
	}

	public double getFinalGrade() {
		return theoretical * 0.3 + practical * 0.4 + interview * 0.3;
	}

	@Override
	public String toString() {
		return "Candidato: " + name + " (teórica=" + theoretical + ", prática=" + practical + ", entrevista="
				+ interview + ") Final: " + getFinalGrade();
	}

	private int checkMark(int mark) {
		if (mark >= 0 && mark <= 100) {
			return mark;
		}
		return 0;
	}

	public static Candidate read() {
		Scanner scanner = new Scanner(System.in);
		String name;
		int n1, n2, n3;

		System.out.println("Candidado: ");
		System.out.println("Nome: ");
		name = scanner.nextLine();
		System.out.println("Avaliação teórica: ");
		n1 = scanner.nextInt();
		System.out.println("Avaliação prática: ");
		n2 = scanner.nextInt();
		System.out.println("Entrevista: ");
		n3 = scanner.nextInt();

		return new Candidate(name, n1, n2, n3);
	}
}
