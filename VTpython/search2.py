sentence = set("I love Obama and David Card, two great people. I live in a boat".split())
print sentence 
dico = {
'dict1':{'is','the','boat','tree'},
'dict2':{'apple','blue','red'},
'dict3':{'why','Obama','Card','two'}
}


results = {}
for key, words in dico.items():
    #print key,":",words
    results[key] = (words.intersection(sentence))

print results

