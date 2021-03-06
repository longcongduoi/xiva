// xiva (acronym for HTTP Extended EVent Automata) is a simple HTTP server.
// Copyright (C) 2009 Yandex <highpower@yandex.ru>

// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

#ifndef XIVA_MESSAGE_FILTER_HPP_INCLUDED
#define XIVA_MESSAGE_FILTER_HPP_INCLUDED

#include <string>

#include "xiva/config.hpp"
#include "xiva/forward.hpp"
#include "xiva/shared.hpp"

namespace xiva {

class message;

class XIVA_API message_filter : public shared {

public:
	message_filter();
	virtual ~message_filter();

	virtual bool allow_message(message const &msg, std::string const &channel_data) const = 0;

private:
	message_filter(message_filter const &);
	message_filter& operator = (message_filter const &);
};

} // namespace

#endif // XIVA_MESSAGE_FILTER_HPP_INCLUDED
