class Product:
    def __init__(self, name, price, quantity):
        self.name = name
        self.price = price
        self.quantity = quantity

    def display_product(self):
        print(f"Name: {self.name}")
        print(f"Price: ${self.price}")
        print(f"Quantity: {self.quantity}")

class Inventory:
    def __init__(self):
        self.products = []

    def add_product(self, product):
        self.products.append(product)
        print(f"Product '{product.name}' added to inventory.")

    def remove_product(self, product_name):
        for product in self.products:
            if product.name == product_name:
                self.products.remove(product)
                print(f"Product '{product_name}' removed from inventory.")
                return
        print(f"Product '{product_name}' not found in inventory.")

    def display_inventory(self):
        print("Current Inventory:")
        for product in self.products:
            product.display_product()
            print()

def main():
    inventory = Inventory()

    while True:
        print("Welcome to the Dummy Inventory Management System!")
        print("1. Add a product")
        print("2. Remove a product")
        print("3. Display inventory")
        print("4. Exit")

        choice = input("Enter your choice: ")

        if choice == '1':
            name = input("Enter product name: ")
            price = float(input("Enter product price: $"))
            quantity = int(input("Enter product quantity: "))
            product = Product(name, price, quantity)
            inventory.add_product(product)

        elif choice == '2':
            name = input("Enter product name to remove: ")
            inventory.remove_product(name)

        elif choice == '3':
            inventory.display_inventory()

        elif choice == '4':
            print("Exiting...")
            break

        else:
            print("Invalid choice. Please enter a number from 1 to 4.")

if __name__ == "__main__":
    main()

