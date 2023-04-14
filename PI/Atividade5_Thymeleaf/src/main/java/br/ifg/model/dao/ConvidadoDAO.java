package br.ifg.model.dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.List;

import org.springframework.stereotype.Component;

import br.ifg.db.DB;
import br.ifg.db.DbException;
import br.ifg.model.entities.Convidado;

@Component
public class ConvidadoDAO implements DAO<Convidado> {

	private Connection conn;

	public ConvidadoDAO() {
		this.conn  = DB.getConnection();
	}
	
	public ConvidadoDAO(Connection conn) {
		this.conn = conn;
	}
	
	public void closeConnection() {
		try {
			conn.close();
		} catch (Exception e) {
			throw new DbException(e.getMessage());
		}		
	} 

	@Override
	public void insert(Convidado obj) {
		PreparedStatement st = null;
		try {
			st = conn.prepareStatement(
				"INSERT INTO convidado " +
				"(nome, tipo, qtd) " +
				"VALUES " +
				"(?,?, ?)", 
				Statement.RETURN_GENERATED_KEYS);
			
			st.setString(1, obj.getNome());
			st.setString(2, obj.getTipo());
			st.setLong(3, obj.getQtd());
			
			

			int rowsAffected = st.executeUpdate();
			
			if (rowsAffected > 0) {
				ResultSet rs = st.getGeneratedKeys();
				if (rs.next()) {
					int id = rs.getInt(1);
					obj.setId(id);
				}
			}
			else {
				throw new DbException("Unexpected error! No rows affected!");
			}
		}
		catch (SQLException e) {
			throw new DbException(e.getMessage());
		} 
		finally {
			DB.close(st);
		}
	}

	@Override
	public void update(Convidado obj) {
		PreparedStatement st = null;
		try {
			st = conn.prepareStatement(
				"UPDATE convidado " +
				"SET nome = ?, tipo = ?, qtd = ? " +
				"WHERE id = ?");

			st.setString(1, obj.getNome());
			st.setString(2, obj.getTipo());
			st.setLong(3, obj.getQtd());
			st.setLong(4, obj.getId());

			st.executeUpdate();
		}
		catch (SQLException e) {
			throw new DbException(e.getMessage());
		} 
		finally {
			DB.close(st);
		}
	}

	@Override
	public void deleteById(long id) {
		PreparedStatement st = null;
		try {
			st = conn.prepareStatement(
				"DELETE FROM convidado WHERE id = ?");

			st.setLong(1, id);

			st.executeUpdate();
		}
		catch (SQLException e) {
			throw new DbException(e.getMessage());
		} 
		finally {
			DB.close(st);
		}
	}

	@Override
	public Convidado findById(long id) {
		PreparedStatement st = null;
		ResultSet rs = null;
		try {
			st = conn.prepareStatement(
				"SELECT * FROM convidado WHERE id = ?");
			st.setLong(1, id);
			rs = st.executeQuery();
			if (rs.next()) {
				Convidado obj = new Convidado();
				obj.setId(rs.getInt("id"));
				obj.setNome(rs.getString("nome"));
				obj.setTipo(rs.getString("tipo"));
				obj.setQtd(rs.getInt("qtd"));
				return obj;
			}
			return null;
		}
		catch (SQLException e) {
			throw new DbException(e.getMessage());
		}
		finally {
			DB.close(st, rs);			
		}
	}

	@Override
	public List<Convidado> findAll() {
		PreparedStatement st = null;
		ResultSet rs = null;
		try {
			st = conn.prepareStatement("SELECT * FROM convidado ORDER BY nome");
			rs = st.executeQuery();

			List<Convidado> list = new ArrayList<>();

			while (rs.next()) {
				Convidado obj = new Convidado();
				obj.setId(rs.getInt("id"));
				obj.setNome(rs.getString("nome"));
				obj.setTipo(rs.getString("tipo"));
				obj.setQtd(rs.getInt("qtd"));
				list.add(obj);
			}
			return list;

		} catch (SQLException e) {
			throw new DbException(e.getMessage());
		} finally {
			DB.close(st, rs);
		}
	}

	

}
