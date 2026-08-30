#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/UnmanagedMemoryStream.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"

#define SYSTEM_IO_PINNEDBUFFERMEMORYSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BD5AA40)
#define SYSTEM_IO_PINNEDBUFFERMEMORYSTREAM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BD5A980)
#define SYSTEM_IO_PINNEDBUFFERMEMORYSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD5A670)

namespace System::IO
{
	inline static constexpr unsigned int PinnedBufferMemoryStream_TypeDefinitionIndex = 683;

	class PinnedBufferMemoryStream : public ::System::IO::UnmanagedMemoryStream
	{
	public:
		::Il2CppArray<::System::Byte>* _array; // 0x68
		::System::Runtime::InteropServices::GCHandle _pinningHandle; // 0x70

		::System::Void _ctor(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PINNEDBUFFERMEMORYSTREAM__CTOR_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PINNEDBUFFERMEMORYSTREAM_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_PINNEDBUFFERMEMORYSTREAM_DISPOSE_OFFSET))(this, a1);
		}
	};
}
