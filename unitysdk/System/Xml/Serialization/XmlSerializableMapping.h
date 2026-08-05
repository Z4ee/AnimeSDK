#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Serialization/XmlTypeMapping.h"

namespace System { class String; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class XmlSchema; }
namespace System::Xml::Schema { class XmlSchemaComplexType; }
namespace System::Xml::Serialization { class TypeData; }
namespace System::Xml::Serialization { class XmlRootAttribute; }

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZABLEMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x1F10BDE0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializableMapping_TypeDefinitionIndex = 1934;

	class XmlSerializableMapping : public ::System::Xml::Serialization::XmlTypeMapping
	{
	public:
		::System::Xml::XmlQualifiedName* _schemaTypeName; // 0x78
		::System::Xml::Schema::XmlSchema* _schema; // 0x80
		::System::Xml::Schema::XmlSchemaComplexType* _schemaType; // 0x88

		::System::Void _ctor(::System::Xml::Serialization::XmlRootAttribute* root, ::System::String* elementName, ::System::String* ns, ::System::Xml::Serialization::TypeData* typeData, ::System::String* xmlType, ::System::String* xmlTypeNamespace)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*, ::System::String*, ::System::Xml::Serialization::TypeData*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZABLEMAPPING__CTOR_OFFSET))(this, root, elementName, ns, typeData, xmlType, xmlTypeNamespace);
		}
	};
}
