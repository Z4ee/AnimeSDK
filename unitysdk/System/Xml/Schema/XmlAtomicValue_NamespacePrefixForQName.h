#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_NAMESPACEPREFIXFORQNAME_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1AE4C610)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_NAMESPACEPREFIXFORQNAME_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x1AE4C660)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_NAMESPACEPREFIXFORQNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE4B290)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlAtomicValue_NamespacePrefixForQName_TypeDefinitionIndex = 2171;

	class XmlAtomicValue_NamespacePrefixForQName : public ::System::Object
	{
	public:
		::System::String* prefix; // 0x10
		::System::String* ns; // 0x18

		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_NAMESPACEPREFIXFORQNAME__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* LookupNamespace(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_NAMESPACEPREFIXFORQNAME_LOOKUPNAMESPACE_OFFSET))(this, a1);
		}

		::System::String* LookupPrefix(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_NAMESPACEPREFIXFORQNAME_LOOKUPPREFIX_OFFSET))(this, a1);
		}
	};
}
