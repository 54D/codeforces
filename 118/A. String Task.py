vowel = ["a","e","i","o","u","y"]
string = input()
output = string.lower()
for letter in vowel:
    output = output.replace(letter,"")
outputList = list(output)
for i in range(0,len(output)*2,2):
    outputList.insert(i,".")
print("".join(outputList))
