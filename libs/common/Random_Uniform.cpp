//-----------------------------------------------------------------------------
//  Class implementation:  Random::Uniform
//-----------------------------------------------------------------------------

#include "Assert_That.h"

#include "Random_Uniform.h"

//-----------------------------------------------------------------------------

namespace
{
    //-------------------------------------------------------------------------

    inline
    bool is_odd(unsigned int number)
	//  Is the number odd?
    {
	return number & 1;
    }

    //-------------------------------------------------------------------------
};

//-----------------------------------------------------------------------------

namespace Random
{
    //-------------------------------------------------------------------------

    Uniform::Uniform(unsigned int seed)
	: MT_random_num_gen_(seed)
    {
	ASSERT_THAT(is_odd(seed))
    }

    //-------------------------------------------------------------------------

    double Uniform::next()
    {
	return double(MT_random_num_gen_()) / double(0xFFFFFFFFU);
    }

    //-------------------------------------------------------------------------
};
