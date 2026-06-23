#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaForm.h"
#include "unitysdk/System/Xml/Serialization/XmlTypeMapMember.h"

namespace System { class String; }
namespace System::Xml::Serialization { class XmlTypeMapping; }

#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C182ED0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeMapMemberAttribute_TypeDefinitionIndex = 1925;

	class XmlTypeMapMemberAttribute : public ::System::Xml::Serialization::XmlTypeMapMember
	{
	public:
		::System::String* _namespace; // 0x50
		::System::Xml::Serialization::XmlTypeMapping* _mappedType; // 0x58
		::System::String* _attributeName; // 0x60
		::System::Xml::Schema::XmlSchemaForm _form; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
