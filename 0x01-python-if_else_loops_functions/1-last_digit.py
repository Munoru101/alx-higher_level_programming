#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
last_digit = number % 10
if last_dig > 5:
    print(f"Last digit of {number} is {last_dig} and is greater than 5")
elif last_dig == 0:
    print("last digit of {0} is {1} and is 0".format("number", "last_dig"))
elif last_dig < 6 and last_dig != 0:
    print("Last digit of {number} is {last_dig} and is less than 6 and not 0")
