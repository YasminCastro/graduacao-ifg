<%@page import="java.text.DecimalFormat"%>
<%@ include file="layout/cabecalho.jsp"%>

<section class="ftco-section">
	<div class="container">

		<div class="row justify-content-center">

			<div class="col-sm-8">
				<div class="login-wrap p-4 p-md-5">
					<div class="d-flex">
						<div class="w-100">
							<h2 class="mb-4" style="text-align: center;">
								<b>LISTA DE LEMBRETES</b>
							</h2>
						</div>
					</div>
					

					<div style="margin-left: 30px;">


					

						<div>

							<br> 
							
							<a href="index.jsp">
							<input type="button" value="Página inicial"
									class="btn btn-warning"> 
							</a>
							
						</div>
					</div>
				</div>
			</div>
		</div>
	</div>
</section>

<script>
	function jsExcluir(id) {

		if (confirm("Tem certeza que deseja excluir?")) {
			location.href = "remover-alternativa.jsp?id=" + id;
		}

	}
</script>


<%@ include file="layout/rodape.jsp"%>

