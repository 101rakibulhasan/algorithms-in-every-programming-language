plainText = input('Enter The Plain Text: ')
key = int(input('Enter The Shift Value: '))

cipherText = ''
for i in range(0, len(plainText)):
    if plainText[i].isalpha():
        if plainText[i].islower():
            cipherText += chr((ord(plainText[i]) + key - 97) % 26 + 97)
        else:
            cipherText += chr((ord(plainText[i]) + key - 65) % 26 + 65)
    elif plainText[i].isdigit():
        cipherText += chr((ord(plainText[i]) + key - 48) % 10 + 48)
    else:
        cipherText += plainText[i]

print('The Cipher Text is: ', cipherText)
