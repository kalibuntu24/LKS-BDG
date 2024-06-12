def yks_encrypt(text, shift):
    encrypted_text = ""
    for char in text:
        if char.isalpha():
            base = ord('A') if char.isupper() else ord('a')
            encrypted_char = chr((ord(char) - base + shift) % 26 + base)
            encrypted_text += encrypted_char
        else:
            encrypted_text += char
    return encrypted_text

plaintext = "LKS{FLAG_PALSU}"
shift_amount = 3
encrypted_text = yks_encrypt(plaintext, shift_amount)
print("Plaintext:", plaintext)
print("Encrypted:", encrypted_text)