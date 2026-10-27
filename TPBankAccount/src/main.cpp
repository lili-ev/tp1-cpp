#include <iostream>
#include "Library.hpp"

using namespace std;

int main() {

    Library bibliotheque;

    // Creer des livres
    Book livre1("Le Petit Prince", "Antoine de Saint-Exupery",
                "ISBN001", 1943);

    Book livre2("L'Etranger", "Albert Camus",
                "ISBN002", 1942);

    Book livre3("Les Miserables", "Victor Hugo",
                "ISBN003", 1862);

    // Ajouter les livres
    bibliotheque.ajouterLivre(livre1);
    bibliotheque.ajouterLivre(livre2);
    bibliotheque.ajouterLivre(livre3);

    // Afficher tous les livres
    cout << "\n=== Liste des livres ===" << endl;
    bibliotheque.listerLivres();

    // Rechercher un livre
    cout << "\n=== Recherche par ISBN ===" << endl;

    const Book* resultat = bibliotheque.trouverParISBN("ISBN002");

    if (resultat != nullptr) {
        cout << "Livre trouve :" << endl;
        resultat->afficher();
    } else {
        cout << "Livre introuvable." << endl;
    }

    return 0;
}
