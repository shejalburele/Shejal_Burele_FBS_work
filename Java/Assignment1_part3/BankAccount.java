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

	int getAccountNumber(){
		return this.accountNumber;
	}

	String getHolderName(){
		return this.holderName;
	}

	double getCurrentBalance(){
		return this.currentBalance;
	}

	double getInterestRate(){
		return this.interestRate;
	}

	BankAccount(){
		System.out.println("default constructor");
		this.accountNumber=355;
		this.holderName="divya";
		this.currentBalance=46;
		this.interestRate=12;
	}

	BankAccount(int i,String n,double c,double r){
		System.out.println("parameterised constructor");
		this.accountNumber=i;
		this.holderName=n;
		this.currentBalance=c;
		this.interestRate=r;
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
	System.out.println(b1.getAccountNumber());
	System.out.println(b1.getHolderName());
	System.out.println(b1.getCurrentBalance());
	System.out.println(b1.getInterestRate());

	
	BankAccount b2;
	b2=new BankAccount();
	b2.display();

	BankAccount b3;
	b3=new BankAccount(45,"vanita",5576,23);
	b3.display();

	}

	
}