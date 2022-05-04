#ifndef CONVERTER_HPP
# define CONVERTER_HPP

class Converter {
    public:
        Converter();
        Converter(Converter const &other);
        ~Converter();

        Converter &operator=(Converter const &other);
};

#endif