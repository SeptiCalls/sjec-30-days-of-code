import math

def main():
    radius = int(input("Radius: "))
    square = int(input("Side: "))
    triangle = int(input("Triangle: "))
    length, breadth = map(int, input("Rectanglle: ").split())

    shapes = {
        "Circle": math.pi * radius ** 2,
        "Square": square ** 2,
        "Triangle": triangle_area(triangle),
        "Rectangle": length * breadth
    }

    print()

    for shape, area in sorted(shapes.items(), key=lambda a: a[1], reverse=True):
        print(shape)


def triangle_area(side):
    s = (3 * side) / 2
    return math.sqrt((s - side) ** 3 * s)


if __name__ == "__main__":
    main()