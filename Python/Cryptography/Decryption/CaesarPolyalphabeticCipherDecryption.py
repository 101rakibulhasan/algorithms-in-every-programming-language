cipherText = input('Enter The Cipher Text: ')
numberOfKeys = int(input("Enter the number of keys: "))

pattern = []
print("Enter the pattern of the caesar cipher keys (Type 0 for done): ")

x = 1
while x != 0:
    x=int(input())
    pattern.append(x)

j = 0
plainText = ''
for i in range(0, len(cipherText)):
    key = pattern[j]
    if cipherText[i].isalpha():
        if cipherText[i].islower():
            plainText += chr((ord(cipherText[i]) - key - 97) % 26 + 97)
        else:
            plainText += chr((ord(cipherText[i]) - key - 65) % 26 + 65)
    elif cipherText[i].isdigit():
        plainText += chr((ord(cipherText[i]) - key - 48) % 10 + 48)
    else:
        plainText += cipherText[i]

    j = (j + 1) % numberOfKeys

print('The Plain Text is: ', plainText)