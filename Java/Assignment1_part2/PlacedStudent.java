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
	d1.display();
	}
}