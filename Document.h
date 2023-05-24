#ifndef DOCUMENT_H
#define DOCUMENT_H
#include<iostream>
#include<string>

class Document{
friend class DocumentManager;
private:
std::string name;
int copies;
int borrowed;
};
#endif