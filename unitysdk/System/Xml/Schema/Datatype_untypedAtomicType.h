#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_anyAtomicType.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaWhiteSpace.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"

namespace System::Xml::Schema { class XmlSchemaType; }
namespace System::Xml::Schema { class XmlValueConverter; }

#define SYSTEM_XML_SCHEMA_DATATYPE_UNTYPEDATOMICTYPE_CREATEVALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x1AD5FAF0)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNTYPEDATOMICTYPE_GET_BUILTINWHITESPACEFACET_OFFSET UNITYSDK_OFFSET(0x1AD5FB50)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNTYPEDATOMICTYPE_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1AD5FB60)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNTYPEDATOMICTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD5FB70)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_untypedAtomicType_TypeDefinitionIndex = 1993;

	class Datatype_untypedAtomicType : public ::System::Xml::Schema::Datatype_anyAtomicType
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNTYPEDATOMICTYPE__CTOR_OFFSET))(this);
		}

		::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* schemaType)
		{
			return ((::System::Xml::Schema::XmlValueConverter*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNTYPEDATOMICTYPE_CREATEVALUECONVERTER_OFFSET))(this, schemaType);
		}

		::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet()
		{
			return ((::System::Xml::Schema::XmlSchemaWhiteSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNTYPEDATOMICTYPE_GET_BUILTINWHITESPACEFACET_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNTYPEDATOMICTYPE_GET_TYPECODE_OFFSET))(this);
		}
	};
}
