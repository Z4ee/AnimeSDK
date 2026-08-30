#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/IOException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_IO_PATHTOOLONGEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D467D20)
#define SYSTEM_IO_PATHTOOLONGEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D46B7A0)
#define SYSTEM_IO_PATHTOOLONGEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D46B700)

namespace System::IO
{
	inline static constexpr unsigned int PathTooLongException_TypeDefinitionIndex = 682;

	class PathTooLongException : public ::System::IO::IOException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATHTOOLONGEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATHTOOLONGEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATHTOOLONGEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}
	};
}
