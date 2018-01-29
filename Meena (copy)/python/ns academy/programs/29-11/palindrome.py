# WAP to find the given string is palindrome or not

string=raw_input("enter the string")
reverse=string[::-1]
if string==reverse:
    print string,"is palindrome"
else:
    print string,"it is not paliindrome"
