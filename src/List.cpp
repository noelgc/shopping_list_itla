/*
 * List.cpp
 *
 *  Created on: May 22, 2016
 *      Author: raydelto
 */

#include "List.h"
#include <iostream>
#include <cstdlib>
using namespace std;

List::List(): _first(NULL), _last(NULL)
{


}

void List::add(Element* element)
{
	//TODO: Implement this method
	cout << "You should write the code for adding " << element -> _name << endl;

}

void List::remove(int index)
{
	//TODO: Implement this method
	cout << "You should write the code for removing the index " << index << endl;
}




#include <stdi.h>

typedef struct {
    struct nodo* siguiente;
     char*  nobre;

}  nodo;
   nodo* primer = null;
    nodo* ultimo = null;


     void agregar ( nodo* _nodo){
         _nodo=> suguiente =null
      if(primer == null) {
          primer = nodo;
          ultimo = nodo;
      } else{
        ultimo => siguiente =_nodo;
        ultimo = _nodo;
      }


     }

      int main(){
         nodo*primernodo=malloc(sizeof(nodo));
         primernodo =>nombre = " primer elemento";
         nodo*primernodo=malloc(sizeof(nodo));
         segundonodo =>nombre = " segundo  elemento";
           nodo*primernodo=malloc(sizeof(nodo));
         tercernodo =>nombre = " tercer  elemento";

         agregar(primernodo)
         agregar(segundonodo)
          agregar(tercernodo)

           nodo = i = primernodo;
           while(i!= null);{
           printf("%s\n", i=>nombre );
           i = i => siguiente
           }

      return 0;


      }
