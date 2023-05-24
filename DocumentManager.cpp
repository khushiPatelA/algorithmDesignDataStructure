#include "DocumentManager.h"

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

#include "Document.h"
using namespace std;

void DocumentManager::addDocument(std::string name, int id, int license_limit) {
  Document Temp;
  Temp.name = name;
  Temp.copies = license_limit;
  Temp.borrowed = 0;
  DocumentsHeap.insert({id, Temp});
}

void DocumentManager::addPatron(int patronID) {
  PatronVec.push_back(patronID);
}

int DocumentManager::search(std::string name) {
  // returns docid if name is in the document collection or 0 if the name is not
  // in the collection
  unordered_map<int, Document>::const_iterator ite;
  for (auto ite = DocumentsHeap.begin(); ite != DocumentsHeap.end(); ite++) {
    Document temp = ite->second;
    int tempId = ite->first;
    if (temp.name == name) {
      return tempId;
    }
  }
  return 0;
}

bool DocumentManager::borrowDocument(int docid, int patronID) {
int index = -1; 
for (int i=0; i<PatronVec.size(); i++){
    if (PatronVec.at(i)==patronID){
        index = i;
        break;
    }
}
if (index == -1){
    return false;
}
auto ite = DocumentsHeap.find(docid);
if (ite == DocumentsHeap.end()){
    return false;
}
Document temp = ite->second; 
if (temp.borrowed >= temp.copies){
    return false;
}

temp.borrowed = temp.borrowed +1;
return true; 
}

void DocumentManager::returnDocument(int docid, int patronID) {
auto ite = DocumentsHeap.find(docid);
if (ite == DocumentsHeap.end()){
    return;
}
Document temp = ite->second; 
temp.borrowed--; 
}
