#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_XML_SERIALIZATION_XMLSCHEMAPROVIDERATTRIBUTE_GET_ISANY_OFFSET UNITYSDK_OFFSET(0x1A00EF90)
#define SYSTEM_XML_SERIALIZATION_XMLSCHEMAPROVIDERATTRIBUTE_GET_METHODNAME_OFFSET UNITYSDK_OFFSET(0x1A00EF80)
#define SYSTEM_XML_SERIALIZATION_XMLSCHEMAPROVIDERATTRIBUTE_SET_ISANY_OFFSET UNITYSDK_OFFSET(0x1A00EFA0)
#define SYSTEM_XML_SERIALIZATION_XMLSCHEMAPROVIDERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A00EF70)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSchemaProviderAttribute_TypeDefinitionIndex = 2011;

	class XmlSchemaProviderAttribute : public ::System::Attribute
	{
	public:
		::System::String* _methodName; // 0x10
		::System::Boolean _isAny; // 0x18

		::System::Void _ctor(::System::String* methodName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSCHEMAPROVIDERATTRIBUTE__CTOR_OFFSET))(this, methodName);
		}

		::System::String* get_MethodName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSCHEMAPROVIDERATTRIBUTE_GET_METHODNAME_OFFSET))(this);
		}

		::System::Boolean get_IsAny()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSCHEMAPROVIDERATTRIBUTE_GET_ISANY_OFFSET))(this);
		}

		::System::Void set_IsAny(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSCHEMAPROVIDERATTRIBUTE_SET_ISANY_OFFSET))(this, value);
		}
	};
}
