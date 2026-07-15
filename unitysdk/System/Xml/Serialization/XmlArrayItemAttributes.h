#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace System::Xml::Serialization { class XmlArrayItemAttribute; }

#define SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTES_ADD_OFFSET UNITYSDK_OFFSET(0x19691C60)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTES__CTOR_OFFSET UNITYSDK_OFFSET(0x19691D70)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlArrayItemAttributes_TypeDefinitionIndex = 1994;

	class XmlArrayItemAttributes : public ::System::Collections::CollectionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTES__CTOR_OFFSET))(this);
		}

		::System::Int32 Add(::System::Xml::Serialization::XmlArrayItemAttribute* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Xml::Serialization::XmlArrayItemAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTES_ADD_OFFSET))(this, a1);
		}
	};
}
