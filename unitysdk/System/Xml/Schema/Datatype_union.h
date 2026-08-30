#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_anySimpleType.h"

namespace System { class Type; }
namespace System::Xml::Schema { class XmlSchemaSimpleType; }

#define SYSTEM_XML_SCHEMA_DATATYPE_UNION_HASATOMICMEMBERS_OFFSET UNITYSDK_OFFSET(0x1E7E9830)
#define SYSTEM_XML_SCHEMA_DATATYPE_UNION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7F3140)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_union_TypeDefinitionIndex = 2092;

	class Datatype_union : public ::System::Xml::Schema::Datatype_anySimpleType
	{
	public:
		static ::System::Type** StaticGet_listValueType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Datatype_union_TypeDefinitionIndex)->GetStaticField(0x19AF0);
		}
		static ::System::Type** StaticGet_atomicValueType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Datatype_union_TypeDefinitionIndex)->GetStaticField(0x19AF8);
		}
		::Il2CppArray<::System::Xml::Schema::XmlSchemaSimpleType*>* types; // 0x38

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNION__CCTOR_OFFSET))();
		}

		::System::Boolean HasAtomicMembers()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_UNION_HASATOMICMEMBERS_OFFSET))(this);
		}
	};
}
