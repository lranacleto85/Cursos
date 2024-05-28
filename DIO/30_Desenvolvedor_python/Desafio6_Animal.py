A = input()
B = input()
C = input()

if A == "vertebrado" and B == "ave" and C == "carnivoro":
    resposta = "aguia"

if A == "vertebrado" and B == "ave" and C == "onivoro":
    resposta = "pomba"

if A == "vertebrado" and B == "mamifero" and C == "onivoro":
    resposta = "homem"

if A == "vertebrado" and B == "mamifero" and C == "herbivoro":
    resposta = "vaca"

if A == "invertebrado" and B == "inseto" and C == "hematofago":
    resposta = "pulga"

if A == "invertebrado" and B == "inseto" and C == "herbivoro":
    resposta = "lagarta"

if A == "invertebrado" and B == "anelideo" and C == "hematofago":
    resposta = "sanguessuga"

if A == "invertebrado" and B == "anelideo" and C == "onivoro":
    resposta = "minhoca"
try:
    print(resposta)
except KeyError:
    print("Resposta inválida!")