class Book{
	int id;
	String name;
	double price;
}
class Test{
	public static void main(String args[]){
	Book b1;
	b1=new Book();
	b1.id=1;
	b1.name="java";
	b1.price=500;
	System.out.println(b1);
	System.out.println("id is: "+b1.id);
	System.out.println("name is: "+b1.name);
	System.out.println("price is: "+b1.price);
	}
}
	