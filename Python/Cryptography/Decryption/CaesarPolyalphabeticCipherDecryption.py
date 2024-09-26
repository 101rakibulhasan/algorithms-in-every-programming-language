cipherText = input('Enter The Cipher Text: ')

pattern = []
print("Enter the pattern of the caesar cipher keys (Type 0 for done): ")

x = 1
while True:
    x=int(input())
    if x == 0:
        break
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
        j+=1
    elif cipherText[i].isdigit():
        plainText += chr((ord(cipherText[i]) - key - 48) % 10 + 48)
        j+=1
    else:
        plainText += cipherText[i]

    j = (j) % pattern.__len__()

print('The Plain Text is: ', plainText)

'''
Input:
    Enter The Cipher Text: Igomq Zptoe
    Enter the pattern of the caesar cipher keys (Type 0 for done): 
    1
    2
    3
    0

Output:
    The Plain Text is:  Hello World
'''