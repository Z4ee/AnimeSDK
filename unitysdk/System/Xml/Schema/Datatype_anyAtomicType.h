#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_anySimpleType.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaWhiteSpace.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"

namespace System::Xml::Schema { class XmlSchemaType; }
namespace System::Xml::Schema { class XmlValueConverter; }

#define SYSTEM_XML_SCHEMA_DATATYPE_ANYATOMICTYPE_CREATEVALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x1BADD430)
#define SYSTEM_XML_SCHEMA_DATATYPE_ANYATOMICTYPE_GET_BUILTINWHITESPACEFACET_OFFSET UNITYSDK_OFFSET(0x1BADD490)
#define SYSTEM_XML_SCHEMA_DATATYPE_ANYATOMICTYPE_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1BADD4A0)
#define SYSTEM_XML_SCHEMA_DATATYPE_ANYATOMICTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAD8A80)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_anyAtomicType_TypeDefinitionIndex = 2094;

	class Datatype_anyAtomicType : public ::System::Xml::Schema::Datatype_anySimpleType
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ANYATOMICTYPE__CTOR_OFFSET))(this);
		}

		::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* a1)
		{
			return ((::System::Xml::Schema::XmlValueConverter*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ANYATOMICTYPE_CREATEVALUECONVERTER_OFFSET))(this, a1);
		}

		::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet()
		{
			return ((::System::Xml::Schema::XmlSchemaWhiteSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ANYATOMICTYPE_GET_BUILTINWHITESPACEFACET_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_ANYATOMICTYPE_GET_TYPECODE_OFFSET))(this);
		}
	};
}
