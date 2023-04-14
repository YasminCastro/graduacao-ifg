import java.io.Serializable;
import java.util.List;

import javax.persistence.Column;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.JoinColumn;
import javax.persistence.OneToMany;
import javax.persistence.OneToOne;

public class Modelo implements Serializable{

	private static final long serialVersionUID = 1L;
	
	@Id
	@GeneratedValue (strategy = GenerationType.IDENTITY)
	private Integer idamodelo;
	
	@Column (name = "descricao", nullable = false)
	private String descricao;
	
	@Column (name = "potencia", nullable = false)
	private Integer potencia;
	
	@Column (name = "marca_id", nullable = false)
	private Integer marca_id;
	
	@OneToOne(mappedBy = "modelo")
	private Automovel auto;
	
	@OneToMany
	@JoinColumn(name="modelo_id")
	private List<Automovel> automoveis;
	
	@OneToOne
	private Marca marca;
	

}
