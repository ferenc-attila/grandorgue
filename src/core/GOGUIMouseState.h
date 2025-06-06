/*
 * GrandOrgue - free pipe organ simulator
 *
 * Copyright 2006 Milan Digital Audio LLC
 * Copyright 2009-2019 GrandOrgue contributors (see AUTHORS)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef GOGUIMOUSESTATE_H
#define GOGUIMOUSESTATE_H

class GOGUIMouseState {
	void * m_sequence;
	void * m_control;
	unsigned m_index;

public:
	GOGUIMouseState()
	{
		m_sequence = 0;
		clear();
	}

	void clear()
	{
		m_control = 0;
		m_index = 0;
	}

	void* GetSequence()
	{
		return m_sequence;
	}

	void* GetControl()
	{
		return m_control;
	}

	unsigned GetIndex()
	{
		return m_index;
	}

	void SetSequence(void* sequence)
	{
		m_sequence = sequence;
	}

	void SetControl(void* control)
	{
		m_control = control;
	}

	void SetIndex(unsigned index)
	{
		m_index = index;
	}

};


#endif
