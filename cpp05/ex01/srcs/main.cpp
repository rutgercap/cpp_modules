#include <Bureaucrat.hpp>
#include <Form.hpp>

int main(void) {
	Form  test("test", 10, 10);

	std::cout << test << std::endl;
	// system("leaks bureaucrat");
}
