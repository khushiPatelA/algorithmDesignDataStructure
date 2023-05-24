#ifndef DOCUMENTMANAGER_H
#define DOCUMENTMANAGER_H
#include"Document.h"
#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>

//class Document Manager
class DocumentManager{
private:
std::unordered_map<int, Document> DocumentsHeap; //creating a heap for documents can pair int and documets
                                                //+ can store in any order
                                                //+ O(1) lookup , O(1) insertion [average]
                                                //good choice as lots of data is expected
std::vector<int> PatronVec; //creating a vector that stores integers
                            //only need one thing to store so no need to pair
                            //easy access O(1)
                            //insertion is O(n) for worst case
public:
void addDocument(std::string name, int id, int license_limit);
void addPatron(int patronID);
int search(std::string name); // returns docid if name is in the document collection or 0 if the name is not in the collection
bool borrowDocument(int docid, int patronID);  // returns true if document is borrowed, false if it can not be borrowed (invalid patronid or the number of copies current borrowed has reached the license limit)
void returnDocument(int docid, int patronID);
};

#endif 