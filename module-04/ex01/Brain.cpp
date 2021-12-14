#include "Brain.hpp"

Brain::Brain()
{
    PRINT("Brain Default Constructor()");
    this->setIdeas();
}

Brain::Brain(const Brain &src)
{
    PRINT("Brain Copy Constructor()");
    for (size_t i = 0; i < IDEAS_COUNT; i++)
        ideas[i] = src.ideas[i];
}

Brain::~Brain()
{
    PRINT("Brain Default ~Destructor()");
    for (size_t i = 0; i < IDEAS_COUNT; i++)
        ideas[i] = "IDK";
}

Brain &Brain::operator=(const Brain &rhs)
{
    PRINT("Brain Assignment Operator");
    if (this != &rhs)
        for (size_t i = 0; i < IDEAS_COUNT; i++)
            ideas[i] = rhs.ideas[i];
    return *this;
}

std::ostream &operator<<(std::ostream &ostream, const Brain &brain)
{
    ostream << "##";
    for (int i = 0; i < IDEAS_COUNT; ++i)
    {
        ostream << " | " << brain.getIdeas()[i];
    }
    ostream << " | ##" << std::endl;
    // ostream << "[ " <<  &brain << " ]" << std::endl;
    return ostream;
}

void Brain::setIdeas(void)
{
    for (int i = 0; i < IDEAS_COUNT; i++)
        ideas[i] = "~ Idea! ~";
}

const std::string *Brain::getIdeas(void) const
{
    return ideas;
}
