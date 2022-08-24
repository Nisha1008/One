import random
randNumber = random.randint(1,100)
userGuess = None
guesses = 0
while(userGuess != randNumber):

    userGuess = int(input("Enter your Guess:"))
    if(userGuess == randNumber):
        print("you gueesed it right")
    else:
        if(userGuess>randNumber):
            print("you gussed wrong! Enter a small numbwer")
        else:
            print("you gussed wrong number! Enter a larger number")
        guesses += 1

print(f"you guessed the number in {guesses} guesses")
with open("highscore.txt", "r") as f:
    highscore = int(f.read())

if(guesses<highscore):
    print("you have just broken the high score!")
    with open("highscore.txt","w") as f:
        f.write(str(guesses))