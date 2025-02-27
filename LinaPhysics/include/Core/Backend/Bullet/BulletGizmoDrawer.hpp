/* 
This file is a part of: Lina Engine
https://github.com/inanevin/LinaEngine

Author: Inan Evin
http://www.inanevin.com

Copyright (c) [2018-2020] [Inan Evin]

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#pragma once

#ifndef PhysicsGizmoDrawer_HPP
#define PhysicsGizmoDrawer_HPP

#define BT_NO_SIMD_OPERATOR_OVERLOADS
#include "btBulletDynamicsCommon.h"
#include "EventSystem/Events.hpp"
#include "Math/Vector.hpp"
#include "Math/Color.hpp"
#include <functional>



class BulletGizmoDrawer : public btIDebugDraw
{
public:



	virtual void drawContactPoint(const btVector3& PointOnB, const btVector3& normalOnB, btScalar distance, int lifeTime, const btVector3& color)
	{
		
	}

	virtual void reportErrorWarning(const char* warningString)
	{

	}

	virtual void draw3dText(const btVector3& location, const char* textString)
	{

	}

	virtual void setDebugMode(int debugMode)
	{
		m_debugMode = (DebugDrawModes)debugMode;
	}

	virtual int getDebugMode() const {
		return m_debugMode;
	}

	void drawLine(const btVector3& from, const btVector3& to, const btVector3& color) ;

private:


private:
	
	DebugDrawModes m_debugMode;
};

#endif
