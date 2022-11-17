// Change me instead
// All occurences of XXX need to be replaced with
// something more meaningful

#include <algorithm>

template< typename iterator >
void my_selection_sort( iterator begin, iterator end )
{
    if( begin != end ) 
    {
       std::iter_swap( begin, std::min_element( begin, end ) ) ;
       my_selection_sort( ++begin, end ) ;
    }
}