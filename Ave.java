//Creacion de la clase
public class Ave {
    private String especie;
    private String colores;
    private int AlcanceVuelo;
    private float peso;


//creacion del constructor
    public Ave(String especie, String colores, int alcanceVuelo, float peso) {
        this.especie = especie;
        this.colores = colores;
        this.AlcanceVuelo = alcanceVuelo;
        this.peso = peso;
    }
//Creacion del segundo constructor
    public Ave(String colores, int alcanceVuelo, float peso) {
        especie = "Oviparos";
        this.colores = colores;
        this.AlcanceVuelo = alcanceVuelo;
        this.peso = peso;
    }


  //Creacion de los get y los set
    public String getEspecie() {
        return especie;
    }

    public void setEspecie(String especie) {
        this.especie = especie;
    }

    public String getColores() {
        return colores;
    }

    public void setColores(String colores) {
        this.colores = colores;
    }

    public int getAlcanceVuelo() {
        return AlcanceVuelo;
    }

    public void setAlcanceVuelo(int alcanceVuelo) {
        AlcanceVuelo = alcanceVuelo;
    }

    public float getPeso() {
        return peso;
    }

    public void setPeso(float peso) {
        this.peso = peso;
    }

    //Creacion del metodo
    public int Distancia(int alcanceVuelo, int horas){
        int resultado = alcanceVuelo * horas;
        return resultado;
 }

   //Creacion del metodo
    public String Salud (float peso) {
        String res;
        if (peso > 10f) {
            System.out.println(res = "Tiene sobrepeso");
        } else {
            System.out.println(res = "Esta bien de peso ");
        }
        return res;
    }


//Creacion del metodo
    public boolean Categoria(String especie){
        String raro="flamenco";
        boolean Ans ;
        if (especie==raro){
            Ans=true;
            System.out.println(especie+": "+ Ans);}
          else{
              Ans=false;
            System.out.println(especie +": "+ Ans);
        }
        return Ans;
    }
}
