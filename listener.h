/*
 * This file is part of the Gauntlet security system.
 *
 * Copyleft of Simone Margaritelli aka evilsocket <evilsocket@gmail.com>
 *
 * Hybris is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Hybris is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Hybris.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef __LISTENER_H
#	define __LISTENER_H

#include "socket.h"
#include "thread.h"

class Listener : public Socket {
	protected :
		unsigned long 		m_backlog;
		threaded_function_t m_acceptor;
	public :
		
		Listener( threaded_function_t acceptor, unsigned long backlog, unsigned short port );
		
		net_retcode_t start();
};

#endif
