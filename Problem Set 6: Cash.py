from cs50 import get_float

while True:
    change = get_float("Change: ")
    if change >= 0:
        break

change_owed = round(change * 100)

num_coins = 0

while change_owed > 0:
    if change_owed >= 25:
        change_owed -= 25
        num_coins += 1
    elif change_owed >= 10:
        change_owed -= 10
        num_coins += 1
    elif change_owed >= 5:
        change_owed -= 5
        num_coins += 1
    else:
        change_owed -= 1
        num_coins += 1

print(num_coins)
