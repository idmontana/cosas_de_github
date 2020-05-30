import matplotlib.pyplot as plt

t_l = []
y_l = []

with open("datos.txt", "r") as data:
    for i in data:
        renglon = i.split(',')
        t_l.append(float(renglon[0]))
        y_l.append(float(renglon[1].rstrip('\n')))
        
fig = plt.figure(figsize=(8,8))

plt.scatter(t_l, y_l)
plt.savefig("grafica_y.pdf")