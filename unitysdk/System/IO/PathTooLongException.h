#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/IOException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_IO_PATHTOOLONGEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19ECCA90)
#define SYSTEM_IO_PATHTOOLONGEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19ECCB20)
#define SYSTEM_IO_PATHTOOLONGEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19ECC9D0)

namespace System::IO
{
	inline static constexpr unsigned int PathTooLongException_TypeDefinitionIndex = 648;

	class PathTooLongException : public ::System::IO::IOException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATHTOOLONGEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATHTOOLONGEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATHTOOLONGEXCEPTION__CTOR_2_OFFSET))(this, info, context);
		}
	};
}
