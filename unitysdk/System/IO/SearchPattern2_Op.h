#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SearchPattern2_OpCode.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_IO_SEARCHPATTERN2_OP__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEBDA80)

namespace System::IO
{
	inline static constexpr unsigned int SearchPattern2_Op_TypeDefinitionIndex = 3235;

	class SearchPattern2_Op : public ::System::Object
	{
	public:
		::System::IO::SearchPattern2_Op* Next; // 0x10
		::System::String* Argument; // 0x18
		::System::IO::SearchPattern2_OpCode Code; // 0x20

		::System::Void _ctor(::System::IO::SearchPattern2_OpCode code)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::SearchPattern2_OpCode))((::PBYTE)hIl2Cpp + SYSTEM_IO_SEARCHPATTERN2_OP__CTOR_OFFSET))(this, code);
		}
	};
}
