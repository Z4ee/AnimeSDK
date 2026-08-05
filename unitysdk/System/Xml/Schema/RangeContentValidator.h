#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/ContentValidator.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaContentType.h"

namespace System { class Object; }
namespace System::Collections { class ArrayList; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class BitSet; }
namespace System::Xml::Schema { class Positions; }
namespace System::Xml::Schema { class SymbolsDictionary; }
namespace System::Xml::Schema { class ValidationState; }
namespace System::Xml::Schema { class XmlSchemaSet; }

#define SYSTEM_XML_SCHEMA_RANGECONTENTVALIDATOR_COMPLETEVALIDATION_OFFSET UNITYSDK_OFFSET(0x1F14AF20)
#define SYSTEM_XML_SCHEMA_RANGECONTENTVALIDATOR_EXPECTEDELEMENTS_OFFSET UNITYSDK_OFFSET(0x1F14AF40)
#define SYSTEM_XML_SCHEMA_RANGECONTENTVALIDATOR_EXPECTEDPARTICLES_OFFSET UNITYSDK_OFFSET(0x1F14B380)
#define SYSTEM_XML_SCHEMA_RANGECONTENTVALIDATOR_INITVALIDATION_OFFSET UNITYSDK_OFFSET(0x1F149EC0)
#define SYSTEM_XML_SCHEMA_RANGECONTENTVALIDATOR_VALIDATEELEMENT_OFFSET UNITYSDK_OFFSET(0x1F14A050)
#define SYSTEM_XML_SCHEMA_RANGECONTENTVALIDATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F149DF0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int RangeContentValidator_TypeDefinitionIndex = 1979;

	class RangeContentValidator : public ::System::Xml::Schema::ContentValidator
	{
	public:
		::Il2CppArray<::System::Xml::Schema::BitSet*>* followpos; // 0x18
		::System::Xml::Schema::Positions* positions; // 0x20
		::System::Xml::Schema::BitSet* positionsWithRangeTerminals; // 0x28
		::System::Xml::Schema::SymbolsDictionary* symbols; // 0x30
		::System::Xml::Schema::BitSet* firstpos; // 0x38
		::System::Int32 endMarkerPos; // 0x40
		::System::Int32 minMaxNodesCount; // 0x44

		::System::Void _ctor(::System::Xml::Schema::BitSet* firstpos, ::Il2CppArray<::System::Xml::Schema::BitSet*>* followpos, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions, ::System::Int32 endMarkerPos, ::System::Xml::Schema::XmlSchemaContentType contentType, ::System::Boolean isEmptiable, ::System::Xml::Schema::BitSet* positionsWithRangeTerminals, ::System::Int32 minmaxNodesCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::BitSet*, ::Il2CppArray<::System::Xml::Schema::BitSet*>*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*, ::System::Int32, ::System::Xml::Schema::XmlSchemaContentType, ::System::Boolean, ::System::Xml::Schema::BitSet*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_RANGECONTENTVALIDATOR__CTOR_OFFSET))(this, firstpos, followpos, symbols, positions, endMarkerPos, contentType, isEmptiable, positionsWithRangeTerminals, minmaxNodesCount);
		}

		::System::Void InitValidation(::System::Xml::Schema::ValidationState* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::ValidationState*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_RANGECONTENTVALIDATOR_INITVALIDATION_OFFSET))(this, context);
		}

		::System::Object* ValidateElement(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::ValidationState* context, ::System::Int32& errorCode)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::ValidationState*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_RANGECONTENTVALIDATOR_VALIDATEELEMENT_OFFSET))(this, name, context, errorCode);
		}

		::System::Boolean CompleteValidation(::System::Xml::Schema::ValidationState* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::ValidationState*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_RANGECONTENTVALIDATOR_COMPLETEVALIDATION_OFFSET))(this, context);
		}

		::System::Collections::ArrayList* ExpectedElements(::System::Xml::Schema::ValidationState* context, ::System::Boolean isRequiredOnly)
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID, ::System::Xml::Schema::ValidationState*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_RANGECONTENTVALIDATOR_EXPECTEDELEMENTS_OFFSET))(this, context, isRequiredOnly);
		}

		::System::Collections::ArrayList* ExpectedParticles(::System::Xml::Schema::ValidationState* context, ::System::Boolean isRequiredOnly, ::System::Xml::Schema::XmlSchemaSet* schemaSet)
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID, ::System::Xml::Schema::ValidationState*, ::System::Boolean, ::System::Xml::Schema::XmlSchemaSet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_RANGECONTENTVALIDATOR_EXPECTEDPARTICLES_OFFSET))(this, context, isRequiredOnly, schemaSet);
		}
	};
}
