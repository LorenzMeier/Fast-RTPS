/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This generated file is licensed to you under the terms described in the
 * _LICENSE file included in this  distribution.
 *
 *************************************************************************
 * 
 * @file HelloWorld.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "HelloWorld.h"

#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

HelloWorld::HelloWorld()
{
    m_index = 0;

}

HelloWorld::~HelloWorld()
{
}

HelloWorld::HelloWorld(const HelloWorld &x)
{
    m_index = x.m_index;
    m_message = x.m_message;
}

HelloWorld::HelloWorld(HelloWorld &&x)
{
    m_index = x.m_index;
    m_message = std::move(x.m_message);
}

HelloWorld& HelloWorld::operator=(const HelloWorld &x)
{
    m_index = x.m_index;
    m_message = x.m_message;
    
    return *this;
}

HelloWorld& HelloWorld::operator=(HelloWorld &&x)
{
    m_index = x.m_index;
    m_message = std::move(x.m_message);
    
    return *this;
}

size_t HelloWorld::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;
            
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;


    return current_alignment - initial_alignment;
}

void HelloWorld::serialize(eprosima::fastcdr::Cdr &scdr) const
{
    scdr << m_index;

    if(m_message.length() <= 255)
    scdr << m_message;
    else
        throw eprosima::fastcdr::exception::BadParamException("message field exceeds the maximum length");
}

void HelloWorld::deserialize(eprosima::fastcdr::Cdr &dcdr)
{
    dcdr >> m_index;
    dcdr >> m_message;
}

size_t HelloWorld::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
	size_t current_align = current_alignment;
            



    return current_align;
}

bool HelloWorld::isKeyDefined()
{
    return false;
}

void HelloWorld::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
	 
	 
}