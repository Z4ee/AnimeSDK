#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Serialization/XmlTypeMapMemberElement.h"

#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBEREXPANDABLE_GET_FLATARRAYINDEX_OFFSET UNITYSDK_OFFSET(0x1E872DB0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBEREXPANDABLE_SET_FLATARRAYINDEX_OFFSET UNITYSDK_OFFSET(0x1E872DC0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBEREXPANDABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E872C90)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeMapMemberExpandable_TypeDefinitionIndex = 2051;

	class XmlTypeMapMemberExpandable : public ::System::Xml::Serialization::XmlTypeMapMemberElement
	{
	public:
		::System::Int32 _flatArrayIndex; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBEREXPANDABLE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_FlatArrayIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBEREXPANDABLE_GET_FLATARRAYINDEX_OFFSET))(this);
		}

		::System::Void set_FlatArrayIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBEREXPANDABLE_SET_FLATARRAYINDEX_OFFSET))(this, a1);
		}
	};
}
