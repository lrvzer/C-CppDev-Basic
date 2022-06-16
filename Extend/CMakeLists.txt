cmake_minimum_required(VERSION 3.22)
project(Extend)

set(CMAKE_CXX_STANDARD 14)

# XML
add_executable(WriteToXMLFile XML/tinyxml2.h XML/tinyxml2.cpp XML/WriteToXMLFile.cpp)
add_executable(ReadFromXMLFile XML/tinyxml2.h XML/tinyxml2.cpp XML/ReadFromXMLFile.cpp)

# JSON
add_executable(JSON JSON/json/json-forwards.h JSON/json/json.h JSON/jsoncpp.cpp JSON/main.cpp)
