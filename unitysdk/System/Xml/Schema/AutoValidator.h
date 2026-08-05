#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/BaseValidator.h"
#include "unitysdk/System/Xml/ValidationType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Xml { class IValidationEventHandling; }
namespace System::Xml { class XmlValidatingReaderImpl; }
namespace System::Xml::Schema { class XmlSchemaCollection; }

#define SYSTEM_XML_SCHEMA_AUTOVALIDATOR_COMPLETEVALIDATION_OFFSET UNITYSDK_OFFSET(0x1F068480)
#define SYSTEM_XML_SCHEMA_AUTOVALIDATOR_DETECTVALIDATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1F067EA0)
#define SYSTEM_XML_SCHEMA_AUTOVALIDATOR_FINDID_OFFSET UNITYSDK_OFFSET(0x1F068490)
#define SYSTEM_XML_SCHEMA_AUTOVALIDATOR_GET_PRESERVEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1F067CA0)
#define SYSTEM_XML_SCHEMA_AUTOVALIDATOR_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1F067CB0)
#define SYSTEM_XML_SCHEMA_AUTOVALIDATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F067C30)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int AutoValidator_TypeDefinitionIndex = 1945;

	class AutoValidator : public ::System::Xml::Schema::BaseValidator
	{
	public:
		::System::Void _ctor(::System::Xml::XmlValidatingReaderImpl* reader, ::System::Xml::Schema::XmlSchemaCollection* schemaCollection, ::System::Xml::IValidationEventHandling* eventHandling)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlValidatingReaderImpl*, ::System::Xml::Schema::XmlSchemaCollection*, ::System::Xml::IValidationEventHandling*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AUTOVALIDATOR__CTOR_OFFSET))(this, reader, schemaCollection, eventHandling);
		}

		::System::Boolean get_PreserveWhitespace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AUTOVALIDATOR_GET_PRESERVEWHITESPACE_OFFSET))(this);
		}

		::System::Void Validate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AUTOVALIDATOR_VALIDATE_OFFSET))(this);
		}

		::System::Void CompleteValidation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AUTOVALIDATOR_COMPLETEVALIDATION_OFFSET))(this);
		}

		::System::Object* FindId(::System::String* name)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AUTOVALIDATOR_FINDID_OFFSET))(this, name);
		}

		::System::Xml::ValidationType DetectValidationType()
		{
			return ((::System::Xml::ValidationType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AUTOVALIDATOR_DETECTVALIDATIONTYPE_OFFSET))(this);
		}
	};
}
