import java.io.Serializable;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.JoinColumn;
import javax.persistence.OneToOne;

@Entity
public class Automovel implements Serializable{

	
	private static final long serialVersionUID = 1L;
	
	@Id
	@GeneratedValue (strategy = GenerationType.IDENTITY)
	private Integer idautomovel;
	
	@Column (name = "anoFabricacao", nullable = false)
	private Integer anoFabricacao;
	
	@Column (name = "anoModelo", nullable = false)
	private Integer anoModelo;
	
	@Column (name = "observacoes", nullable = false)
	private String observacoes;
	
	@Column (name = "preco", nullable = false)
	private Float preco;
	
	@Column (name = "kilometragem", nullable = false)
	private Integer kilometragem;
	
	@Column (name = "modelo_id", nullable = false)
	private Integer modelo_id;
	
	
	@OneToOne
	@JoinColumn(name = "modelo_id")
	private Modelo modelo;

}
