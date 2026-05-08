#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_XML_SERIALIZATION_XMLSCHEMAPROVIDERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A740460)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSchemaProviderAttribute_TypeDefinitionIndex = 1899;

	class XmlSchemaProviderAttribute : public ::System::Attribute
	{
	public:
		::System::String* _methodName; // 0x10
		::System::Boolean _isAny; // 0x18

		::System::Void _ctor(::System::String* methodName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSCHEMAPROVIDERATTRIBUTE__CTOR_OFFSET))(this, methodName);
		}
	};
}
