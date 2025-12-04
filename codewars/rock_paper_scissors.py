"""
Rock, Paper, Scissors
f57fadd48400d8d1b1a2f24ee2cf21b82f69f84052a6c209215982c4c2eb06b9

"""

def rps(p1, p2):
    #your code here
    p1_limpa = p1.lower()
    p2_limpa = p2.lower()
    
    if p1_limpa == p2_limpa:
        return "Draw!"
    elif (p1_limpa == "rock" and p2_limpa == "scissors") or (p1_limpa == "scissors" and p2_limpa == "paper") or (p1_limpa == "paper" and p2_limpa == "rock"):
        return "Player 1 won!"
    else:
        return "Player 2 won!"