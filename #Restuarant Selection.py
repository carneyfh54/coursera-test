#Restuarant Selection
#Chapter 3 PC 18
#Fidel-Hayes Carney

#variable
vege = 'yes'
vegan = 'yes'
gluFree = 'yes'

#input
vege = input('Is anyone in your party a vegetarian?')
vegan = input('Is anyone in your party a vegan? ')
gluFree = input('Is anyone in your party gluten-free?')

print('Here are your restaurant choices:')

if(vege != 'yes' and not vegan == 'yes' and not gluFree == 'yes'):
    print('Joe’s Gourmet Burgers')

if(vege == 'yes' and not vegan == 'yes' and gluFree == 'yes'):
    print('Main Street Pizza Company')

if(vege == 'yes' and not vegan == 'yes' and not gluFree == 'yes'):
    print('Mama’s Fine Italian')

print('Corner Café')
print('The Chef’s Kitchen')