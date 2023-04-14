package jdbc;

import java.io.IOException;
import java.sql.Connection;
import java.sql.Date;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.List;

import entities.Aluno;

public class AlunoJDBC {
	
	String sql;
	PreparedStatement pst;
	
	
	public void salvar(Aluno a, Connection con) throws IOException {
		
		try {
			
			sql = "INSERT INTO aluno (nome, sexo, dt_nasc) VALUES (?,  ?, ?)";
			
			pst = con.prepareStatement(sql);
			pst.setString(1, a.getNome());
			pst.setString(2, a.getSexo());
			
			Date dataSql = new Date(a.getDt_nasc().getTime());
			pst.setDate(3, dataSql);
			
			pst.executeUpdate();
			System.out.println("\nCadastro do aluno realizado com sucesso!");
			
		}
		catch (SQLException e) {
			
			System.out.println(e);
		}
		
	}
	
	public List<Aluno> listar(Connection con) throws IOException, SQLException {
		
		List<Aluno> lista = new ArrayList<>();
		
		sql = "SELECT * FROM aluno";
		Statement st = con.createStatement();					
		ResultSet rs = st.executeQuery(sql);
		
		while(rs.next()) {
			Aluno a = new Aluno(rs.getInt(1), rs.getString(2),  rs.getString(3),  rs.getDate("dt_nasc"));	
			
			lista.add(a);
			
		}
		
		rs.close();
		st.close();
		
		return lista;
	
			
	}
	
	public void apagar(int id, Connection con) throws IOException, SQLException {
		
		sql = "DELETE FROM aluno WHERE id = ?";
		pst = con.prepareStatement(sql);
		pst.setInt(1, id);
		
		
		
		
		if(pst.executeUpdate() >= 1) {
			System.out.println("Aluno removido com sucesso!");
		}
		else {
			System.out.println("Não foi encontrado aluno com id "+ id);
		}
		
		
		
	}
	
	public void alterar(Aluno a, Connection con) throws IOException, SQLException {		
		
		
		
		sql = "UPDATE aluno SET sexo = ?, nome = ?, dt_nasc = ? WHERE id = ? ";
		pst = con.prepareStatement(sql);		
		pst.setString(1, a.getSexo());
		pst.setString(2, a.getNome());
		pst.setDate(3, a.getDt_nasc());
		pst.setInt(4, a.getId());
		
		if(pst.executeUpdate() >= 1) {
			System.out.println("Aluno atualizado com sucesso!");
		}
		else {
			System.out.println("Não foi encontrado aluno com id "+ a.getId());
		}
		
		 
		
		
	}
}

