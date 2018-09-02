import java.util.Scanner;

public class guia2_act1 extends Main
{
    // Variables nativas miembro
    private int a;
    private int b;

    /**
     * Constructor para la clase Dupla
     */
    public guia2_act1()
    {
        this.a = 0;
        this.b = 0;
    }

    /**
     * Funciones Miembro
     */
    public void guarda(int a2, int b2)
    {
        this.a = a2;
        this.b = b2;
    }
    
    public int leeX(int a2)
    {
        a2 = this.a;
        return a2;
    }    
    
    public int leeY(int b2)
    {
        b2 = this.b;
        return b2;
    }    
    
    
}

class Main {
    
    public static void main(String[] args) {
        int x = 0;
        int y = 0;
        guia2_act1 primerPar;
        primerPar = new guia2_act1();
        
        primerPar.guarda(12,32);
        x = primerPar.leeX(x);
        y = primerPar.leeY(y);
        
        System.out.println("Valor de primerPar.a: "+x);
        System.out.println("Valor de primerPar.b: "+y);        
        
    }
}