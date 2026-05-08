#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaForm.h"

namespace System { class String; }
namespace System::Xml::Serialization { class TypeData; }
namespace System::Xml::Serialization { class XmlTypeMapMember; }
namespace System::Xml::Serialization { class XmlTypeMapping; }

#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BACD580)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BACD720)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_DATATYPENAMESPACE_OFFSET UNITYSDK_OFFSET(0x1BACD2E0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_DATATYPENAME_OFFSET UNITYSDK_OFFSET(0x1BACD340)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_ISTEXTELEMENT_OFFSET UNITYSDK_OFFSET(0x1BACD3C0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_ISUNNAMEDANYELEMENT_OFFSET UNITYSDK_OFFSET(0x1BACD4B0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_MULTIREFERENCETYPE_OFFSET UNITYSDK_OFFSET(0x1BACD3A0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_SET_ELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x1BACD2C0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_SET_EXPLICITORDER_OFFSET UNITYSDK_OFFSET(0x1BACD570)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_SET_FORM_OFFSET UNITYSDK_OFFSET(0x1BACD380)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_SET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x1BACD390)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_SET_ISTEXTELEMENT_OFFSET UNITYSDK_OFFSET(0x1BACD430)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_SET_ISUNNAMEDANYELEMENT_OFFSET UNITYSDK_OFFSET(0x1BACD4F0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_SET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x1BACD2D0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BACD1A0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeMapElementInfo_TypeDefinitionIndex = 1923;

	class XmlTypeMapElementInfo : public ::System::Object
	{
	public:
		::System::Xml::Serialization::XmlTypeMapping* _mappedType; // 0x10
		::System::Object* _choiceValue; // 0x18
		::System::String* _elementName; // 0x20
		::System::Xml::Serialization::TypeData* _type; // 0x28
		::System::Xml::Serialization::XmlTypeMapMember* _member; // 0x30
		::System::String* _namespace; // 0x38
		::System::Int32 _explicitOrder; // 0x40
		::System::Xml::Schema::XmlSchemaForm _form; // 0x44
		::System::Int32 _nestingLevel; // 0x48
		::System::Boolean _wrappedElement; // 0x4C
		::System::Boolean _isNullable; // 0x4D

		::System::Void _ctor(::System::Xml::Serialization::XmlTypeMapMember* member, ::System::Xml::Serialization::TypeData* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapMember*, ::System::Xml::Serialization::TypeData*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO__CTOR_OFFSET))(this, member, type);
		}

		::System::Void set_ElementName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_SET_ELEMENTNAME_OFFSET))(this, value);
		}

		::System::Void set_Namespace(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_SET_NAMESPACE_OFFSET))(this, value);
		}

		::System::String* get_DataTypeNamespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_DATATYPENAMESPACE_OFFSET))(this);
		}

		::System::String* get_DataTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_DATATYPENAME_OFFSET))(this);
		}

		::System::Void set_Form(::System::Xml::Schema::XmlSchemaForm value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaForm))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_SET_FORM_OFFSET))(this, value);
		}

		::System::Void set_IsNullable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_SET_ISNULLABLE_OFFSET))(this, value);
		}

		::System::Boolean get_MultiReferenceType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_MULTIREFERENCETYPE_OFFSET))(this);
		}

		::System::Boolean get_IsTextElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_ISTEXTELEMENT_OFFSET))(this);
		}

		::System::Void set_IsTextElement(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_SET_ISTEXTELEMENT_OFFSET))(this, value);
		}

		::System::Boolean get_IsUnnamedAnyElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_ISUNNAMEDANYELEMENT_OFFSET))(this);
		}

		::System::Void set_IsUnnamedAnyElement(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_SET_ISUNNAMEDANYELEMENT_OFFSET))(this, value);
		}

		::System::Void set_ExplicitOrder(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_SET_EXPLICITORDER_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GETHASHCODE_OFFSET))(this);
		}
	};
}
