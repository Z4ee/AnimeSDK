#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/ContentValidator.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaContentType.h"

namespace System { class Object; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class BitSet; }
namespace System::Xml::Schema { class ValidationState; }
namespace System::Xml::Schema { class XmlSchemaSet; }

#define SYSTEM_XML_SCHEMA_ALLELEMENTSCONTENTVALIDATOR_ADDELEMENT_OFFSET UNITYSDK_OFFSET(0x1D170240)
#define SYSTEM_XML_SCHEMA_ALLELEMENTSCONTENTVALIDATOR_COMPLETEVALIDATION_OFFSET UNITYSDK_OFFSET(0x1D170690)
#define SYSTEM_XML_SCHEMA_ALLELEMENTSCONTENTVALIDATOR_EXPECTEDELEMENTS_OFFSET UNITYSDK_OFFSET(0x1D1706D0)
#define SYSTEM_XML_SCHEMA_ALLELEMENTSCONTENTVALIDATOR_EXPECTEDPARTICLES_OFFSET UNITYSDK_OFFSET(0x1D170CD0)
#define SYSTEM_XML_SCHEMA_ALLELEMENTSCONTENTVALIDATOR_GET_ISEMPTIABLE_OFFSET UNITYSDK_OFFSET(0x1D1703C0)
#define SYSTEM_XML_SCHEMA_ALLELEMENTSCONTENTVALIDATOR_INITVALIDATION_OFFSET UNITYSDK_OFFSET(0x1D1703E0)
#define SYSTEM_XML_SCHEMA_ALLELEMENTSCONTENTVALIDATOR_VALIDATEELEMENT_OFFSET UNITYSDK_OFFSET(0x1D170490)
#define SYSTEM_XML_SCHEMA_ALLELEMENTSCONTENTVALIDATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D170140)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int AllElementsContentValidator_TypeDefinitionIndex = 1980;

	class AllElementsContentValidator : public ::System::Xml::Schema::ContentValidator
	{
	public:
		::Il2CppArray<::System::Object*>* particles; // 0x18
		::System::Xml::Schema::BitSet* isRequired; // 0x20
		::System::Collections::Hashtable* elements; // 0x28
		::System::Int32 countRequired; // 0x30

		::System::Void _ctor(::System::Xml::Schema::XmlSchemaContentType contentType, ::System::Int32 size, ::System::Boolean isEmptiable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaContentType, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ALLELEMENTSCONTENTVALIDATOR__CTOR_OFFSET))(this, contentType, size, isEmptiable);
		}

		::System::Boolean AddElement(::System::Xml::XmlQualifiedName* name, ::System::Object* particle, ::System::Boolean isEmptiable)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ALLELEMENTSCONTENTVALIDATOR_ADDELEMENT_OFFSET))(this, name, particle, isEmptiable);
		}

		::System::Boolean get_IsEmptiable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ALLELEMENTSCONTENTVALIDATOR_GET_ISEMPTIABLE_OFFSET))(this);
		}

		::System::Void InitValidation(::System::Xml::Schema::ValidationState* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::ValidationState*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ALLELEMENTSCONTENTVALIDATOR_INITVALIDATION_OFFSET))(this, context);
		}

		::System::Object* ValidateElement(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::ValidationState* context, ::System::Int32& errorCode)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::ValidationState*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ALLELEMENTSCONTENTVALIDATOR_VALIDATEELEMENT_OFFSET))(this, name, context, errorCode);
		}

		::System::Boolean CompleteValidation(::System::Xml::Schema::ValidationState* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::ValidationState*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ALLELEMENTSCONTENTVALIDATOR_COMPLETEVALIDATION_OFFSET))(this, context);
		}

		::System::Collections::ArrayList* ExpectedElements(::System::Xml::Schema::ValidationState* context, ::System::Boolean isRequiredOnly)
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID, ::System::Xml::Schema::ValidationState*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ALLELEMENTSCONTENTVALIDATOR_EXPECTEDELEMENTS_OFFSET))(this, context, isRequiredOnly);
		}

		::System::Collections::ArrayList* ExpectedParticles(::System::Xml::Schema::ValidationState* context, ::System::Boolean isRequiredOnly, ::System::Xml::Schema::XmlSchemaSet* schemaSet)
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID, ::System::Xml::Schema::ValidationState*, ::System::Boolean, ::System::Xml::Schema::XmlSchemaSet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ALLELEMENTSCONTENTVALIDATOR_EXPECTEDPARTICLES_OFFSET))(this, context, isRequiredOnly, schemaSet);
		}
	};
}
