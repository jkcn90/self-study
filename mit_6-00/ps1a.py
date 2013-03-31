## This program calculates the credit balance after one year if a person only pays the minimum required.
## Minimum Monthly Payment = Minimum Monthly Rate x Balance
## Interest Paid = Annual Interest Rate / 12 x Balance
## Principal Paid = Minimum Monthly Payment - Interest Paid
## Remaining Balance = Balance - Principal Paid

## Input: Ask the user for the balance, annual interest rate, and minimum monthly payment rate.
balance = float(raw_input('Enter the outstanding balance of the credit card: '))
annualInterestRate = float(raw_input('Enter the annual credit card interest rate as a decimal: '))
minimumMonthlyPaymentRate = float(raw_input('Enter the minimum monthly rate as a decimal: '))

## Output: For each month print:
##         1. Minimum monthly Payment
##         2. Remaining Balance
##         3. Principal Paid

##         For the final step print:
##         1. Total amount paid for the year
##         2. Remaining Balance
month = 1
totalAmountPaid = 0
while (month <= 12):
    print 'Month: ', month
    
    # Calculate and print minimum monthly payment
    minimumMonthlyPayment = round(minimumMonthlyPaymentRate * balance, 2)
    print 'Minimum Monthly Payment: $',minimumMonthlyPayment

    # Calculate and print principle paid
    interestPaid = round(annualInterestRate / 12 * balance, 2)
    thisMonthPrinciplePaid = minimumMonthlyPayment - interestPaid
    print 'Principle paid: $', thisMonthPrinciplePaid

    # Calculate and print remaining balance
    balance = balance - thisMonthPrinciplePaid
    print 'Remaining balance: $', balance

    totalAmountPaid = totalAmountPaid + minimumMonthlyPayment
    month += 1

print 'RESULT'
print 'Total amount paid: $',totalAmountPaid
print 'Remaining balance: $',balance
