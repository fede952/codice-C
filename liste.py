lista=[1,"ciao",3.14,[1,2,3],(18.3839,80.12444),{"nome":"pinco","cognome":"pallino"}]
print(lista[0])
print(lista[1])
print(lista[3][1])
print(lista[4][0])
print(lista[5]["cognome"])
print(lista)
lista.append("ciao")
print(lista)
lista.insert(2,"ciao")
print(lista)
lista.pop()
print(lista)
del lista[0]
print(lista)