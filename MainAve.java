public class Main {
    public static void main(String[] args) {

        //Creacion de objetos a partir de la clase Ave
        Ave pollito = new Ave("Gallina", "Amarillo", 0, 1);
        System.out.println(
                "Especie:"+pollito.getEspecie()+"\n"+
                "Color/Colores:"+ pollito.getColores()+"\n"+
                "Alcance de vuelo:"+ pollito.getAlcanceVuelo()+"km/h"+"\n"+
                "Peso:"+pollito.getPeso()+"kg"+"\n");



        Ave flamenco = new Ave("flamenco", "rosa",56 ,4);
        System.out.println(
                "Especie:"+flamenco.getEspecie()+"\n"+
                "Color/Colores:"+ flamenco.getColores()+"\n"+
                "Alcance de vuelo:"+ flamenco.getAlcanceVuelo()+"km/h"+"\n"+
                "Peso:"+flamenco.getPeso()+"kg"+"\n");


        Ave pinguino = new Ave("pinguino", "blanco y negro" ,0 ,12.0f);
        System.out.println(
                "Especie:"+pinguino.getEspecie()+"\n"+
                "Color/Colores:"+ pinguino.getColores()+"\n"+
                "Alcance de vuelo:"+ pinguino.getAlcanceVuelo()+"km/h"+"\n"+
                "Peso:"+pinguino.getPeso()+"kg"+"\n");


        Ave guacamaya = new Ave( "amarillo, azul y rojo" ,56,4);
        System.out.println(
                "Especie:"+guacamaya.getEspecie()+"\n"+
                "Color/Colores:"+ guacamaya.getColores()+"\n"+
                "Alcance de vuelo:"+ guacamaya.getAlcanceVuelo()+"km/h"+"\n"+
                "Peso:"+pollito.getPeso()+"kg"+"\n");


        Ave colibri = new Ave(" azul y verde" ,100,1);
        System.out.println(
                "Especie:"+colibri.getEspecie()+"\n"+
                "Color/Colores:"+ colibri.getColores()+"\n"+
                "Alcance de vuelo:"+ colibri.getAlcanceVuelo()+"km/h"+"\n"+
                "Peso:"+colibri.getPeso()+"kg"+"\n");


        //LLamar al metodo de distancia recorida por el ave en una cantidad de horas
        System.out.println("¿Cuantos metros recorre el ave en 15 horas? ");
        System.out.println("Pollito: "+pollito.Distancia(0,15)+"km/h");
        System.out.println("Guacamaya: "+guacamaya.Distancia(guacamaya.getAlcanceVuelo(), 15)+"km/h");
        System.out.println("");

        //LLamar metodo para saber si el ave tiene sobrepeso
        System.out.println("¿El ave tiene sobrepeso?");
        System.out.println("Colibri: ");colibri.Salud(colibri.getPeso());
        System.out.println("Pinguino:");pinguino.Salud(pinguino.getPeso());
        System.out.println("");

        //Llamar metodo para saber si  es un ave rara o comun
        System.out.println("¿Es una especie peculiar ?");
        pollito.Categoria(pollito.getEspecie());
        flamenco.Categoria(flamenco.getEspecie());


    }


}
