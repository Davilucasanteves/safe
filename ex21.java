class Fracao {
    private int numerador;
    private int denominador;
    
    public Fracao(){
        this.numerador=1;  //serve pra nada.
        this.denominador=1;
    }
    
    public Fracao(int num, int den){  //metodo construtor com parametro.
        this.numerador=num;
        if(den==0){
            System.out.println("Zero não pode, vai ser um seu bobão");
            this.denominador=1;
        }
        else
            this.denominador=den;
    }
    
    public int getNumerador(){   //get, set acessors.
        return numerador;
    }
    
    public void setNumerador(int num)    //nome diferente nao precisa do this. this vai pra classe, serve só pra atributo.
    {   
        numerador = num;
    }
    
    public int getDenominador(){
        return numerador;
    }
    
    public void setDenominador(int denominador)     // todo set é void.
    {
        if(denominador!=0){
            this.denominador = denominador;
        }
        else 
            System.out.println("Zero não pode");
    }
    
    void exibeResultado() {
         System.out.println("Resultado = " + (this.numerador/this.denominador));
    }
}
