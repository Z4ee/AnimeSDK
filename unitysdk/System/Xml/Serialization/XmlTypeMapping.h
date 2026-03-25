#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Serialization/XmlMapping.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class ArrayList; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Serialization { class TypeData; }

#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GETREALELEMENTMAP_OFFSET UNITYSDK_OFFSET(0x185E14A0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GETREALTYPEMAP_OFFSET UNITYSDK_OFFSET(0x185EA040)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_BASEMAP_OFFSET UNITYSDK_OFFSET(0x185F1BC0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_DERIVEDTYPES_OFFSET UNITYSDK_OFFSET(0x185F1BA0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_HASXMLTYPENAMESPACE_OFFSET UNITYSDK_OFFSET(0x185D06B0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_ISANY_OFFSET UNITYSDK_OFFSET(0x185F1C10)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x185F1BF0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_MULTIREFERENCETYPE_OFFSET UNITYSDK_OFFSET(0x185F1BB0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_TYPEDATA_OFFSET UNITYSDK_OFFSET(0x185F1B60)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_TYPEFULLNAME_OFFSET UNITYSDK_OFFSET(0x185E3FB0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_XMLTYPENAMESPACE_OFFSET UNITYSDK_OFFSET(0x185CF830)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_XMLTYPE_OFFSET UNITYSDK_OFFSET(0x185F1B70)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_BASEMAP_OFFSET UNITYSDK_OFFSET(0x185F1BD0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_INCLUDEINSCHEMA_OFFSET UNITYSDK_OFFSET(0x185F1BE0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_ISANY_OFFSET UNITYSDK_OFFSET(0x185F1C20)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x185F1C00)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_XMLTYPENAMESPACE_OFFSET UNITYSDK_OFFSET(0x185F1B90)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_XMLTYPE_OFFSET UNITYSDK_OFFSET(0x185F1B80)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_UPDATEROOT_OFFSET UNITYSDK_OFFSET(0x185D4300)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x185CF5C0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeMapping_TypeDefinitionIndex = 2044;

	class XmlTypeMapping : public ::System::Xml::Serialization::XmlMapping
	{
	public:
		::System::Xml::Serialization::TypeData* type; // 0x40
		::System::String* xmlType; // 0x48
		::System::String* xmlTypeNamespace; // 0x50
		::System::Collections::ArrayList* _derivedTypes; // 0x58
		::System::Xml::Serialization::XmlTypeMapping* baseMap; // 0x60
		::System::Boolean multiReferenceType; // 0x68
		::System::Boolean includeInSchema; // 0x69
		::System::Boolean isAny; // 0x6A
		::System::Boolean isNullable; // 0x6B

		::System::Void _ctor(::System::String* elementName, ::System::String* ns, ::System::Xml::Serialization::TypeData* typeData, ::System::String* xmlType, ::System::String* xmlTypeNamespace)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Xml::Serialization::TypeData*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING__CTOR_OFFSET))(this, elementName, ns, typeData, xmlType, xmlTypeNamespace);
		}

		::System::String* get_TypeFullName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_TYPEFULLNAME_OFFSET))(this);
		}

		::System::Xml::Serialization::TypeData* get_TypeData()
		{
			return ((::System::Xml::Serialization::TypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_TYPEDATA_OFFSET))(this);
		}

		::System::String* get_XmlType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_XMLTYPE_OFFSET))(this);
		}

		::System::Void set_XmlType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_XMLTYPE_OFFSET))(this, value);
		}

		::System::String* get_XmlTypeNamespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_XMLTYPENAMESPACE_OFFSET))(this);
		}

		::System::Void set_XmlTypeNamespace(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_XMLTYPENAMESPACE_OFFSET))(this, value);
		}

		::System::Boolean get_HasXmlTypeNamespace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_HASXMLTYPENAMESPACE_OFFSET))(this);
		}

		::System::Collections::ArrayList* get_DerivedTypes()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_DERIVEDTYPES_OFFSET))(this);
		}

		::System::Boolean get_MultiReferenceType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_MULTIREFERENCETYPE_OFFSET))(this);
		}

		::System::Xml::Serialization::XmlTypeMapping* get_BaseMap()
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_BASEMAP_OFFSET))(this);
		}

		::System::Void set_BaseMap(::System::Xml::Serialization::XmlTypeMapping* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_BASEMAP_OFFSET))(this, value);
		}

		::System::Void set_IncludeInSchema(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_INCLUDEINSCHEMA_OFFSET))(this, value);
		}

		::System::Boolean get_IsNullable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_ISNULLABLE_OFFSET))(this);
		}

		::System::Void set_IsNullable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_ISNULLABLE_OFFSET))(this, value);
		}

		::System::Boolean get_IsAny()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_ISANY_OFFSET))(this);
		}

		::System::Void set_IsAny(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_ISANY_OFFSET))(this, value);
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
