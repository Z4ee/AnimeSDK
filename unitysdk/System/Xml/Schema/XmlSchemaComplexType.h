#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaContentProcessing.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaDerivationMethod.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaType.h"

namespace System::Xml::Schema { class ContentValidator; }
namespace System::Xml::Schema { class XmlSchemaAnyAttribute; }
namespace System::Xml::Schema { class XmlSchemaParticle; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_CREATEANYTYPE_OFFSET UNITYSDK_OFFSET(0x1AE5D4E0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_ANYTYPECONTENTVALIDATOR_OFFSET UNITYSDK_OFFSET(0x1AE5DBB0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_ANYTYPE_OFFSET UNITYSDK_OFFSET(0x1AE5E2A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_CONTENTTYPEPARTICLE_OFFSET UNITYSDK_OFFSET(0x1AE5E300)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_SETATTRIBUTEWILDCARD_OFFSET UNITYSDK_OFFSET(0x1AE5E320)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_SETCONTENTTYPEPARTICLE_OFFSET UNITYSDK_OFFSET(0x1AE5E310)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_SET_ISMIXED_OFFSET UNITYSDK_OFFSET(0x1AE5DB80)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE5D190)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE5DA90)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaComplexType_TypeDefinitionIndex = 2179;

	class XmlSchemaComplexType : public ::System::Xml::Schema::XmlSchemaType
	{
	public:
		static ::System::Xml::Schema::XmlSchemaComplexType** StaticGet_untypedAnyType()
		{
			return (::System::Xml::Schema::XmlSchemaComplexType**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaComplexType_TypeDefinitionIndex)->GetStaticField(0x15110);
		}
		static ::System::Xml::Schema::XmlSchemaComplexType** StaticGet_anyTypeLax()
		{
			return (::System::Xml::Schema::XmlSchemaComplexType**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaComplexType_TypeDefinitionIndex)->GetStaticField(0x15118);
		}
		static ::System::Xml::Schema::XmlSchemaComplexType** StaticGet_anyTypeSkip()
		{
			return (::System::Xml::Schema::XmlSchemaComplexType**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaComplexType_TypeDefinitionIndex)->GetStaticField(0x15120);
		}
		::System::Xml::Schema::XmlSchemaParticle* contentTypeParticle; // 0x40
		::System::Xml::Schema::XmlSchemaAnyAttribute* attributeWildcard; // 0x48
		::System::Xml::Schema::XmlSchemaDerivationMethod block; // 0x50
		::System::Byte pvFlags; // 0x54

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Xml::Schema::XmlSchemaComplexType* CreateAnyType(::System::Xml::Schema::XmlSchemaContentProcessing a1)
		{
			return ((::System::Xml::Schema::XmlSchemaComplexType*(*)(::System::Xml::Schema::XmlSchemaContentProcessing))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_CREATEANYTYPE_OFFSET))(a1);
		}

		static ::System::Xml::Schema::XmlSchemaComplexType* get_AnyType()
		{
			return ((::System::Xml::Schema::XmlSchemaComplexType*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_ANYTYPE_OFFSET))();
		}

		static ::System::Xml::Schema::ContentValidator* get_AnyTypeContentValidator()
		{
			return ((::System::Xml::Schema::ContentValidator*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_ANYTYPECONTENTVALIDATOR_OFFSET))();
		}

		::System::Void set_IsMixed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_SET_ISMIXED_OFFSET))(this, a1);
		}

		::System::Xml::Schema::XmlSchemaParticle* get_ContentTypeParticle()
		{
			return ((::System::Xml::Schema::XmlSchemaParticle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_CONTENTTYPEPARTICLE_OFFSET))(this);
		}

		::System::Void SetContentTypeParticle(::System::Xml::Schema::XmlSchemaParticle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaParticle*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_SETCONTENTTYPEPARTICLE_OFFSET))(this, a1);
		}

		::System::Void SetAttributeWildcard(::System::Xml::Schema::XmlSchemaAnyAttribute* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAnyAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_SETATTRIBUTEWILDCARD_OFFSET))(this, a1);
		}
	};
}
