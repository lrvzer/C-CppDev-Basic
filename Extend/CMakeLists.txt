cmake_minimum_required(VERSION 3.22)
project(Extend)

set(CMAKE_CXX_STANDARD 14)

# XML
add_executable(XML_1_WriteToXMLFile XML/XML_1_WriteToXMLFile.cpp XML/tinyxml2.cpp)
add_executable(XML_2_WriteToXMLFile XML/XML_2_ReadFromXMLFile.cpp XML/tinyxml2.cpp)

# JSON
add_executable(JSON_1_JSONObject JSON/JSON_1_JSONObject.cpp JSON/jsoncpp.cpp)
add_executable(JSON_2_JSONArray JSON/JSON_2_JSONArray.cpp JSON/jsoncpp.cpp)
add_executable(JSON_3_WriteToJSONFile JSON/JSON_3_WriteToJSONFile.cpp JSON/jsoncpp.cpp)
add_executable(JSON_4_ReadFromJSONFile JSON/JSON_4_ReadFromJSONFile.cpp JSON/jsoncpp.cpp)

# SQLite
add_executable(UseSQLite3 SQLite/UseSQLite3.c)