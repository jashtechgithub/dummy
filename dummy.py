def calculate_rectangle_area(length, width):
    area = length * width
    return area

if __name__ == "__main__":
    length = float(input("Enter the length of the rectangle: "))
    width = float(input("Enter the width of the rectangle: "))

    rectangle_area = calculate_rectangle_area(length, width)
    print("The area of the rectangle is:", rectangle_area)
