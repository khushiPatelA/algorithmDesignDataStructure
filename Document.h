#ifndef DOCUMENT_H
#define DOCUMENT_H
#include<iostream>
#include<string>
//class document with private attributes
class Document{
friend class DocumentManager;  //friend class Manager 
private:
std::string name;
int copies;
int borrowed;
};
#endif