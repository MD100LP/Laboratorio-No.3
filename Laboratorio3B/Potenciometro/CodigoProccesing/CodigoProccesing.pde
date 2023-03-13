import processing.serial.*;

Serial puertoSerie;
int valor=0;

void setup() {
  size(200,200);
  puertoSerie = new Serial(this, "COM3", 9600);
  
}
void draw(){
  if (puertoSerie.available() > 0){
    String texto  = puertoSerie.readStringUntil('\n');
    if (texto != null){
     valor = int(trim(texto));
    }
    println(valor);
  }  
}
