#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Xml::Schema { class KeySequence; }
namespace System::Xml::Schema { class LocatedActiveAxis; }

#define SYSTEM_XML_SCHEMA_KSSTRUCT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A73E5C0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int KSStruct_TypeDefinitionIndex = 1956;

	class KSStruct : public ::System::Object
	{
	public:
		::System::Xml::Schema::KeySequence* ks; // 0x10
		::Il2CppArray<::System::Xml::Schema::LocatedActiveAxis*>* fields; // 0x18
		::System::Int32 depth; // 0x20

		::System::Void _ctor(::System::Xml::Schema::KeySequence* ks, ::System::Int32 dim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::KeySequence*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_KSSTRUCT__CTOR_OFFSET))(this, ks, dim);
		}
	};
}
