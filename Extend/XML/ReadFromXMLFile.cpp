#include <iostream>
#include "tinyxml2.h"

using namespace std;
using namespace tinyxml2;

int main() {
    XMLDocument *doc = new XMLDocument;
    doc->LoadFile("./tinyxml2-usage.xml");

    XMLElement *pEBookstore = doc->FirstChildElement();
    cout << pEBookstore->Name() << endl;

    XMLElement *pEBook = pEBookstore->FirstChildElement();
    cout << pEBook->Name() << endl;

    cout << pEBook->FirstAttribute()->Name() << endl;
    cout << pEBook->FirstAttribute()->Value() << endl;

    XMLElement *pETitle = pEBook->FirstChildElement();

    while (pETitle) {
        cout << pETitle->Name() << ":" << pETitle->GetText() << '\t';
        const XMLAttribute *pAttr = pETitle->FirstAttribute();
        while (pAttr) {
            cout << pAttr->Name() << ":" << pAttr->Value() << '\t';
            pAttr = pAttr->Next();
        }
        cout << endl;
        pETitle = pETitle->NextSiblingElement();
    }

    XMLPrinter printer;
    doc->Print(&printer);
    cout << "XML " << printer.CStr() << endl;
    cout << "XML size " << printer.CStrSize() << endl;

    return 0;
}