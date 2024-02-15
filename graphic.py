import matplotlib.pyplot as plt
import sys
# get name of file from programm arguments
file_name = sys.argv[1]

m = []
# reading inputs from file
with open(file_name, 'r') as file:
    for line in file:
        if line[-2] == ':':
            m.append([])
        else:
            m[-1].append(float(line.strip()))

print(m[19])

# # Sample data
x = [i for i in range(1, 21)]
# array average value
y = [float(sum(m[i])) / len(m[i]) for i in range(20)]

# print(y)
# # Plotting the data
plt.plot(x, y)

# # Adding labels and title
plt.xlabel('X-axis')
plt.ylabel('Y-axis')
plt.title(file_name)

# # Displaying the plot
plt.show()
