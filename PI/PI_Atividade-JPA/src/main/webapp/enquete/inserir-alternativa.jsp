<%@ include file="layout/cabecalho.jsp"%>

<jsp:useBean id="alternativa" class="br.ifg.Alternativa" scope="request" />
<jsp:setProperty property="*" name="alternativa" />

<%
String msg = null;
if (alternativa.getNome() != null) {
	enquete.adicionaAlternativa(alternativa.getId(), alternativa);
	msg = "Alternativa inserida com sucesso.";
}
%>

<section class="ftco-section">
	<div class="container">

		<div class="row justify-content-center">

			<div class="col-sm-8">
				<div class="login-wrap p-4 p-md-5">
					<div class="d-flex">
						<div class="w-100">
							<h2 class="mb-4" style="text-align: center;">
								<b>INSERIR ALTERNATIVA</b>
							</h2>
						</div>
					</div>

						<form action="" method="post">												
						
						<% if (msg != null) { %>						
						<div class="alert alert-success" role="alert"><%= msg %></div>
						<% } %>

							<div class="form-group">
								<label for="id">ID</label> <input type="text"
									class="form-control" name="id" id="id">
							</div>

							<div class="form-group">
								<label for="nome">Descrição</label> <input type="text"
									class="form-control" name="nome" id="nome">
							</div>

							<div>

								<br> <a href="lista-alternativas.jsp"> <input
									type="button" value="Voltar" class="btn btn-warning">
								</a> <input type="submit" value="Inserir" class="btn btn-success">
							</div>

						</form>
						
						

					
					
					
					
					
				</div>
			</div>
		</div>
	</div>
</section>


<%@ include file="layout/rodape.jsp"%>

