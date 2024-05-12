class Stack():
    def __init__(self):
        self._data = []
        self._top = 0

    def push(self, x):
        self._data.append(x)
        self._top += 1

    def pop(self):
        if (self._top == 0):
            return "栈中已没有元素，无法出栈"
        else:
            self._top -= 1
            return self.data.pop()

    def check(self):
        if self._top == 0:
            print("栈为空")
        else:
            print(self.data)

    def clear(self):
        self._data = []
        self._top = 0
