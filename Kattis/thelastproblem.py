import re
name = input()

check = " ".join(name.split())
whitelist = set('abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ')

# print(name[0], name[len(name)-1])
# print(check, name)
check2 = re.sub(r'[^a-zA-Z ]+', '', name)

if check == name and check2 == name:
    if name[0] != " " and name[len(name) - 1] != " ":
        print("Thank you, " + name + ", and farewell!")

