import java.io.Serializable;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.OneToMany;

@Entity

public class Curso implements Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	
	@OneToMany(mappedBy = "curso")
	private Aluno aluno;
	

	@Id
	@GeneratedValue(strategy = GenerationType.IDENTITY)
	private Integer idcurso;

	@Column(name = "nomecurso", nullable = false)
	private String nome;

}
