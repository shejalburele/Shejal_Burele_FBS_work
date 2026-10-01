class Admin{              
	int id;
	String name;
	double salary;
	double allowance;

	void setId(int i){
	this.id=i;
	}

	void setName(String i){
	this.name=i;
	}

	void setSalary(double i){
	this.salary=i;
	}

	void setAllowance(double i){
	this.allowance=i;
	}

	void display(){
	System.out.println("id is: " +this.id);
	System.out.println("name is: " +this.name);
	System.out.println("salary is: "+this.salary);
	System.out.println("allowance is: "+this.allowance);
	}
}
class Test{
	public static void main(String[] args){
	Admin d1; //reference
	d1=new Admin();
	d1.setId(1);
	d1.setName("shejal");
	d1.setSalary(100000);
	d1.setAllowance(1000);
	d1.display();
	}
}