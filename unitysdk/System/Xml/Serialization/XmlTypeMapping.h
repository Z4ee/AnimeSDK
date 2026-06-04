#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Serialization/XmlMapping.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class ArrayList; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Serialization { class TypeData; }

#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GETREALELEMENTMAP_OFFSET UNITYSDK_OFFSET(0x1AE8E870)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GETREALTYPEMAP_OFFSET UNITYSDK_OFFSET(0x1AE97020)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_BASEMAP_OFFSET UNITYSDK_OFFSET(0x1AE9EB90)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_DERIVEDTYPES_OFFSET UNITYSDK_OFFSET(0x1AE9EB70)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_HASXMLTYPENAMESPACE_OFFSET UNITYSDK_OFFSET(0x1AE7E020)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_ISANY_OFFSET UNITYSDK_OFFSET(0x1AE9EBE0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x1AE9EBC0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_MULTIREFERENCETYPE_OFFSET UNITYSDK_OFFSET(0x1AE9EB80)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_TYPEDATA_OFFSET UNITYSDK_OFFSET(0x1AE9EB30)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_TYPEFULLNAME_OFFSET UNITYSDK_OFFSET(0x1AE91390)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_XMLTYPENAMESPACE_OFFSET UNITYSDK_OFFSET(0x1AE7D200)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_XMLTYPE_OFFSET UNITYSDK_OFFSET(0x1AE9EB40)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_BASEMAP_OFFSET UNITYSDK_OFFSET(0x1AE9EBA0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_INCLUDEINSCHEMA_OFFSET UNITYSDK_OFFSET(0x1AE9EBB0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_ISANY_OFFSET UNITYSDK_OFFSET(0x1AE9EBF0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x1AE9EBD0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_XMLTYPENAMESPACE_OFFSET UNITYSDK_OFFSET(0x1AE9EB60)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_XMLTYPE_OFFSET UNITYSDK_OFFSET(0x1AE9EB50)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_UPDATEROOT_OFFSET UNITYSDK_OFFSET(0x1AE81BF0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE7CF90)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeMapping_TypeDefinitionIndex = 2045;

	class XmlTypeMapping : public ::System::Xml::Serialization::XmlMapping
	{
	public:
		::System::Collections::ArrayList* _derivedTypes; // 0x40
		::System::Xml::Serialization::TypeData* type; // 0x48
		::System::Xml::Serialization::XmlTypeMapping* baseMap; // 0x50
		::System::String* xmlType; // 0x58
		::System::String* xmlTypeNamespace; // 0x60
		::System::Boolean includeInSchema; // 0x68
		::System::Boolean isNullable; // 0x69
		::System::Boolean isAny; // 0x6A
		::System::Boolean multiReferenceType; // 0x6B

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Xml::Serialization::TypeData* a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Xml::Serialization::TypeData*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
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

		::System::Void set_XmlType(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_XMLTYPE_OFFSET))(this, a1);
		}

		::System::String* get_XmlTypeNamespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_XMLTYPENAMESPACE_OFFSET))(this);
		}

		::System::Void set_XmlTypeNamespace(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_XMLTYPENAMESPACE_OFFSET))(this, a1);
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

		::System::Void set_BaseMap(::System::Xml::Serialization::XmlTypeMapping* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_BASEMAP_OFFSET))(this, a1);
		}

		::System::Void set_IncludeInSchema(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_INCLUDEINSCHEMA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNullable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_ISNULLABLE_OFFSET))(this);
		}

		::System::Void set_IsNullable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_ISNULLABLE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAny()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GET_ISANY_OFFSET))(this);
		}

		::System::Void set_IsAny(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_SET_ISANY_OFFSET))(this, a1);
		}

		::System::Xml::Serialization::XmlTypeMapping* GetRealTypeMap(::System::Type* a1)
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GETREALTYPEMAP_OFFSET))(this, a1);
		}

		::System::Xml::Serialization::XmlTypeMapping* GetRealElementMap(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_GETREALELEMENTMAP_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateRoot(::System::Xml::XmlQualifiedName* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPPING_UPDATEROOT_OFFSET))(this, a1);
		}
	};
}
