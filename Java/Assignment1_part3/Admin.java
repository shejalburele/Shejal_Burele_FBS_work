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

	int getId(){
		return this.id;
	}

	String getName(){
		return this.name;
	}
	
	double getSalary(){
		return this.salary;
	}

	double getAllowance(){
		return this.allowance;
	}

	Admin(){
		System.out.println("Dafault constructor");
		this.id=2;
		this.name="aryan";
		this.salary=200000;
		this.allowance=1000;
	}

	Admin(int id,String name,double salary,double allowance){
		System.out.println("parameterised constructor");
		this.id=id;
		this.name=name;
		this.salary=salary;
		this.allowance=allowance;
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
	System.out.println(d1.getId());
	System.out.println(d1.getName());
	System.out.println(d1.getSalary());
	System.out.println(d1.getAllowance());

	Admin d2;
	d2=new Admin();
	d2.display();

	Admin d3;
	d3=new Admin(3,"vanita",30000,2000);
	d3.display();
	
	}
}