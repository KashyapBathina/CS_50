pizzas = {
    "cheese" : 9,
    "pepperoni" : 10,
    "vegetable" : 11,
    "chicken" : 12
}

pizzas["meat"] = 14

for pie, price in pizzas.items():
    print(f"A whole {pie} pizza costs {price}")