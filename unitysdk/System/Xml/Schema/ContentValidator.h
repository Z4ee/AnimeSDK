#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaContentType.h"

#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x18578480)
#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x18578490)
#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x185784B0)
#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18578470)
#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18578460)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int ContentValidator_TypeDefinitionIndex = 2067;

	class ContentValidator : public ::System::Object
	{
	public:
		static ::System::Xml::Schema::ContentValidator** StaticGet_Any()
		{
			return (::System::Xml::Schema::ContentValidator**)Il2CppClass::FromTypeDefinitionIndex(ContentValidator_TypeDefinitionIndex)->GetStaticField(0x7160);
		}
		static ::System::Xml::Schema::ContentValidator** StaticGet_Mixed()
		{
			return (::System::Xml::Schema::ContentValidator**)Il2CppClass::FromTypeDefinitionIndex(ContentValidator_TypeDefinitionIndex)->GetStaticField(0x7168);
		}
		static ::System::Xml::Schema::ContentValidator** StaticGet_Empty()
		{
			return (::System::Xml::Schema::ContentValidator**)Il2CppClass::FromTypeDefinitionIndex(ContentValidator_TypeDefinitionIndex)->GetStaticField(0x7170);
		}
		static ::System::Xml::Schema::ContentValidator** StaticGet_TextOnly()
		{
			return (::System::Xml::Schema::ContentValidator**)Il2CppClass::FromTypeDefinitionIndex(ContentValidator_TypeDefinitionIndex)->GetStaticField(0x7178);
		}
		::System::Xml::Schema::XmlSchemaContentType contentType; // 0x10
		::System::Boolean isOpen; // 0x14
		::System::Boolean isEmptiable; // 0x15

		::System::Void _ctor(::System::Xml::Schema::XmlSchemaContentType contentType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaContentType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CONTENTVALIDATOR__CTOR_OFFSET))(this, contentType);
		}

		::System::Void _ctor_1(::System::Xml::Schema::XmlSchemaContentType contentType, ::System::Boolean isOpen, ::System::Boolean isEmptiable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaContentType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CONTENTVALIDATOR__CTOR_1_OFFSET))(this, contentType, isOpen, isEmptiable);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CONTENTVALIDATOR__CCTOR_OFFSET))();
		}

		::System::Xml::Schema::XmlSchemaContentType get_ContentType()
		{
			return ((::System::Xml::Schema::XmlSchemaContentType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_GET_CONTENTTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_GET_ISOPEN_OFFSET))(this);
		}
	};
}
