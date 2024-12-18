##
##Program :Chapter 5 PC 4 - Automobile Cost
##Date: 4/03/2024
##Author : Fidel-Hayes Carney

def main():
    #declaration of variables
    loan = 0.0
    insurance = 0.0
    gas = 0.0
    oil = 0.0
    tires = 0.0
    maintenance = 0.0

    #accept user input
    loan = float(input('Enter the amount paid on loan for the month:'))
    insurance = float(input('Enter the amount paid on insurance for the month:'))
    gas = float(input('Enter the amount paid for gas for the month:'))
    oil = float(input('Enter the amount paid on oil for the month:'))
    tires = float(input('Enter the amount paid on tires for the month:'))
    maintenance = float(input('Enter the amount paid on maintenance for the month:'))

    #calling showExpense function
    showExpense(loan,insurance,gas,oil,tires,maintenance)

##function definition for showExpense
def showExpense(loan, insurance, gas, oil, tires, maintenance):
    #computing monthlyExpense
    monthlyExpense = loan + insurance + gas + oil + tires + maintenance

    #computing annualExpense
    annualExpense = monthlyExpense * 12

    #display
    print(f'The monthly expense on the automobile is {monthlyExpense:.2f}')
    print(f'The annual expense on the automobile is {annualExpense:.2f}')



##calling the main
main()