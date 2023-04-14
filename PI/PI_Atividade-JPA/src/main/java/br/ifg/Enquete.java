package br.ifg;

import java.util.HashMap;
import java.util.Map;

public class Enquete {
	String pergunta;
	Integer qtde;
	Map<Integer,Alternativa> listaAlternativas = new HashMap<>();

	public Enquete() {		
		super();
		this.qtde = 0;
	}
	
	public Enquete(String pergunta) {		
		this.pergunta = pergunta;
		this.listaAlternativas = new HashMap<>();
		this.qtde = 0;
	}

	public String getPergunta() {
		return pergunta;
	}

	public void setPergunta(String pergunta) {
		this.pergunta = pergunta;
		this.zerarVotacao();
	}
	
	public Integer getQtde() {
		return this.qtde;
	}

	public void adicionaAlternativa(int chave, Alternativa alternativa) {
		this.qtde++;
		this.listaAlternativas.put(chave, alternativa);
		this.zerarVotacao();
	}
	
	public boolean removerAlternativa(int chave) {	
		Alternativa a = this.getListaAlternativas().get(chave);
		if (a != null) {
			this.listaAlternativas.remove(chave);
			this.qtde--;
			this.zerarVotacao();
			return true;
		}			
		return false;		
	}

	public Map<Integer, Alternativa> getListaAlternativas() {
		Map<Integer, Alternativa> copy = new HashMap<>();
		copy.putAll(listaAlternativas);
		return copy;
	}	
	
	private void zerarVotacao() {		
		for (Integer key : this.getListaAlternativas().keySet()) {
			Alternativa a = this.getListaAlternativas().get(key);
			a.zerarVotos();
		}		
	}
	
	public int totalVotos() {
		int total = 0;
		for (Integer key : this.getListaAlternativas().keySet()) {
			Alternativa a = this.getListaAlternativas().get(key);
			total += a.getVotos();
		}
		return total;
	}

}
