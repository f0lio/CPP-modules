#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <stdlib.h>

#define PRINT(X_X) std::cout << X_X << std::endl

#define IDEAS_COUNT 2 // 100

class Brain
{
public:
    Brain();
    Brain(const Brain &src);
    ~Brain();

    Brain &operator=(const Brain &rhs);

    void setIdeas(void);
    const std::string *getIdeas(void) const;

protected:
    std::string ideas[IDEAS_COUNT];
};

std::ostream &operator<<(std::ostream &, const Brain &);

#endif
