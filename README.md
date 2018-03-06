# CST126SRS04  
Women In Computing Linked List  


Class ID: 

SRS ID: CST126SRS04  

Unresolved Issues:  

Notes:  

---

Purpose:  

Learn about the role women in Computer Science.  
Learn about the singly linked list data structure.  
Learn how to add, delete, and reverse a singly linked list.  

Instructions:  


Name your project "WICLL".  

Choose 10 women computer scientists for this project.  

You can obtain a list from [Wikipedia: Women In Computing](https://en.wikipedia.org/wiki/Women_in_computing), but any source will work.  

Create a class named CSWoman as follows:  

class CSWoman
{
private:
	const std::string name_;
	const unsigned birthYear_;
	const std::string fact_;

public:
	CSWoman(const char* const name, const unsigned birthYear, const char* const fact);

// ... and other methods
};  

Create 10 CSWoman objects on the heap, each representing a woman pioneer in the field of Computer Science. Provide the information described in the CSWoman ctor described above.  

Place each into a singly-linked list data structure.  

Print the list in order.  

Reverse the list using the provided algorithm.  

Print the list now in the reverse order.  

Tips:  

- All Class Policy rules apply, including but not limited to memory leaks, testing for nullptr, data corruption.  
- I am expecting a perfect submission and a clean project, even if your code fails to run.  
