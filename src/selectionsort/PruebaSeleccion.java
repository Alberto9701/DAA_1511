/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package selectionsort;

/**
 *
 * @author Alberto
 */
public class PruebaSeleccion {
    public static void main(String[] args) {
        SelectionSort ordenamiento = new SelectionSort();
        int arreglo[] = {432,521,76,-1487,1223,92,-122,993,777,96};
        ordenamiento.Ordenar(arreglo);
        ordenamiento.Imprimir(arreglo);
    }
}
