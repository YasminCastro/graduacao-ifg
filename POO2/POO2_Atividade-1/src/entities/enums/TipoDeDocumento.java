package entities.enums;

public enum TipoDeDocumento {
	RG("Registro geral"),
	CPF("Cadastro de Pessoa F�sica"),
	CNPJ("Cadastro de Pessoa Jur�dica");
	
	private String descricao;

	public String getDescricao() {
		return descricao;
	}

	private TipoDeDocumento(String descricao) {
		this.descricao = descricao;
		
	}
	
	
}
