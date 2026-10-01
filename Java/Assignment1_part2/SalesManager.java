class SalesManager{
	int id;
	String name;
	double incentive;
	double target;

	void setId(int i){
		this.id=i;
	}
	
	void setName(String i){
		this.name=i;
	}

	void setIncentive(double i){
		this.incentive=i;
	}

	void setTarget(double i){
		this.target=i;
	}

	void display(){
		System.out.println("id is: "+this.id);
		System.out.println("name is: "+this.name);
		System.out.println("incentive is: "+this.incentive);
		System.out.println("target is: "+this.target);
	}


}
class Test{
	public static void main(String[] args){
	SalesManager sm;
	sm=new SalesManager();
	sm.setId(1);
	sm.setName("Shreyas");
	sm.setIncentive(2000);
	sm.setTarget(30000);
	sm.display();
	}
}

