word=input("Enter the word : ")
def palindrome(name):
    if (name==name[::-1]):
        print(f"{word} is palindrome")
    else:
        print((f"{word} is not palindrome"))
palindrome(word)