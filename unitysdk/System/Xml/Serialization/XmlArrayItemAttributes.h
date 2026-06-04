#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace System::Xml::Serialization { class XmlArrayItemAttribute; }

#define SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTES_ADD_OFFSET UNITYSDK_OFFSET(0x1AE75310)
#define SYSTEM_XML_SERIALIZATION_XMLARRAYITEMATTRIBUTES__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE753D0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlArrayItemAttributes_TypeDefinitionIndex = 1990;

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
