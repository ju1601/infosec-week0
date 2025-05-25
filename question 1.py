#russian roulette
import random
def roulette():
    a=input("take a shot? yes or no? ")
    if a=="yes":
        x=random.randint(1,6)
        if x==1:
            print("dead")
        else:
            print("phew!close")
    elif a=="no":
        print("goodbye")
    else:
        print("invalid input")
roulette()