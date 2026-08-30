#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Serialization/XmlTypeMapping.h"

namespace System { class String; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class XmlSchema; }
namespace System::Xml::Schema { class XmlSchemaComplexType; }
namespace System::Xml::Serialization { class TypeData; }
namespace System::Xml::Serialization { class XmlRootAttribute; }

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZABLEMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8432B0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializableMapping_TypeDefinitionIndex = 2057;

	class XmlSerializableMapping : public ::System::Xml::Serialization::XmlTypeMapping
	{
	public:
		::System::Xml::XmlQualifiedName* _schemaTypeName; // 0x70
		::System::Xml::Schema::XmlSchema* _schema; // 0x78
		::System::Xml::Schema::XmlSchemaComplexType* _schemaType; // 0x80

		::System::Void _ctor(::System::Xml::Serialization::XmlRootAttribute* a1, ::System::String* a2, ::System::String* a3, ::System::Xml::Serialization::TypeData* a4, ::System::String* a5, ::System::String* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*, ::System::String*, ::System::Xml::Serialization::TypeData*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZABLEMAPPING__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}
	};
}
