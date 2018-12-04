/**
* Some tricks and tips to follow for when I forgot C++
*/
// 0. PRECOMPILED HEADER
// 1. STANDARD LIBRARIES (STL)
#include "pch.h"
// 2. MACRO & DEFINE DIRECTIVES (PREPROCESSOR)
#include "someFunctions.h"
void printHelloWorld();

int main(int argc, char *argv[]) // or int argc, char **argv

	// 3. INCLUDE & PRAGMA DIRECTIVES (PREPROCESSOR)
	// That's "illegal", but is used only to show how include works
	// 'someFunctions.h'embeds function prototypes as void printHelloWorld();
	#include "someFile.h" 
	 = 10;
	
	// 4. COMMAND LINE PASSING ARGUMENTS 
	// 5. HANDLE ERROR & EXCEPTIONS 
	if (argc != 1) {
		std::cout << "You entered" << argc << "arguments\n";
		try {
			for (int i = 0; i < argc; i++)
				std::cout << argv[i] << std::endl;
			throw std::runtime_error("Error ocurred");
			std::cout << "This message won't be displayed if an exception ocurred" << std::endl;
		}
		catch (std::exception &exp) {
			std::cout << "Handled exception: " << exp.what() << std::endl;
		}
		catch (const char* exp) {
			std::cout << "Error: " << exp << std::endl;
			// endl flush the buffer, cin makes it automat, not \n
		}
	}

	// 6. TYPE VARIABLES AND ITS SIZE
	// 7. STD::STRING
	// 8. EXTERN, GLOBAL VARIABLES
	// 9. SCOPES WITH { }
	// 10. TYPEDEF, CREATING AN ALIAS
	//typeNotes();

	// 11. FUNCTION REFERENCE ARGUMENTS
	// 12. RECURSIVE FUNCTION
	// 13. SHORT IF
	//infinitySum(i); 
	//std::cout << "i has the vaue: " << i << std::endl;

	// 14. PROTOTYPE FUNCTION / HEADERS
	//printHelloWorld();

	// 15. N-DIMENSIONAL ARRAYS
	// 16. POINTERS
	//int arr[] = { 4, 5, 8, 33, 42 }; // or int arr[5]; or both
	//matricesNotes(arr);

	// 17. STRUCTS
	// 18. CONSTRUCTORS & DESTRUCTOR
	// 19. INHERITANCE
	// 20. OPERATOR -> / (*SOMETHING).MEMBER
	//structNotes();

	// 21. STD::VECTOR
	// 22. INITIALIZATION LIST C++11
	// 23. RANGE-BASED FOR LOOP C++11
	// 24. STD::ITERATOR
	//vectorNotes();

	// 25. STD::FSTREAM I/O
	//ioFilesNotes();

	// 26. CLASSES
	// 27. NAMESPACES
	// 28. STATIC CLASS MEMBERS
	// 29. FRIEND KEYWORD
	// 29. OVERLOADING
	// 30. OPERATOR() OVERLOADING
	// 31. POLYMORPHISM
	// 32. MULTIPLE INHERITANCE
	// 33. THIS KEYWORD
	// 34. VIRTUAL FUNCTIONS
	// 35. ABSTRACT CLASSES
	//classesNotes();

	// 36. AUTO TYPE DEDUCTION C++11
	// 37. TEMPLATES
	//deductionNotes();

	// 38. FUNCTIONAL PROGRAMING
	// 39. INLINE FUNCTIONS
	//functionNotes();

	// 40. DYNAMIC MEMORY
	// 41. SMART POINTERS
	//memoryNotes();


	//TODO: 
	//		copy constructor
	//		function pointers
	//		polymorphic templates
	//		threads STL (not OpenMP)
	//		Other STL containers
	//		Mutable
	//		Const vs Static
	//		Lambda functions
	//		functor
	//		Boost libraries

	return 0;
}


