cmake_minimum_required(VERSION 3.22)
project(Extend)

set(CMAKE_CXX_STANDARD 14)

# XML
add_executable(WriteToXMLFile XML/tinyxml2.h XML/tinyxml2.cpp XML/WriteToXMLFile.cpp)
add_executable(ReadFromXMLFile XML/tinyxml2.h XML/tinyxml2.cpp XML/ReadFromXMLFile.cpp)

# JSON
add_executable(JSONObject JSON/json/json-forwards.h JSON/json/json.h JSON/jsoncpp.cpp JSON/JSONObject.cpp)
add_executable(JSONArray JSON/json/json-forwards.h JSON/json/json.h JSON/jsoncpp.cpp JSON/JSONArray.cpp)
add_executable(WriteToJSONFile JSON/json/json-forwards.h JSON/json/json.h JSON/jsoncpp.cpp JSON/WriteToJSONFile.cpp)
add_executable(ReadFromJSONFile JSON/json/json-forwards.h JSON/json/json.h JSON/jsoncpp.cpp JSON/ReadFromJSONFile.cpp)

# MySQL