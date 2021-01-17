alphabet = {"A": "@",
            "B": "8",
            "C": "(",
            "D": "|)",
            "E": "3",
            "F": "#",
            "G": "6",
            "H": "[-]",
            "I": "|",
            "J": "_|",
            "K": "|<",
            "L": "1",
            "M": "[]\\/[]",
            "N": "[]\\[]",
            "O": "0",
            "P": "|D",
            "Q": "(,)",
            "R": "|Z",
            "S": "$",
            "T": "']['",
            "U": "|_|",
            "V": "\\/",
            "W": "\\/\\/",
            "X": "}{",
            "Y": "`/",
            "Z": "2"
            }

case = input()
upper_case = case.upper()

for i in upper_case:
    if i.isalpha() and i != " ":
        print(alphabet[i], end="")
    else:
        print(i, end="")