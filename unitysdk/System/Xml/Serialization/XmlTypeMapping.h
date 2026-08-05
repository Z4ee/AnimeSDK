#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Serialization/XmlMapping.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class ArrayList; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Serialization { class TypeData; }

#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GETREALELEMENTMAP_OFFSET UNITYSDK_OFFSET(0x1D0A14D0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GETREALTYPEMAP_OFFSET UNITYSDK_OFFSET(0x1D0A13B0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_HASXMLTYPENAMESPACE_OFFSET UNITYSDK_OFFSET(0x1D0A13A0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_TYPEFULLNAME_OFFSET UNITYSDK_OFFSET(0x1D0A1360)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_XMLTYPENAMESPACE_OFFSET UNITYSDK_OFFSET(0x1D0A1380)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_UPDATEROOT_OFFSET UNITYSDK_OFFSET(0x1D0A1930)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D0A19F0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A1290)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeMapping_TypeDefinitionIndex = 1933;

	class XmlTypeMapping : public ::System::Xml::Serialization::XmlMapping
	{
	public:
		::System::Xml::Serialization::XmlTypeMapping* baseMap; // 0x48
		::System::Collections::ArrayList* _derivedTypes; // 0x50
		::System::String* xmlType; // 0x58
		::System::Xml::Serialization::TypeData* type; // 0x60
		::System::String* xmlTypeNamespace; // 0x68
		::System::Boolean isAny; // 0x70
		::System::Boolean includeInSchema; // 0x71
		::System::Boolean isNullable; // 0x72
		::System::Boolean multiReferenceType; // 0x73

		::System::Void _ctor(::System::String* elementName, ::System::String* ns, ::System::Xml::Serialization::TypeData* typeData, ::System::String* xmlType, ::System::String* xmlTypeNamespace)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Xml::Serialization::TypeData*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING__CTOR_OFFSET))(this, elementName, ns, typeData, xmlType, xmlTypeNamespace);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING__CTOR_1_OFFSET))(this);
		}

		::System::String* get_TypeFullName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_TYPEFULLNAME_OFFSET))(this);
		}

		::System::String* get_XmlTypeNamespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_XMLTYPENAMESPACE_OFFSET))(this);
		}

		::System::Boolean get_HasXmlTypeNamespace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_HASXMLTYPENAMESPACE_OFFSET))(this);
		}

		::System::Xml::Serialization::XmlTypeMapping* GetRealTypeMap(::System::Type* objectType)
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GETREALTYPEMAP_OFFSET))(this, objectType);
		}

		::System::Xml::Serialization::XmlTypeMapping* GetRealElementMap(::System::String* name, ::System::String* ens)
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GETREALELEMENTMAP_OFFSET))(this, name, ens);
		}

		::System::Void UpdateRoot(::System::Xml::XmlQualifiedName* qname)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_UPDATEROOT_OFFSET))(this, qname);
		}
	};
}
