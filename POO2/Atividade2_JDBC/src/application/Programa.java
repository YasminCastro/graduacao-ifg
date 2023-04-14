package application;

import java.io.IOException;
import java.sql.Connection;
import java.sql.Date;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Scanner;
import entities.Aluno;
import jdbc.AlunoJDBC;
import jdbc.DB;

public class Programa {

	public static void main(String[] args) throws IOException, SQLException {

		Connection con = DB.getConexao();
		System.out.println("Conexão realizada com sucesso !");
		
		DateTimeFormatter formato = DateTimeFormatter.ofPattern("dd/MM/yyyy"); 
		
		Scanner console = new Scanner(System.in);
		
		int opcao = 0;
		
		try {
		

			do {
				System.out.print("######## Menu ########" + 
								"\n1- Cadastrar" + 
								"\n2- Listar"    + 
								"\n3- Alterar"   +
								"\n4- Excluir"   + 
								"\n5- Sair"      +
								"\n\tOpção: ");
				opcao = Integer.parseInt(console.nextLine());

				if (opcao == 1) {

					Aluno a = new Aluno();
					AlunoJDBC acao = new AlunoJDBC();

					System.out.print("\n*** Cadastrar Aluno ***\n\r");
					System.out.print("Nome: ");
					a.setNome(console.nextLine());
					System.out.print("Sexo: ");
					a.setSexo(console.nextLine());
		
					System.out.print("Data de nascimento (dd/MM/yyyy): ");
					a.setDt_nasc( Date.valueOf( LocalDate.parse( console.nextLine(), formato) ) ) ;
					
					acao.salvar(a, con);
					console.nextLine();
					
				}else if(opcao == 2) {
					
					AlunoJDBC acao = new AlunoJDBC();
					
					
				System.out.println("LISTAR ALUNOS");
				List<Aluno> lista = acao.listar(con);
				
				
				for(Aluno a : lista) {
					System.out.println("Aluno: " +  a.getId() + " " + a.getNome() + " " + a.getSexo() + " " + a.getDt_nasc());
				}
					
					
				}else if(opcao == 3) {
					
					AlunoJDBC acao = new AlunoJDBC();
					
					Aluno a = new Aluno();

					System.out.print("\n*** Alterar Aluno ***\n\r");
					System.out.print("Digite o id que deseja alterar: ");
					a.setId(Integer.parseInt(console.nextLine()));					
					System.out.print("Nome: ");
					a.setNome(console.nextLine());
					System.out.print("Sexo: ");
					a.setSexo(console.nextLine());
		
					System.out.print("Data de nascimento (dd/MM/yyyy): ");
					a.setDt_nasc( Date.valueOf( LocalDate.parse( console.nextLine(), formato) ) ) ;
					
					acao.alterar(a, con);
				
				}		
				else if(opcao == 4) {
					
					AlunoJDBC acao = new AlunoJDBC();
					
					System.out.print("Digite o id que deseja excluir: ");
					int id = Integer.parseInt(console.nextLine());		
					
					acao.apagar(id, con);
					
							
				}
				
			} while (opcao != 5);

		} catch (Exception e) {
			System.out.println("Erro: " + e);
		}
		
		DB.fechaConexao();
		System.out.println("Conexão fechada com sucesso !");
	}
}
