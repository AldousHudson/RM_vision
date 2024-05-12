def camelcase(text):
    word_list = text.split(" ")
    text1 = ""
    for n in word_list:
        text1 += n.title()
    return text1


# text = input("请输入字符串：")
# print(camelcase(text))
