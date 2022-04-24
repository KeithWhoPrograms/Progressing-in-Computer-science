//Author Keith Ellison
//03 20 2022
//CS 320 Module Three

// <include> string;

//package cs320_module3_contact_contactService;

public class Contact {
	
private String contactID;
private String firstName;
private String lastName;
private String phoneNumber;
private String address;

public Contact(String cid, String first, String last, String phone, String addr){
	
	if(cid == null || cid.length() > 10) {
		throw new IllegalArgumentException("Invalid contact ID - null or exceeds 10 characters");
	}
	
	if(first == null || first.length() > 10) {
		throw new IllegalArgumentException("First name error, either no entry or entry is too long");
	}
	
	if(last == null || last.length() > 10) {
		throw new IllegalArgumentException("Last name error, either no entry or entry is too long");
	}
	
	if(phone == null || phone.length() == 10) {
		throw new IllegalArgumentException("Phone number error - either no entry or the number is too long");
	}
	
	if(addr == null || addr.length() > 30) {
		throw new IllegalArgumentException("Address value is either empty or too long");
	}
	
	this.contactID = cid;
	this.firstName = first;
	this.lastName = last;
	this.phoneNumber = phone;
	this.address = addr;

}

public String getContactID() {
	return this.contactID;
}

public String getFirstName() {
	return this.firstName;
}

public String getLastName() {
	return this.lastName;
}

public String getPhoneNumber() {
	return this.phoneNumber;
}

public String getAddress(){
	return this.address;
}



public void setContactID(String cid) {
	this.contactID = cid;
}

public void setFirstName(String fn) {
	this.firstName = fn;
}

public void setLastName(String ln) {
	this.lastName = ln;
}

public void setPhoneNumber(String pn) {
	this.phoneNumber = pn;
}

public void setAddress(String addr) {
	this.address = addr;
}


public static void main(String args[]) {
	Contact c = new Contact("Mr or Ms", "No Name", "1313", "MockingBird Lane", "619 I don't live here street");
	
	System.out.println(c.getContactID());
	System.out.println(c.getFirstName());
	System.out.println(c.getLastName());
	System.out.println(c.getPhoneNumber());
	System.out.println(c.getAddress());
}
}