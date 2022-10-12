#pragma once

# include <stack>

template <typename T>
class MutantStack: public std::stack<T> {
   public:
      MutantStack() {};
      ~MutantStack() {};
      MutantStack& operator=(MutantStack const& original) {
		   std::stack<T>::operator=(original);
		   return *this;
	   };

      MutantStack(MutantStack const& original) {
         *this = original;
      }

      typedef typename std::deque<T>::iterator iterator;
      typedef typename std::deque<T>::reverse_iterator reverseIterator;

      iterator begin() {
         return this->c.begin();
      };
      
      iterator end() {
         return this->c.end();
      };

      reverseIterator rbegin() {
         return this->c.rbegin();
      };

      reverseIterator rend() {
         return this->c.rend();
      };
};
