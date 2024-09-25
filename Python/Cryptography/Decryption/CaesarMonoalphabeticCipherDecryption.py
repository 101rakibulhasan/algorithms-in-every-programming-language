cipherText = input('Enter The Cipher Text: ')
key = int(input('Enter The Shift Value: '))

plainText = ''
for i in range(0, len(cipherText)):
    if cipherText[i].isalpha():
        if cipherText[i].islower():
            plainText += chr((ord(cipherText[i]) - key - 97) % 26 + 97)
        else:
            plainText += chr((ord(cipherText[i]) - key - 65) % 26 + 65)
    elif cipherText[i].isdigit():
        plainText += chr((ord(cipherText[i]) - key - 48) % 10 + 48)
    else:
        plainText += cipherText[i]

print('The Plain Text is: ', plainText)
