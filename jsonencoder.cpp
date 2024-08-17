#include "jsonencoder.h"

/**
 * @brief Converts a JSON string into URL encoded string.
 * 
 * @param jsonString The JSON format string.
 * @return URL encoded string.
 */
String encode(String jsonString){
    for(int i=0; i<jsonString.length(); i++){
        switch(jsonString.charAt(i)){
            case ' ': jsonString[i]='+';
            break;
            case ':': jsonString[i]='A';
            break;
            case '{': jsonString[i]='B';
            break;
            case '}': jsonString[i]='C';
            break;
            case '"': jsonString[i]='D';
            break;
            case ',': jsonString[i]='E';
            break;
            case '.': jsonString[i]='F';
            break;
        }
    }
    return jsonString;
}

/**
 * @brief Converts an URL encoded string into JSON string.
 * 
 * @param jsonString The URL encoded string.
 * @return JSON format string.
 */
String decode(String codedString){
    for(int i=0; i<codedString.length(); i++){
        switch(codedString.charAt(i)){
            case '+': codedString[i]=' ';
            break;
            case 'A': codedString[i]=':';
            break;
            case 'B': codedString[i]='{';
            break;
            case 'C': codedString[i]='}';
            break;
            case 'D': codedString[i]='"';
            break;
            case 'E': codedString[i]=',';
            break;
            case 'F': codedString[i]='.';
            break;
        }
    }
    return codedString;
}