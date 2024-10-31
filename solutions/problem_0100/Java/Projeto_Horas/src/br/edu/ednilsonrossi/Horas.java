package br.edu.ednilsonrossi;

public class Horas {
	private final int dayInSeconds = 86399;		// 86399s == 1 dia
	private final int hoursInSeconds = 3600;	// 3600s == 1 hora 
	private final int minutesInSeconds = 60;	// 60s == 1 minuto
	private int seconds;
	
	public Horas() {
		this.seconds = 0;
	}
	
	private Horas(int hours) {
		this();
		if (hours >= 0 && hours <= 23) {
			this.seconds += hours * hoursInSeconds; 
		}
	}
	
	private Horas(int hours, int minutes) {
		this(hours);
		if (minutes >= 0 && minutes <= 59) {
			this.seconds += minutes * minutesInSeconds;	// 60s == 1 minuto
		} else {
			this.seconds = 0;
		}
	}
	
	public Horas(int hours, int minutes, int seconds) {
		this(hours, minutes);
		if (seconds >= 0 && seconds <= 59) {
			this.seconds += seconds;
		} else {
			this.seconds = 0;
		}
	}
	
	public int getHoras() {
		return this.seconds / hoursInSeconds;
	}
	
	public int getMinutos() {
		return (this.seconds - getHorasEmSegundos()) / minutesInSeconds;
	}
	
	public int getSegundos() {
		return this.seconds - getHorasEmSegundos() - getMinutosEmSegundos();
	}
	
	public Horas addHoras(Horas horas) {
		Horas resultado = new Horas();
		resultado.seconds = this.seconds + horas.seconds;
		if (resultado.seconds > dayInSeconds) {
			resultado.seconds -= dayInSeconds * (resultado.seconds / dayInSeconds);
		}
		return resultado;
	}
	
	public String toString() {
		return String.format("%02d:%02d:%02d", 
				getHoras(),
				getMinutos(),
				getSegundos());
	}
	
	private int getHorasEmSegundos() {
		return getHoras() * hoursInSeconds;
	}
	
	private int getMinutosEmSegundos() {
		return getMinutos() * minutesInSeconds;
	}
}









