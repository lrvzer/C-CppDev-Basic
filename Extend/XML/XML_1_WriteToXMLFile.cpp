#include <iostream>
#include "tinyxml2.h"

using namespace std;
using namespace tinyxml2;

//class XMLDocument;
//class XMLElement;
//class XMLAttribute;
//class XMLComment;
//class XMLText;
//class XMLDeclaration;
//class XMLUnknown;
//class XMLPrinter;

int main() {
    XMLDocument doc;
    // 声明
    XMLDeclaration *pDecl = doc.NewDeclaration("xml version=\"1.0\" encoding=\"utf-8\"");
    doc.LinkEndChild(pDecl);
    // 注释
    doc.LinkEndChild(doc.NewComment("This is a XML comment"));
    // 父元素
    XMLElement *pEBookstore = doc.NewElement("bookstore");
    // 子元素
    XMLElement *pEBook = doc.NewElement("book");
    // 属性
    pEBook->SetAttribute("category", "COOKING");

    XMLElement *pETitle = doc.NewElement("title");
    pETitle->SetAttribute("lang", "en");
    pETitle->SetAttribute("id", "123456");
    pETitle->SetText("Everyday Italian");

    XMLElement *pEAuthor = doc.NewElement("author");
    pEAuthor->SetText("Giada De Laurentiis");

    XMLElement *pEYear = doc.NewElement("year");
    pEYear->SetText("Everyday Italian");

    XMLElement *pEPrice = doc.NewElement("price");
    pEPrice->SetText("Everyday Italian");

    // 逐层关闭
    pEBook->LinkEndChild(pETitle);
    pEBook->LinkEndChild(pEAuthor);
    pEBook->LinkEndChild(pEYear);
    pEBook->LinkEndChild(pEPrice);
    pEBookstore->LinkEndChild(pEBook);
    doc.LinkEndChild(pEBookstore);

    // 打印
//    doc.Print();

    // 保存
    doc.SaveFile("./tinyxml2-gen.xml");
    return 0;
}
