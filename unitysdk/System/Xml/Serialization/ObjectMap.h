#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_SERIALIZATION_OBJECTMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E82DF50)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int ObjectMap_TypeDefinitionIndex = 2013;

	class ObjectMap : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_OBJECTMAP__CTOR_OFFSET))(this);
		}
	};
}
