plainText = input("Enter the plain text: ")

pattern = []
print("Enter the pattern of the caesar cipher keys (Type 0 for done): ")

x = 1
while True:
    x=int(input())
    if x == 0:
        break

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

        j+=1
    elif plainText[i].isdigit():
        cipherText += chr((ord(plainText[i]) + key- 48) % 10 + 48)
        j+=1
    else:
        cipherText += plainText[i]

    j = j % pattern.__len__()

print(f"The cipher text is: {cipherText}")

'''
Input:
    Enter the plain text: Hello World
    Enter the pattern of the caesar cipher keys (Type 0 for done): 
    1 
    2
    3
    0

Output:
    The cipher text is: Igomq Zptoe
'''