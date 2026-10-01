class BankAccount{
	int accountNumber;
	String holderName;
	double currentBalance;
	double interestRate;

	void setAccountNumber(int i){
		this.accountNumber=i;
	}

	void setHolderName(String i){
		this.holderName=i;
	}

	void setCurrentBalance(double i){
		this.currentBalance=i;
	}

	void setInterestRate(double i){
		this.interestRate=i;
	}

	void display(){
		System.out.println("Account number is: "+this.accountNumber);
		System.out.println("holder name  is: "+this.holderName);
		System.out.println("current balance  is: "+this.currentBalance);
		System.out.println("interest rate  is: "+this.interestRate);
	}



}
class Test{
	public static void main(String args[]){
	BankAccount b1;
	b1=new BankAccount();
	b1.setAccountNumber(1233455);
	b1.setHolderName("Aryan");
	b1.setCurrentBalance(500000);
	b1.setInterestRate(5);
	b1.display();
	}
}
