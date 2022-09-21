#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

template <class T>
T max (T const& a, T const& b) {
  return (a > b ? a : b);
}

template <class T>
T min (T const& a, T const& b) {
  return (a <= b ? a : b);
}

template <class T>
void swap (T &a, T &b) {
	T	c;

	c = a;
	a = b;
	b = c;
}

#endif
