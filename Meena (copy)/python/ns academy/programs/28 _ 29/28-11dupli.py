def two_same(string)
   for i in range(len(string)-1):
      if string[i] == string[i+1]:
         return True
   return False

result = ""
while not two_same(result):
   result = input("enter the same letter twice:")
print(result)
