package com.tdz.zhou.Graphic;
//import Graphic.GraphicObject;

public class Drawing {
	
		private GraphicObject [] graphicObjectsArray;
		private int free; // the first free place in the array

		public Drawing(final int n) {
			graphicObjectsArray = new GraphicObject [n];
		}

		// principe d'encapsulation non respect�
		// pas de copie d�fensive rang�e dans le tableau d'objets
		
		public void add(final GraphicObject obj) {

			graphicObjectsArray [free] = obj.copy();

			free++;
		}

		// le d�placement est une translation
		public void move(final int dx, final int dy){
			for (GraphicObject obj : graphicObjectsArray) {
				obj.move(dx, dy); //d�placer un objet dans le tableau objetGraphiques
			}
		}

		public void display(){  //afficher chaque �l�ment du tableau
			for (GraphicObject obj : graphicObjectsArray) {
				obj.display();
			}
		}

		public void delete(){ //effacer chaque �l�ment du tableau
			for (GraphicObject obj : graphicObjectsArray) {
				obj.display();
			}
		}

}
