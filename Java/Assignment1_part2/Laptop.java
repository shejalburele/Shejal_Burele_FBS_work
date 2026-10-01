class Laptop{
	int id;
	String name;
	int battery;
	int storage;

	void setId(int i){
		this.id=i;
	}
	
	void setName(String i){
		this.name=i;
	}

	void setBattery(int i){
		this.battery=i;
	}

	void setStorage(int i){
		this.storage=i;
	}

	void display(){
		System.out.println("id is: "+this.id);
		System.out.println("name is: "+this.name);
		System.out.println("battery is: "+this.battery);
		System.out.println("storage is: "+this.storage);
	}


}
class Test{
	public static void main(String[] args){
	Laptop l1;
	l1=new Laptop();
	l1.setId(1);
	l1.setName("hp");
	l1.setBattery(50);
	l1.setStorage(512);
	l1.display();
	}
}