# CLT-Encryption
C++ repostory that transforms plaintext strings into encrypted bytecode, preventing being shown in debugging tools


# Key Features

🔐 Compile-Time Encryption - Zero runtime performance impact
🛡️ Multi-Layer Security - 5-round encryption process with AES S-Box
🔑 Unique Keys - Individual 256-bit keys per string
⚡ Simple Integration - Single header, no dependencies
🎯 Easy Usage - Just wrap strings with CLT("text")


# How It Works

**Compile-Time Processing: Strings are encrypted during compilation using file path, line number, and content as entropy sources
Multi-Round Encryption: Each byte undergoes XOR operations, AES S-Box substitution, and bit rotation
Runtime Decryption: Encrypted data is seamlessly decrypted when accessed
Memory Safety: Thread-local storage ensures safe concurrent access**
