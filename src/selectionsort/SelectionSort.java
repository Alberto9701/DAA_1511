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
public class SelectionSort {

    /**
     * @param args the command line arguments
     */
    
    public void Ordenar(int arreglo[]){
        int i,j,minimo=0,auxiliar=0;
        
        for(i=0;i<arreglo.length;i++){
            minimo=i;
            for(j=i+1;j<arreglo.length;j++){
                if(arreglo[minimo]>arreglo[j]){
                    minimo=j;
                }
            }
            auxiliar=arreglo[minimo];
            arreglo[minimo]=arreglo[i];
            arreglo[i]=auxiliar;
        }
    }
    public void Imprimir(int arreglo[]){
        for(int i=0;i<arreglo.length;i++){
            System.out.println(arreglo[i] + " ");
        }
    }
    
}
