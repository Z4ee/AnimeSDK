#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/IOException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_IO_DIRECTORYNOTFOUNDEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C4F3690)
#define SYSTEM_IO_DIRECTORYNOTFOUNDEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C4F3720)
#define SYSTEM_IO_DIRECTORYNOTFOUNDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4F35D0)

namespace System::IO
{
	inline static constexpr unsigned int DirectoryNotFoundException_TypeDefinitionIndex = 632;

	class DirectoryNotFoundException : public ::System::IO::IOException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYNOTFOUNDEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYNOTFOUNDEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYNOTFOUNDEXCEPTION__CTOR_2_OFFSET))(this, info, context);
		}
	};
}
