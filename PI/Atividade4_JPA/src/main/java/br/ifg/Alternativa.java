package br.ifg;

public class Alternativa {
	
	private int id;
	private String nome;	
	private int votos;
	
	public Alternativa() {	
		super();
		this.votos = 0;
	}
	
	public Alternativa(int numero, String nome) {	
		this.id = numero;
		this.nome = nome;
		this.votos = 0;
	}
	
	public int getId() {
		return id;
	}
	public void setId(int numero) {
		this.id = numero;
	}
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	
	public void adicionaVoto() {
		this.votos++;
	}

	public int getVotos() {
		return votos;
	}	
	
	protected int zerarVotos() {
		return this.votos = 0;
	}

}
