#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::IO { class StreamReader; }

#define SYSTEM_SECURITY_UTIL_TOKENIZER_STREAMTOKENREADER_GET_NUMCHARENCOUNTERED_OFFSET UNITYSDK_OFFSET(0x161F3520)
#define SYSTEM_SECURITY_UTIL_TOKENIZER_STREAMTOKENREADER_READ_OFFSET UNITYSDK_OFFSET(0x161F33D0)
#define SYSTEM_SECURITY_UTIL_TOKENIZER_STREAMTOKENREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x161F2D20)

namespace System::Security::Util
{
	inline static constexpr unsigned int Tokenizer_StreamTokenReader_TypeDefinitionIndex = 971;

	class Tokenizer_StreamTokenReader : public ::System::Object
	{
	public:
		::System::IO::StreamReader* _in; // 0x10
		::System::Int32 _numCharRead; // 0x18

		::System::Void _ctor(::System::IO::StreamReader* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::StreamReader*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZER_STREAMTOKENREADER__CTOR_OFFSET))(this, input);
		}

		::System::Int32 Read()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZER_STREAMTOKENREADER_READ_OFFSET))(this);
		}

		::System::Int32 get_NumCharEncountered()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UTIL_TOKENIZER_STREAMTOKENREADER_GET_NUMCHARENCOUNTERED_OFFSET))(this);
		}
	};
}
