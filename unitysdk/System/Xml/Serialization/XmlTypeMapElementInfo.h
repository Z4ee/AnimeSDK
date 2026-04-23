#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaForm.h"

namespace System { class String; }
namespace System::Xml::Serialization { class TypeData; }
namespace System::Xml::Serialization { class XmlTypeMapMember; }
namespace System::Xml::Serialization { class XmlTypeMapping; }

#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A02BDC0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A02BF70)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_CHOICEVALUE_OFFSET UNITYSDK_OFFSET(0x1A02BBF0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_DATATYPENAMESPACE_OFFSET UNITYSDK_OFFSET(0x1A029090)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_DATATYPENAME_OFFSET UNITYSDK_OFFSET(0x1A029060)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_ELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x1A02BC10)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_EXPLICITORDER_OFFSET UNITYSDK_OFFSET(0x1A02BDA0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_FORM_OFFSET UNITYSDK_OFFSET(0x1A02BC50)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x1A02BC90)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_ISTEXTELEMENT_OFFSET UNITYSDK_OFFSET(0x1A02BCF0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_ISUNNAMEDANYELEMENT_OFFSET UNITYSDK_OFFSET(0x1A02BD60)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_MAPPEDTYPE_OFFSET UNITYSDK_OFFSET(0x1A02BC70)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_MEMBER_OFFSET UNITYSDK_OFFSET(0x1A02BCB0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_MULTIREFERENCETYPE_OFFSET UNITYSDK_OFFSET(0x1A01D4F0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x1A02BC30)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_TYPEDATA_OFFSET UNITYSDK_OFFSET(0x1A02BBE0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_WRAPPEDELEMENT_OFFSET UNITYSDK_OFFSET(0x1A02BCD0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_SET_CHOICEVALUE_OFFSET UNITYSDK_OFFSET(0x1A02BC00)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_SET_ELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x1A02BC20)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_SET_EXPLICITORDER_OFFSET UNITYSDK_OFFSET(0x1A02BDB0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_SET_FORM_OFFSET UNITYSDK_OFFSET(0x1A02BC60)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_SET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x1A02BCA0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_SET_ISTEXTELEMENT_OFFSET UNITYSDK_OFFSET(0x1A00E770)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_SET_ISUNNAMEDANYELEMENT_OFFSET UNITYSDK_OFFSET(0x1A00E6D0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_SET_MAPPEDTYPE_OFFSET UNITYSDK_OFFSET(0x1A02BC80)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_SET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x1A02BC40)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_SET_NESTINGLEVEL_OFFSET UNITYSDK_OFFSET(0x1A02BCC0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_SET_WRAPPEDELEMENT_OFFSET UNITYSDK_OFFSET(0x1A02BCE0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A00C300)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeMapElementInfo_TypeDefinitionIndex = 2034;

	class XmlTypeMapElementInfo : public ::System::Object
	{
	public:
		::System::String* _elementName; // 0x10
		::System::Object* _choiceValue; // 0x18
		::System::Xml::Serialization::XmlTypeMapping* _mappedType; // 0x20
		::System::Xml::Serialization::TypeData* _type; // 0x28
		::System::String* _namespace; // 0x30
		::System::Xml::Serialization::XmlTypeMapMember* _member; // 0x38
		::System::Xml::Schema::XmlSchemaForm _form; // 0x40
		::System::Int32 _nestingLevel; // 0x44
		::System::Int32 _explicitOrder; // 0x48
		::System::Boolean _isNullable; // 0x4C
		::System::Boolean _wrappedElement; // 0x4D

		::System::Void _ctor(::System::Xml::Serialization::XmlTypeMapMember* member, ::System::Xml::Serialization::TypeData* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapMember*, ::System::Xml::Serialization::TypeData*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO__CTOR_OFFSET))(this, member, type);
		}

		::System::Xml::Serialization::TypeData* get_TypeData()
		{
			return ((::System::Xml::Serialization::TypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_TYPEDATA_OFFSET))(this);
		}

		::System::Object* get_ChoiceValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_CHOICEVALUE_OFFSET))(this);
		}

		::System::Void set_ChoiceValue(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_SET_CHOICEVALUE_OFFSET))(this, value);
		}

		::System::String* get_ElementName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_ELEMENTNAME_OFFSET))(this);
		}

		::System::Void set_ElementName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_SET_ELEMENTNAME_OFFSET))(this, value);
		}

		::System::String* get_Namespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_NAMESPACE_OFFSET))(this);
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

		::System::Xml::Schema::XmlSchemaForm get_Form()
		{
			return ((::System::Xml::Schema::XmlSchemaForm(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_FORM_OFFSET))(this);
		}

		::System::Void set_Form(::System::Xml::Schema::XmlSchemaForm value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaForm))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_SET_FORM_OFFSET))(this, value);
		}

		::System::Xml::Serialization::XmlTypeMapping* get_MappedType()
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_MAPPEDTYPE_OFFSET))(this);
		}

		::System::Void set_MappedType(::System::Xml::Serialization::XmlTypeMapping* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_SET_MAPPEDTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_IsNullable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_ISNULLABLE_OFFSET))(this);
		}

		::System::Void set_IsNullable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_SET_ISNULLABLE_OFFSET))(this, value);
		}

		::System::Xml::Serialization::XmlTypeMapMember* get_Member()
		{
			return ((::System::Xml::Serialization::XmlTypeMapMember*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_MEMBER_OFFSET))(this);
		}

		::System::Void set_NestingLevel(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_SET_NESTINGLEVEL_OFFSET))(this, value);
		}

		::System::Boolean get_MultiReferenceType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_MULTIREFERENCETYPE_OFFSET))(this);
		}

		::System::Boolean get_WrappedElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_WRAPPEDELEMENT_OFFSET))(this);
		}

		::System::Void set_WrappedElement(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_SET_WRAPPEDELEMENT_OFFSET))(this, value);
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

		::System::Int32 get_ExplicitOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPELEMENTINFO_GET_EXPLICITORDER_OFFSET))(this);
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
