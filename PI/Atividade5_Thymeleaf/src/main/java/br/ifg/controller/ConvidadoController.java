package br.ifg.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.servlet.ModelAndView;
import org.springframework.web.servlet.mvc.support.RedirectAttributes;

import br.ifg.model.dao.ConvidadoDAO;
import br.ifg.model.entities.Convidado;

@Controller
@RequestMapping("convidados")
public class ConvidadoController {

	@Autowired
	ConvidadoDAO convidadoDAO;
	
	@GetMapping("/listar")
	public ModelAndView listar() {		
		ModelAndView mv = new ModelAndView("/convidados/listar");
		mv.addObject("listaConvidados", convidadoDAO.findAll());		
		return mv;
	}
		
	@GetMapping("/cadastrar")
	public String cadastrar(Convidado convidado) {		
		return "/convidados/cadastrar";
	}
	
	@PostMapping("/salvar")
	public String salvar(Convidado convidado, RedirectAttributes attr) {		
		if (convidado.getNome().isEmpty() || convidado.getTipo().isEmpty()) {
			attr.addFlashAttribute("fail", "Não foi possível inserir o convidado");			
		}				
		try {			
			convidadoDAO.insert(convidado);	
			attr.addFlashAttribute("success", "Registro inserido com sucesso");
		} catch (Exception e) {
			attr.addFlashAttribute("fail", "Não foi possível inserir o convidado");
		}  		
		return "redirect:/convidados/cadastrar";
	}
	
	@GetMapping("/editar/{id}")
	public ModelAndView preEditar(@PathVariable("id") Long id) {
		ModelAndView mv = new ModelAndView("/convidados/cadastrar");
		mv.addObject("convidado", convidadoDAO.findById(id));		
		return mv;
	}
	
	@PostMapping("/editar")
	public String editar(Convidado convidado, RedirectAttributes attr) {		
		
		try {
			convidadoDAO.update(convidado);
			attr.addFlashAttribute("success", "Convidado editado com sucesso");
		} catch (Exception e) {
			attr.addFlashAttribute("fail", "Não foi possível editar o convidado");
		}  
		
		return "redirect:/convidados/cadastrar";
	}
	
	@GetMapping("/excluir/{id}")
	public String excluir(@PathVariable("id") Long id, RedirectAttributes attr) {		
		
		try {
			convidadoDAO.deleteById(id);
			attr.addFlashAttribute("success", "Convidado deletado com sucesso");
		} catch (Exception e) {
			attr.addFlashAttribute("fail", "Não foi possível deletar o convidado");
		}		
		
		return "redirect:/convidados/listar";
	}
	
}
