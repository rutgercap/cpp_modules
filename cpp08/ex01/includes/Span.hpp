#pragma once

# include <algorithm>
# include <vector>
# include <numeric>

class Span {
   private:
      Span();
      unsigned int      _maxNumbers;
      std::vector<int>  _numberStorage;

   public:
      Span(const unsigned int N);
      Span(Span const& original);
      ~Span();

      Span& operator=(Span const& original);

      void  addNumber(const int n);
      void  addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
      double   shortestSpan();
      double   longestSpan();

      class OutOfBoundsException: public std::exception{
	      public:
		      const char* what() const throw() {
			      return "Max numbers allowed reached";
		      }
	   };

      class NotEnoughNumbersException: public std::exception{
	      public:
		      const char* what() const throw() {
			      return "Need two numbers to calculate distance";
		      }
	   };
};
