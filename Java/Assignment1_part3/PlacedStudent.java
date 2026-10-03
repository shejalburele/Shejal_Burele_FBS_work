class PlacedStudent{
	int frn;
	String studentName;
	int distanceCovered;
	String companyName;
	String designation;

	void setFrn(int i){
		this.frn=i;
	}
	
	void setStudentName(String i){
		this.studentName=i;
	}

	void setDistanceCovered(int i){
		this.distanceCovered=i;
	}

	void setCompanyName(String i){
		this.companyName=i;
	}

	void setDesignation(String i){
		this.designation=i;
	}

	int getFrn(){
		return this.frn;
	}

	String getStudentName(){
		return this.studentName;
	}

	int getDistanceCovered(){
		return this.distanceCovered;
	}

	String getDesignation(){
		return this.designation;
	}

	String getCompanyName(){
		return this.companyName;
	}


	PlacedStudent(){
		System.out.println("default constructor");
		this.frn=35;
		this.studentName="divya";
		this.distanceCovered=30;
		this.designation="intern";
		this.companyName="Apple";
	}

	PlacedStudent(int i,String n,int c,String r,String a){
		System.out.println("parameterised constructor");
		this.frn=i;
		this.studentName=n;
		this.distanceCovered=c;
		this.designation=r;
		this.companyName=a;
	}



	void display(){
		System.out.println("frn is: "+this.frn);
		System.out.println("student name is: "+this.studentName);
		System.out.println("distance covered is: "+this.distanceCovered);
		System.out.println("company name is: "+this.companyName);
		System.out.println("designation is: "+this.designation);
	}

}
class Test{
	public static void main(String[] args){
	PlacedStudent d1;
	d1=new PlacedStudent();
	d1.setFrn(1);
	d1.setStudentName("shejal");
	d1.setDistanceCovered(20);
	d1.setCompanyName("amazon");
 	d1.setDesignation("manager");
	System.out.println(d1.getFrn());
	System.out.println(d1.getStudentName());
	System.out.println(d1.getDistanceCovered());
	System.out.println(d1.getDesignation());
	System.out.println(d1.getCompanyName());


	PlacedStudent d2;
	d2=new PlacedStudent();
	d2.display();

	PlacedStudent d3;
	d3=new PlacedStudent(4,"aryan",70,"microsoft","developer");
	d3.display();

	}
}