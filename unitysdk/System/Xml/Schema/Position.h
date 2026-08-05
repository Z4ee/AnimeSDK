#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define SYSTEM_XML_SCHEMA_POSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x41FE00)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Position_TypeDefinitionIndex = 1961;

	struct alignas(8) Position
	{
		::System::Int32 symbol; // 0x10
		::System::Object* particle; // 0x18

		::System::Void _ctor(::System::Int32 symbol, ::System::Object* particle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_POSITION__CTOR_OFFSET))(this, symbol, particle);
		}
	};
}
