import java.util.Scanner;
import java.util.InputMismatchException;

System.ou.println("oi");

//public, protected, default, private; throws ContaExcecao(classe da excecao)--> extends Execption
//visibilidade em java
//Caso seja uma subclasse de Exeption ela é verificada, já se for uma subclasse de RunTimeException ou Error será não verificada.
//Exeção Verificada são forçadas pelo próprio compilador(ClassNotFound); já as Não Verificadas ocorrem durante a execução do programa(dividir por zero) 
public class Main
{
	public static void main(String[] args) {
	    Fracao f= new Fracao(8,2);
	    Fracao f2= new Fracao();
	    
	    
	    f2.setNumerador(5);
	    f2.setDenominador(0);
	    
	    f.exibeResultado();
	    f2.exibeResultado();
	}
}
