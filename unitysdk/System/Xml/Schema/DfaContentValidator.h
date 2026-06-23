#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/ContentValidator.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaContentType.h"

namespace System { class Object; }
namespace System::Collections { class ArrayList; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class SymbolsDictionary; }
namespace System::Xml::Schema { class ValidationState; }
namespace System::Xml::Schema { class XmlSchemaSet; }

#define SYSTEM_XML_SCHEMA_DFACONTENTVALIDATOR_COMPLETEVALIDATION_OFFSET UNITYSDK_OFFSET(0x1DE40EA0)
#define SYSTEM_XML_SCHEMA_DFACONTENTVALIDATOR_EXPECTEDELEMENTS_OFFSET UNITYSDK_OFFSET(0x1DE40EC0)
#define SYSTEM_XML_SCHEMA_DFACONTENTVALIDATOR_EXPECTEDPARTICLES_OFFSET UNITYSDK_OFFSET(0x1DE41140)
#define SYSTEM_XML_SCHEMA_DFACONTENTVALIDATOR_INITVALIDATION_OFFSET UNITYSDK_OFFSET(0x1DE40CA0)
#define SYSTEM_XML_SCHEMA_DFACONTENTVALIDATOR_VALIDATEELEMENT_OFFSET UNITYSDK_OFFSET(0x1DE40D20)
#define SYSTEM_XML_SCHEMA_DFACONTENTVALIDATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE40C20)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int DfaContentValidator_TypeDefinitionIndex = 1976;

	class DfaContentValidator : public ::System::Xml::Schema::ContentValidator
	{
	public:
		::Il2CppArray<::Il2CppArray<::System::Int32>*>* transitionTable; // 0x18
		::System::Xml::Schema::SymbolsDictionary* symbols; // 0x20

		::System::Void _ctor(::Il2CppArray<::Il2CppArray<::System::Int32>*>* transitionTable, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::XmlSchemaContentType contentType, ::System::Boolean isOpen, ::System::Boolean isEmptiable)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Il2CppArray<::System::Int32>*>*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::XmlSchemaContentType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DFACONTENTVALIDATOR__CTOR_OFFSET))(this, transitionTable, symbols, contentType, isOpen, isEmptiable);
		}

		::System::Void InitValidation(::System::Xml::Schema::ValidationState* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::ValidationState*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DFACONTENTVALIDATOR_INITVALIDATION_OFFSET))(this, context);
		}

		::System::Object* ValidateElement(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::ValidationState* context, ::System::Int32& errorCode)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::ValidationState*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DFACONTENTVALIDATOR_VALIDATEELEMENT_OFFSET))(this, name, context, errorCode);
		}

		::System::Boolean CompleteValidation(::System::Xml::Schema::ValidationState* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::ValidationState*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DFACONTENTVALIDATOR_COMPLETEVALIDATION_OFFSET))(this, context);
		}

		::System::Collections::ArrayList* ExpectedElements(::System::Xml::Schema::ValidationState* context, ::System::Boolean isRequiredOnly)
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID, ::System::Xml::Schema::ValidationState*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DFACONTENTVALIDATOR_EXPECTEDELEMENTS_OFFSET))(this, context, isRequiredOnly);
		}

		::System::Collections::ArrayList* ExpectedParticles(::System::Xml::Schema::ValidationState* context, ::System::Boolean isRequiredOnly, ::System::Xml::Schema::XmlSchemaSet* schemaSet)
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID, ::System::Xml::Schema::ValidationState*, ::System::Boolean, ::System::Xml::Schema::XmlSchemaSet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DFACONTENTVALIDATOR_EXPECTEDPARTICLES_OFFSET))(this, context, isRequiredOnly, schemaSet);
		}
	};
}
