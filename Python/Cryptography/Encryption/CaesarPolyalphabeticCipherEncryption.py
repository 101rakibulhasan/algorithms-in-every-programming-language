plainText = input("Enter the plain text: ")
numberOfKeys = int(input("Enter the number of keys: "))

pattern = []
print("Enter the pattern of the caesar cipher keys (Type 0 for done): ")

x = 1
while x != 0:
    x=int(input())
    pattern.append(x)

cipherText = ''
j = 0
for i in range(0, len(plainText)):
    key = pattern[j]
    if plainText[i].isalpha():
        if plainText[i].islower():
            cipherText += chr((ord(plainText[i]) + key - 97) % 26 + 97)
        else:
            cipherText += chr((ord(plainText[i]) + key - 65) % 26 + 65)
    elif plainText[i].isdigit():
        cipherText += chr((ord(plainText[i]) + key- 48) % 10 + 48)
    else:
        cipherText += plainText[i]

    j = (j + 1) % numberOfKeys

print(f"The cipher text is: {cipherText}")