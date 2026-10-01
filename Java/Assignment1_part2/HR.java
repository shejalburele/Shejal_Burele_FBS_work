class HR{              
	int id;
	String name;
	double salary;
	double commission;

	void setId(int i){
		this.id=i;
	}
	
	void setName(String i){
		this.name=i;
	}

	void setSalary(double i){
		this.salary=i;
	}

	void setCommission(int i){
		this.commission=i;
	}

	void display(){
		System.out.println("id is: " +this.id);
		System.out.println("name is: " +this.name);
		System.out.println("salary is: "+this.salary);
		System.out.println("commission is: "+this.commission);
	}


}
class Test{
	public static void main(String[] args){
	HR d1; //reference
	d1=new HR();
	d1.setId(1);
	d1.setName("shejal");
	d1.setSalary(100000);
	d1.setCommission(12000);
 	d1.display();
	}
}