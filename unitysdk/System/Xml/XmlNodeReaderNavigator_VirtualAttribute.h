#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_VIRTUALATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x2FED90)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNodeReaderNavigator_VirtualAttribute_TypeDefinitionIndex = 1783;

	struct alignas(8) XmlNodeReaderNavigator_VirtualAttribute
	{
		::System::String* name; // 0x10
		::System::String* value; // 0x18

		::System::Void _ctor(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_VIRTUALATTRIBUTE__CTOR_OFFSET))(this, name, value);
		}
	};
}
