//
// Copyright (C) 2010  Aleksandar Zlateski <zlateski@mit.edu>
// ----------------------------------------------------------
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#ifndef ZI_UTILITY_DETAIL_GET_INSTANCE_HPP
#define ZI_UTILITY_DETAIL_GET_INSTANCE_HPP 1

#include <zi/bits/type_traits.hpp>
#include <zi/utility/detail/bare_type.hpp>

namespace zi {
namespace detail {
namespace get_instance_ {

template< class Type >
struct get_instance
{
    typedef typename bare_type< Type >::type type;

    static type&        static_reference;
    static const type&  static_const_reference;
    static type*        static_pointer;
    static const type*  static_const_pointer;

};


} // namespace get_instance_

using get_instance_::get_instance;

} // namespace detail
} // namespace zi

#endif
