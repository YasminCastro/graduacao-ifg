package br.ifg;


public class Categoria {

	Integer qtde;
	private String nome;
	
	
	public Categoria(Integer qtde, String nome) {
		super();
		this.qtde = qtde;
		this.nome = nome;
	}

	public Integer getQtde() {
		return qtde;
	}
	public void setQtde(Integer qtde) {
		this.qtde = qtde;
	}
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	
	
	
	
	
}
