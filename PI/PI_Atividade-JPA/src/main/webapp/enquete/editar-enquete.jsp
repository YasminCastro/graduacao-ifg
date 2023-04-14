<%@ include file="layout/cabecalho.jsp"%>

<%
String pergunta = request.getParameter("pergunta");
String msg = null;
if (pergunta != null) {
	enquete.setPergunta(pergunta);
	msg = "Pergunta da enquete atualizada com sucesso.";
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
								<b>EDITAR ENQUETE</b>
							</h2>
						</div>
					</div>

						<form action="" method="post">												
						
						<% if (msg != null) { %>						
						<div class="alert alert-success" role="alert"><%= msg %></div>
						<% } %>
							
							<div class="form-group">
								<label for="nome">Pergunta da Enquete</label> <input type="text"
									class="form-control" name="pergunta" id="pergunta" value="<%= enquete.getPergunta() %>">
							</div>

							<div>

								<br> <a href="lista-alternativas.jsp"> <input
									type="button" value="Voltar" class="btn btn-warning">
								</a> <input type="submit" value="Salvar" class="btn btn-success">
							</div>

						</form>					
					
					
					
					
				</div>
			</div>
		</div>
	</div>
</section>


<%@ include file="layout/rodape.jsp"%>

