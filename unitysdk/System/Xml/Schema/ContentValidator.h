#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaContentType.h"

namespace System::Collections { class ArrayList; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class ValidationState; }
namespace System::Xml::Schema { class XmlSchemaParticle; }
namespace System::Xml::Schema { class XmlSchemaSet; }

#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_ADDPARTICLETOEXPECTED_1_OFFSET UNITYSDK_OFFSET(0x1F0688E0)
#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_ADDPARTICLETOEXPECTED_OFFSET UNITYSDK_OFFSET(0x1F068870)
#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_COMPLETEVALIDATION_OFFSET UNITYSDK_OFFSET(0x1F068840)
#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_EXPECTEDELEMENTS_OFFSET UNITYSDK_OFFSET(0x1F068850)
#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_EXPECTEDPARTICLES_OFFSET UNITYSDK_OFFSET(0x1F068860)
#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_GET_ISEMPTIABLE_OFFSET UNITYSDK_OFFSET(0x1F0687D0)
#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x1F0687E0)
#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_GET_PRESERVEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1F0687B0)
#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_INITVALIDATION_OFFSET UNITYSDK_OFFSET(0x1F068800)
#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_VALIDATEELEMENT_OFFSET UNITYSDK_OFFSET(0x1F068810)
#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F068BA0)
#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F0687A0)
#define SYSTEM_XML_SCHEMA_CONTENTVALIDATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F068790)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int ContentValidator_TypeDefinitionIndex = 1974;

	class ContentValidator : public ::System::Object
	{
	public:
		static ::System::Xml::Schema::ContentValidator** StaticGet_Mixed()
		{
			return (::System::Xml::Schema::ContentValidator**)Il2CppClass::FromTypeDefinitionIndex(ContentValidator_TypeDefinitionIndex)->GetStaticField(0x1880);
		}
		static ::System::Xml::Schema::ContentValidator** StaticGet_Any()
		{
			return (::System::Xml::Schema::ContentValidator**)Il2CppClass::FromTypeDefinitionIndex(ContentValidator_TypeDefinitionIndex)->GetStaticField(0x1888);
		}
		static ::System::Xml::Schema::ContentValidator** StaticGet_TextOnly()
		{
			return (::System::Xml::Schema::ContentValidator**)Il2CppClass::FromTypeDefinitionIndex(ContentValidator_TypeDefinitionIndex)->GetStaticField(0x1890);
		}
		static ::System::Xml::Schema::ContentValidator** StaticGet_Empty()
		{
			return (::System::Xml::Schema::ContentValidator**)Il2CppClass::FromTypeDefinitionIndex(ContentValidator_TypeDefinitionIndex)->GetStaticField(0x1898);
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

		::System::Boolean get_PreserveWhitespace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_GET_PRESERVEWHITESPACE_OFFSET))(this);
		}

		::System::Boolean get_IsEmptiable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_GET_ISEMPTIABLE_OFFSET))(this);
		}

		::System::Boolean get_IsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_GET_ISOPEN_OFFSET))(this);
		}

		::System::Void InitValidation(::System::Xml::Schema::ValidationState* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::ValidationState*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_INITVALIDATION_OFFSET))(this, context);
		}

		::System::Object* ValidateElement(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::ValidationState* context, ::System::Int32& errorCode)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::ValidationState*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_VALIDATEELEMENT_OFFSET))(this, name, context, errorCode);
		}

		::System::Boolean CompleteValidation(::System::Xml::Schema::ValidationState* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::ValidationState*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_COMPLETEVALIDATION_OFFSET))(this, context);
		}

		::System::Collections::ArrayList* ExpectedElements(::System::Xml::Schema::ValidationState* context, ::System::Boolean isRequiredOnly)
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID, ::System::Xml::Schema::ValidationState*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_EXPECTEDELEMENTS_OFFSET))(this, context, isRequiredOnly);
		}

		::System::Collections::ArrayList* ExpectedParticles(::System::Xml::Schema::ValidationState* context, ::System::Boolean isRequiredOnly, ::System::Xml::Schema::XmlSchemaSet* schemaSet)
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID, ::System::Xml::Schema::ValidationState*, ::System::Boolean, ::System::Xml::Schema::XmlSchemaSet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_EXPECTEDPARTICLES_OFFSET))(this, context, isRequiredOnly, schemaSet);
		}

		static ::System::Void AddParticleToExpected(::System::Xml::Schema::XmlSchemaParticle* p, ::System::Xml::Schema::XmlSchemaSet* schemaSet, ::System::Collections::ArrayList* particles)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XmlSchemaParticle*, ::System::Xml::Schema::XmlSchemaSet*, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_ADDPARTICLETOEXPECTED_OFFSET))(p, schemaSet, particles);
		}

		static ::System::Void AddParticleToExpected_1(::System::Xml::Schema::XmlSchemaParticle* p, ::System::Xml::Schema::XmlSchemaSet* schemaSet, ::System::Collections::ArrayList* particles, ::System::Boolean global)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XmlSchemaParticle*, ::System::Xml::Schema::XmlSchemaSet*, ::System::Collections::ArrayList*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CONTENTVALIDATOR_ADDPARTICLETOEXPECTED_1_OFFSET))(p, schemaSet, particles, global);
		}
	};
}
