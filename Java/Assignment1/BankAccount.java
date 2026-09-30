class BankAccount{
	int accountNumber;
	String holderName;
	double currentBalance;
	double interestRate;
}
class Test{
	public static void main(String args[]){
	BankAccount b1;
	b1=new BankAccount();
	b1.accountNumber=23455;
	b1.holderName="Aryan";
	b1.currentBalance=500000;
	b1.interestRate=5;
	System.out.println(b1);
	System.out.println("Account number is: "+b1.accountNumber);
	System.out.println("holder name  is: "+b1.holderName);
	System.out.println("current balance  is: "+b1.currentBalance);
	System.out.println("interest rate  is: "+b1.interestRate);
	}
}



