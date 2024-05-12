import math


class point_handwrite():
    def __init__(self, x_input=0, y_output=0):
        self.x_input = x_input
        self.y_output = y_output

    # 求向量的模
    def mod(self):
        return math.sqrt(self.x_input ** 2 + self.y_output ** 2)

    def dot(self, point):
        return self.x_input ** 2 + self.y_output ** 2

    def cross(self, point):
        cos = self.dot(point) / (self.mod() * point.mod())
        sin = math.sqrt(1 - cos*cos)
        return self.mod() * point.mod() * sin

    def __add__(self, other):
        x1 = self.x_input + other.x_input
        y1 = self.y_output + other.y_output
        return point_handwrite(x1, y1)

    def __sub__(self, other):
        x1 = self.x_input - other.x_input
        y1 = self.y_output - other.y_output
        return point_handwrite(x1, y1)

    def __mul__(self, other):
        return self.x_input * other.x_input + self.y_output * other.y_output

    def __str__(self):
        return f"({self.x_input}, {self.y_output})"


# point1 = point_handwrite(0, 1)
# point2 = point_handwrite(1, 0)
# print(point1.mod())
# print(point1.dot(point2))
# print(point1.cross(point2))
# print(point1 + point2)
# print(point1 - point2)
# print(point1 * point2)
