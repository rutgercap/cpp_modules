#pragma once

# include <algorithm>

class NotFoundException: public std::exception {
   public:
      const char* what() const throw() {
         return "Data not found";
      }
};

template <typename T>
typename T::iterator easyfind(T &toSearch, int toFind) {

   typename T::iterator it;

   it = std::find(toSearch.begin(), toSearch.end(), toFind);
   if (it == toSearch.end()) {
      throw new NotFoundException();
   }
   return it;
}
