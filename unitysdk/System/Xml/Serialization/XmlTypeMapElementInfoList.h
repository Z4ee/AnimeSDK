#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/ArrayList.h"

#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFOLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1A00C2B0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeMapElementInfoList_TypeDefinitionIndex = 2035;

	class XmlTypeMapElementInfoList : public ::System::Collections::ArrayList
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFOLIST__CTOR_OFFSET))(this);
		}
	};
}
