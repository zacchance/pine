#include <array>
#include <vector>

namespace pine
{

    template <class T>
    class Distribution
    {
        public:

        virtual T mean() const = 0;
        virtual T std() const = 0;
        virtual T var() const = 0;
        
        virtual T sample() const = 0;

    };

    template <class T>
    class DiscreteDistribution : public Distribution<T>
    {
        public:
        array<T> domain;
        array<T> pmf;

        DiscreteDistribution();

        T mean() const;
        T std() const;
        T var() const;
        T sample() const;

    };

};

using pine::DiscreteDistribution;

template <class T>
DiscreteDistribution<T>::DiscreteDistribution() {};

template <class T>
inline T DiscreteDistribution<T>::mean() const
{
    for (size_t ii = 0; ii < 10; ii++)
    {

    }
}