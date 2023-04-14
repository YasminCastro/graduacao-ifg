<%@ include file="layout/cabecalho.jsp"%>

<%
String msg = "Não foi possível remover";
if (request.getParameter("id") != null) {
	int chave = Integer.parseInt(request.getParameter("id"));
	if (enquete.removerAlternativa(chave)) {
		msg = "Alternativa Removida com Sucesso.";
	}
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
								<b>REMOVER ALTERNATIVA</b>
							</h2>
						</div>
					</div>

						<form action="" method="post">												
						
						<% if (msg != null) { %>						
						<div style="text-align: center;" class="alert alert-success" role="alert"><%= msg %></div>
						<% } %>

							

							<div>

								 <a href="lista-alternativas.jsp"> <input
									type="button" value="Voltar" class="btn btn-warning">
								</a> 
							</div>

						</form>
						
						

					
					
					
					
					
				</div>
			</div>
		</div>
	</div>
</section>


<%@ include file="layout/rodape.jsp"%>

