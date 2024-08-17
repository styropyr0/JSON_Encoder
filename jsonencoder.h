#ifndef jsonencoder
#define jsonencoder
#include<Arduino.h>
/**
 * @brief Converts a JSON string into URL encoded string.
 * 
 * @param jsonString The JSON format string.
 * @return URL encoded string.
 */
String encode(String jsonString);

/**
 * @brief Converts an URL encoded string into JSON string.
 * 
 * @param jsonString The URL encoded string.
 * @return JSON format string.
 */
String decode(String codedString); 

#endif