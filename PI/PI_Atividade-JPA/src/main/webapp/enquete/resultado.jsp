<%@page import="java.text.DecimalFormat"%>
<%@ include file="layout/cabecalho.jsp"%>

<%
if (request.getParameter("candidato") != null) {
	Integer voto = Integer.parseInt(request.getParameter("candidato"));
	Alternativa a = enquete.getListaAlternativas().get(voto);
	a.adicionaVoto();
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
								<b>ENQUETE</b>
							</h2>
						</div>
					</div>

					<h2><%= enquete.getPergunta() %></h2>

					<div style="margin-left: 30px;">


						<table class="table table-striped">
							<tr>
								<th>CANDIDATO</th>
								<th style="text-align: center;">VOTOS</th>
								<th style="text-align: center;">%</th>
							</tr>

							<%
							DecimalFormat df = new DecimalFormat("##.##");
							int totalVotos = enquete.totalVotos();
							for (Integer key : enquete.getListaAlternativas().keySet()) {
								Alternativa a = enquete.getListaAlternativas().get(key);
								
								float per = (totalVotos > 0) ? ((float)a.getVotos() / totalVotos) * 100 : 0;
							%>
							<tr>
								<td><%= a.getNome()%></td>
								<td style="text-align: center;"><%=a.getVotos()%></td>
								<td style="text-align: center;"><%= df.format(per) %>%</td>
							</tr>
							<%
							}
							%>

							<tr>
								<td><b>TOTAL DE VOTOS</b></td>
								<td style="text-align: center;">
								<%= totalVotos %></td>
								<td>&nbsp;</td>
							</tr>

						</table>



						<div>

							<br> <a href="index.jsp"><button type="button"
									class="btn btn-success">Voltar</button></a>
						</div>
					</div>
				</div>
			</div>
		</div>
	</div>
</section>


<%@ include file="layout/rodape.jsp"%>

