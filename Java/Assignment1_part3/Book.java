class Book{
	int id;
	String name;
	double price;

	void setId(int i){
		this.id=i;
	}

	void setName(String i){
		this.name=i;
	}

	void setPrice(double i){
		this.price=i;
	}

	int getId(){
		return this.id;
	}

	String getName(){
		return this.name;
	}

	double getPrice(){
		return this.price;
	}


	Book(){
		System.out.println("default constructor");
		this.id=355;
		this.name="divya";
		this.price=46;
	}

	Book(int i,String n,double c){
		System.out.println("parameterised constructor");
		this.id=i;
		this.name=n;
		this.price=c;
	}


	void display(){
		System.out.println("id is: "+this.id);
		System.out.println("name is: "+this.name);
		System.out.println("price is: "+this.price);
	}

}
class Test{
	public static void main(String args[]){
	Book b1;
	b1=new Book();
	b1.setId(1);
	b1.setName("java");
	b1.setPrice(500);
	System.out.println(b1.getId());
	System.out.println(b1.getName());
	System.out.println(b1.getPrice());

	
	Book b2;
	b2=new Book();
	b2.display();

	Book b3;
	b3=new Book(45,"vanita",5576);
	b3.display();

	}
}
	