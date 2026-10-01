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
	b1.display();
	}
}
	