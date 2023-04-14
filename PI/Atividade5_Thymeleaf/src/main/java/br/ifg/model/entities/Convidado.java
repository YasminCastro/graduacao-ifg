package br.ifg.model.entities;

import java.util.Objects;

public class Convidado {
	
	private long id;
	private String nome;
	private String tipo;
	private long qtd;
	
	public Convidado() {
		super();		
	}
	
	public Convidado(long id, String nome, String tipo, long qtd) {		
		this.id = id;
		this.nome = nome;
		this.tipo = tipo;
		this.qtd = qtd;
	}	
	
	public Convidado(String nome, String tipo, long qtd) {		
		this.nome = nome;
		this.tipo = tipo;
		this.qtd = qtd;
	}

	public long getId() {
		return id;
	}

	public void setId(long id) {
		this.id = id;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getTipo() {
		return tipo;
	}

	public void setTipo(String tipo) {
		this.tipo = tipo;
	}

	public long getQtd() {
		return qtd;
	}

	public void setQtd(long qtd) {
		this.qtd = qtd;
	}

	@Override
	public int hashCode() {
		return Objects.hash(id);
	}

	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		Convidado other = (Convidado) obj;
		return id == other.id;
	}

	@Override
	public String toString() {
		return "Convidado [id=" + id + ", nome=" + nome + ", tipo=" + tipo + ", qtd=" + qtd + "]";
	}

	
	

	
	

}
