package atividadePOO_1;

public class Lampada {

	private int estado = 0;

	public void ligar() {
		this.estado = 1;
	}

	public void desligar() {
		this.estado = 0;
	}

	public String mostrarEstado() {

		if (this.estado == 1) {
			return "Lampada est� ligada";
		} else {
			return "Lampada est� desligada";
		}
	}

}
