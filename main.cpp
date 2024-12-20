#include <iostream>
#include "Grafo.cpp"
int main()
{
    Grafo <int> grafoCitta;

    grafo.aggiunginodo("Terlizzi");
    grafo.aggiunginodo("Molfetta");
    grafo.aggiunginodo("Bisceglie");
    grafo.aggiunginodo("Trani");
    grafo.aggiunginodo("Andria");

    grafo.aggiungiarco("Terlizzi","Molfetta",58);
    grafo.aggiungiarco("Molfetta","Andria",14);
    grafo.aggiungiarco("Andria","Trani",40);
    grafo.aggiungiarco("Trani","Bisceglie",46);
    grafo.aggiungiarco("Bisceglie","Terlizzi",225);
    grafo.aggiungiarco("Terlizzi","Bisceglie",8);

//stampa matrice adiacenza
    std::cout<<"Grafo delle citta: \n";
    grafoCitta.stampa();
    //verifica nodo
    nodo="Bisceglie";
    if(grafoCitta.verificaNodo(nodo))
    {
     std::cout<<"Il valore cercato è presente\n";
        else{
            std::cout<<"Il valore cercato non è presente\n";
        }
    }
// stampa nodi adiacenti
    nodo="Terlizzi";
    std::cout<<"nodi adiacenti a";
    grafoCitta.nodiAdiacenti(nodo);

    //arco esisstente tra due nodi
    std:: string nodo1="Terlizzi";
     std:: string nodo2="Molfetta";
    std::cout<<"Verifica se esiste un arco";
    if(grafoCitta.verificaArco(nodo1,nodo2)){
        std::cout<<"esiste";
        else
        std::cout<<"Non esiste";
    }
    std:: string nodo1="Bisceglie";
    std:: string nodo2="Trani";
    std::cout<<"Verifa se esiste un arco da: ";
        if(grafoCitta.verificaArco(nodo1,nodo2))
        {
            std::cout<<"esiste";
        else
        std::cout<<"Non esiste";
        }
    //manipolazione
    //rimuovi nodo e archi associati
    std::string nodoDaRimuovere="Terlizzi";
    std::cout<<"rimozione nodo";
    grafoCitta.rimuovinodo(nodoDaRimuovere);

    //rimuovi arco specifico
    std::string sorgente="Andria";
    std::string destinazione="Trani";
    std:: cout<<"rimozione arco";
    grafoCitta.rimuoviArco(sorgente,destinazione);

    //stampa mat adiacente
    std::cout<<"Grafo delle citta: \n";
    grafoCitta.stampa();
    //modifica grafo con aggiunta dell nuovo nodo
    std:: string nuovoNodo="Bitonto";
    std:: cout<<"Aggiunta nodo";
    grafoCitta.aggiungiNodo(nuovoNodo);

    //aggiungi nuovo arco
    sorgente="Bitonto";
    destinazione="Terlizzi";
    int peso=270;
    std:: cout<<"Aggiunta arco con peso";
    grafoCitta.aggiungiArco(sorgente, destinazione, peso);

    //stampa mat adiacente
    std::cout<<"Grafo delle citta: \n";
    grafoCitta.stampa();

    //verifica nodi connessi
    nodo1="Terlizzi";
    nodo2="Molfetta";
    std::cout<<"verifica se primo nodo 1 è connesso al nodo 2";
        if(grafoCitta.verificaArco(nodo1,nodo2)){
            std::cout<<"Sono connessi";
            else{
                std::cout<<"Non connessi";
            }
        }
    //arco peso min uscente
    nodo="Trani";
    std::cout<<"Peso minimo degli archi uscenti";
    int pesoMinimo=grafoCitta.trovaPesoMinimo(nodo);
        if(pesoMinimo!= INF){
            std::cout<<"Peso minimo";
            else{
                std::cout<<"Nessun arco uscente";
            }
        }
        return 0;
}
