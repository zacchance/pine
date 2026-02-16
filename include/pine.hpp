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
    class CustomDistribution : public Distribution<T>
    {
        public:
        array<T> domain;
        array<T> pmf;

        CustomDistribution();

        T mean() const;
        T std() const;
        T var() const;
        T sample() const;

    };

};

using pine::CustomDistribution;

template <class T>
CustomDistribution<T>::CustomDistribution() {};

template <class T>
inline T CustomDistribution<T>::mean() const
{
    T out = 0.0;
    for (size_t ii = 0; ii < domain.size(); ii++)
    {
        out += domain[ii] * pmf[ii];
    }
    return out;
}