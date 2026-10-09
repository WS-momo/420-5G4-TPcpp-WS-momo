#include <iostream>
#include "book.h"

using namespace std;


Book::Book() : title(""), author(""), isbn(""), isAvailable(""),  borrowerId("") {}

Book::Book(const string& title, const string& author, const string& isbn) 
            : title(title), author(author), isbn(isbn)  {}


string Book::getTitle() const { return title; }
string Book::getAuthor() const { return author; }
string Book::getISBN() const { return isbn; }
bool Book::getAvailability() const { return isAvailable; }
string Book::getBorrowerId() const { return borrowerId; }

void Book::setTitle(const string& title) { this->title = title; }
void Book::setAuthor(const string& author) { this->author = author; }
void Book::setISBN(const string& isbn) { this->isbn = isbn; }
void Book::setAvailability(const bool isAvailable) { this->isAvailable = isAvailable; }
void Book::setBorrowerId(const string& id) { this->borrowerId = id; }

void Book::returnBook(){
    setAvailability(true);
    setBorrowerId("");
}
void Book::checkOut(const string& borrowerId){
    setBorrowerId(borrowerId);
    setAvailability(false);
}
string Book::toString() const {
    string statut="";

    if(isAvailable == true){
        statut = "Oui";
    }else{
        statut = "Non";
    }
    string msg = "Titre: " + title +"\nAuteur: " + author + "\nISBN: " +
    isbn + "\nDisponible: " + statut + "\nPrêter à:" + borrowerId;
    
    return msg;
}
string Book::toFileFormat() const {
    
    return "";
}
void Book::fromFileFormat(const string& line){


}
