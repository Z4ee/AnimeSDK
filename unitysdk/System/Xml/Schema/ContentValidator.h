#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaContentType.h"

#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1BAD0F90)
#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x1BAD0FA0)
#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BAD0FC0)
#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BAD0F80)
#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAD0F70)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int ContentValidator_TypeDefinitionIndex = 2079;

	class ContentValidator : public ::System::Object
	{
	public:
		static ::System::Xml::Schema::ContentValidator** StaticGet_Empty()
		{
			return (::System::Xml::Schema::ContentValidator**)Il2CppClass::FromTypeDefinitionIndex(ContentValidator_TypeDefinitionIndex)->GetStaticField(0x1A480);
		}
		static ::System::Xml::Schema::ContentValidator** StaticGet_TextOnly()
		{
			return (::System::Xml::Schema::ContentValidator**)Il2CppClass::FromTypeDefinitionIndex(ContentValidator_TypeDefinitionIndex)->GetStaticField(0x1A488);
		}
		static ::System::Xml::Schema::ContentValidator** StaticGet_Any()
		{
			return (::System::Xml::Schema::ContentValidator**)Il2CppClass::FromTypeDefinitionIndex(ContentValidator_TypeDefinitionIndex)->GetStaticField(0x1A490);
		}
		static ::System::Xml::Schema::ContentValidator** StaticGet_Mixed()
		{
			return (::System::Xml::Schema::ContentValidator**)Il2CppClass::FromTypeDefinitionIndex(ContentValidator_TypeDefinitionIndex)->GetStaticField(0x1A498);
		}
		::System::Xml::Schema::XmlSchemaContentType contentType; // 0x10
		::System::Boolean isEmptiable; // 0x14
		::System::Boolean isOpen; // 0x15

		::System::Void _ctor(::System::Xml::Schema::XmlSchemaContentType a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaContentType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CONTENTVALIDATOR__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Xml::Schema::XmlSchemaContentType a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaContentType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CONTENTVALIDATOR__CTOR_1_OFFSET))(this, a1, a2, a3);
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
