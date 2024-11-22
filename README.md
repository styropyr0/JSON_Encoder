# JSON_Encoder for Arduino

**JSON_Encoder** is a lightweight Arduino library designed to handle URL encoding and decoding for JSON strings. This library is particularly useful for IoT and microcontroller applications where JSON data must be transmitted over networks with URL-safe formatting.

## Features

- **URL Encoding**: Converts JSON strings into URL-encoded format for safe transmission.
- **URL Decoding**: Reconstructs JSON strings from URL-encoded strings.
- **Simple API**: Minimal and intuitive function calls for seamless integration.
- **Optimized for Arduino**: Lightweight and compatible with all Arduino-compatible boards.

## Installation

### Using the Arduino Library Manager

1. Open the Arduino IDE.
2. Navigate to **Sketch** > **Include Library** > **Manage Libraries...**.
3. Search for `JSON_Encoder` and click **Install**.

### Manual Installation

1. Download the library as a ZIP file from the [GitHub repository](https://github.com/styropyr0/JSON_Encoder).
2. Open the Arduino IDE.
3. Navigate to **Sketch** > **Include Library** > **Add .ZIP Library...**.
4. Select the downloaded ZIP file.

## API Reference

### `encode(String jsonString)`

- **Description**: Converts a JSON string into a URL-encoded string.
- **Parameters**: 
  - `jsonString` (String): The input JSON string.
- **Returns**: A URL-encoded string.

### `decode(String codedString)`

- **Description**: Converts a URL-encoded string back into a JSON string.
- **Parameters**: 
  - `codedString` (String): The URL-encoded input string.
- **Returns**: A JSON-formatted string.

## Example Usage

### Encoding a JSON String

```cpp
#include <JSON_Encoder.h>

void setup() {
    Serial.begin(9600);
    String json = "{\"temperature\":23.5,\"humidity\":45}";
    String encoded = encode(json);
    Serial.println("Encoded: " + encoded);
}

void loop() {
    // No loop actions needed
}
```

### Decoding a URL-Encoded String

```cpp
#include <JSON_Encoder.h>

void setup() {
    Serial.begin(9600);
    String encoded = "%7B%22temperature%22%3A23.5%2C%22humidity%22%3A45%7D";
    String json = decode(encoded);
    Serial.println("Decoded: " + json);
}

void loop() {
    // No loop actions needed
}
```

### Sample Output

**Encoded**: `%7B%22temperature%22%3A23.5%2C%22humidity%22%3A45%7D`  
**Decoded**: `{"temperature":23.5,"humidity":45}`

## Contributing

Contributions are welcome! Feel free to open issues or submit pull requests to improve the library.

## License

This library is licensed under the [MIT License](LICENSE).

## Author

Developed by **Saurav Sajeev**. 
