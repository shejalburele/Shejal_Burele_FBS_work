class Student{
	int frn;
	String studentName;
	int distanceCovered;

	void setFrn(int i){
		this.frn=i;
	}
	
	void setStudentName(String i){
		this.studentName=i;
	}

	void setDistanceCovered(int i){
		this.distanceCovered=i;
	}

	void display(){
		System.out.println("frn is: "+this.frn);
		System.out.println("student Name is: "+this.studentName);
		System.out.println("Distance covered is: "+this.distanceCovered);
	}

}
class Test{
	public static void main(String[] args){
	Student d1;
	d1=new Student();
	d1.setFrn(007);
	d1.setStudentName("divya");
	d1.setDistanceCovered(35);
	d1.display();
	}	
}