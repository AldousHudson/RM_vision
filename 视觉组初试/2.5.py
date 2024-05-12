from random import randint


def random_1000():
    number_dic = {}
    for n in range(1000):
        x = randint(0, 100)
        if x in number_dic:
            number_dic[x] = number_dic[x] + 1
        else:
            number_dic[x] = 1
    return number_dic


numberdic = random_1000()
for key in sorted(numberdic.keys()):
    print(f"{key}: {numberdic[key]}")
