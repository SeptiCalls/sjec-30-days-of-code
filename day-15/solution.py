roman = {
    "I": 1,
    "V": 5,
    "X": 10,
    "L": 50,
    "C": 100,
    "D": 500,
    "M": 1000
}

numeral = input("Enter Roman numberal: ")
numeral = numeral[::-1]
arabic = roman[numeral[0]]

for i, digit in enumerate(numeral):
    if i > 0 and roman[numeral[i - 1]] > roman[digit]:
        arabic -= roman[digit]
    else:
        arabic += roman[digit]

print(arabic)