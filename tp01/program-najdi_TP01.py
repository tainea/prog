#!/usr/bin/python
# -*- coding: latin-1 -*-
# This Python file uses the following encoding: utf-8
import os, sys


# Ex 2,
# 3 nombres réels et qui affiche a l’écran la somme de ces 3 nombres

nb1 = int(input("input 1st number "))
nb2 = int(input("input 2nd number "))
nb3 = int(input("input 3rd number "))

somme = (nb1 + nb2 + nb3)
print (somme)


# Ex 3,
# conversion de francs belge en euros

bef = float(input("input the amount in BEF "))
euro = float(bef / 40.3)
print ("you have BEF ", bef, " and it is equal to EUR ", euro, ".")


# Ex 4,
# écrire un algorithme qui prend une somme en euros 
# et la décompose en billets de 10E, en pièces de 2E et de 1E.

montant = float(input("input your amount "))
rest1 = float(montant % 10)
nbDixEuro = int(montant // 10)

rest2 = float(rest1 % 2)
nbDeuxEuro = int(rest1 // 2)

rest3 = float(rest2 % 1)
nbUnEuro = int(rest2 // 1)
    
print ("your input amount EUR ", montant, " can be decomposed into : ")
print (nbDixEuro, " billets de 10EUR")
print (nbDeuxEuro, " pièces de 2EUR")
print (nbUnEuro, " pièces de 1EUR")
# print ("and the remaining EUR ", rest3)
print ("and the remaining EUR ", (montant - nbDixEuro*10 - nbDeuxEuro*2 - nbUnEuro*1))
