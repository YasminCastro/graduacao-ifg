<%@ include file="layout/cabecalho.jsp"%>

<section class="ftco-section">
	<div class="container">

		<div class="row justify-content-center">

			<div class="col-sm-8">
				<div class="login-wrap p-4 p-md-5">
					<div class="d-flex">
						<div class="w-100">
							<h1 class="mb-4" style="text-align: center;">
								<b>Organizador de tarefas</b>
							</h1>
						</div>
					</div>



					<div style="margin-left: 30px;">


						<div style="display: flex; justify-content: center; gap: 20px">

							<a href="categorias.jsp">
								<button type="submit" name="btnVotar" class="btn btn-success">Categorias</button>
							</a> <a href="lembretes.jsp">
								<button type="button" class="btn btn-success">Lembretes</button>
							</a>

						</div>
					</div>
				</div>
			</div>
		</div>
	</div>
</section>


<%@ include file="layout/rodape.jsp"%>

