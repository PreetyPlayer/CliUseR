#Required Maximize Windows For Windows CMD
#Possible to change the object color
from time import sleep
from os import system as s
def cuple(tapp,neww):
    print("\n\n\n\n\n\n\n\n\n\n")
    print(tapp+"     ________________        ____  ")
    print(tapp+"    /          |----.\      |____| ")
    print(tapp+" __/___________|____|_\_____|__    ")
    print(tapp+"[                               ]  ")
    print(tapp+"|_____( @ )   _/\_  ( @ ) _____/   ")
    sleep(0.5)
tap="\t"
new="\n"
for y in range(3):
    for x in range(17):
        s("cls")
        tapp=tap*x
        neww=new*x
        cuple(tapp,neww)
