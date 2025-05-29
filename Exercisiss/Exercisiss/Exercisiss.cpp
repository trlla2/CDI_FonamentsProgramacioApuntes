#include <iostream>

int main()
{
	// ------------------------------ Ex1
	// Coste Total O(n^2) Quadratica ya que un for dentro de otro for 

	// for(int ...){ -> O(n)
	//		for(int ...){ -> O(n)
	//			Bool = true -> O(1)
	//		}
	// }

	// coste total O(2n) = O(n) Lineal
	// for(int ...){ -> O(n)
	// }
	// for(int ...){ -> O(n)
	// }


	// set y unordered_set solo pushea los contenidos que todavia no tiene 
	// unordered_set -> O(log N) logarithmic
	// set -> O(2log N) = O(log N)
	// un_set.insert -> O(1)
	// set.insert -> O(log n)

	// coste total O(N x Log N)
	// for(int ...){ -> O(n)
	//		set.insert -> O(log n)
	// }

	// ------------------------------ Ex2
	
	std::string s1 = "skdfjkasj"; // obtener cuanto elementos hay de cada (2s, 2k, 1d...)

	for (int i = 0; i < s1.size(); i++) {
		const char c = s1[i];
		int count = 1;
		for (int j = 0; j < s1.size(); j++) {
			count++;
		}
	}
	 
}