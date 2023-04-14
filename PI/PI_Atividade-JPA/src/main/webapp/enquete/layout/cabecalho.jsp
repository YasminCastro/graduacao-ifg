<%@page import="br.ifg.Alternativa"%>
<%@page import="br.ifg.Enquete"%>
<%@page import="java.util.Map"%>
<%@page import="java.util.HashMap"%>
<%@page language="java" contentType="text/html; charset=ISO-8859-1"
	pageEncoding="ISO-8859-1"%>	
	
<!DOCTYPE html>
<html>
<head>

<meta charset="utf-8">
<meta name="viewport"
	content="width=device-width, initial-scale=1, shrink-to-fit=no">

<link
	href="https://fonts.googleapis.com/css?family=Lato:300,400,700&display=swap"
	rel="stylesheet">

<link rel="stylesheet"
	href="https://stackpath.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css">
	

<link href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.2/dist/css/bootstrap.min.css" rel="stylesheet">
<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.0/css/bootstrap.min.css">
<link rel="stylesheet" href="http://localhost:8080/Projeto-Enquete-Trab/enquete/css/estilo.css">
<title>Enquete</title>
</head>

<body>

<jsp:useBean id="enquete" class="br.ifg.Enquete" scope="application">
	<jsp:setProperty name="enquete" property="pergunta" value="Se as eleições para o Governo do Estado de Goiás fossem hoje e esses os prováveis nomes, em quem você votaria?"/>
	<% 
		enquete.adicionaAlternativa(15, new Alternativa(15, "Gustavo Mendanha"));
		enquete.adicionaAlternativa(45, new Alternativa(45, "José Eliton"));
		enquete.adicionaAlternativa(11, new Alternativa(11, "Major Vítor Hugo"));
		enquete.adicionaAlternativa(25, new Alternativa(25, "Ronaldo Caiado"));
		enquete.adicionaAlternativa(13, new Alternativa(13, "Wolmir Amado"));
	%>
</jsp:useBean>


	
	