#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_MAP__CTOR_OFFSET UNITYSDK_OFFSET(0x45B370)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int FacetsChecker_FacetsCompiler_Map_TypeDefinitionIndex = 2054;

	struct alignas(8) FacetsChecker_FacetsCompiler_Map
	{
		::System::Char match; // 0x10
		::System::String* replacement; // 0x18

		::System::Void _ctor(::System::Char m, ::System::String* r)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_FACETSCHECKER_FACETSCOMPILER_MAP__CTOR_OFFSET))(this, m, r);
		}
	};
}
