def sort_odds(list):
    sorted_odds = sorted([x for x in list if x % 2])
    new_list = []
    for x in list:
        if x % 2:
            new_list.append(sorted_odds.pop(0))
        else:
            new_list.append(x)
    return new_list


# x = input("请输入数字列表：")  # 输入样例：1，2，3，4
# xlist = x.split(",")
# xlist = [int(xlist[i]) for i in range(len(xlist))]
# xlist = [2, 4, 8, 7, 6, 1, 3]
# print(sort_odds(xlist))
