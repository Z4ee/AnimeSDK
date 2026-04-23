#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/UnmanagedMemoryStream.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"

#define SYSTEM_IO_PINNEDBUFFERMEMORYSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1796D1A0)
#define SYSTEM_IO_PINNEDBUFFERMEMORYSTREAM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1796D0E0)
#define SYSTEM_IO_PINNEDBUFFERMEMORYSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1796CDD0)

namespace System::IO
{
	inline static constexpr unsigned int PinnedBufferMemoryStream_TypeDefinitionIndex = 681;

	class PinnedBufferMemoryStream : public ::System::IO::UnmanagedMemoryStream
	{
	public:
		::Il2CppArray<::System::Byte>* _array; // 0x68
		::System::Runtime::InteropServices::GCHandle _pinningHandle; // 0x70

		::System::Void _ctor(::Il2CppArray<::System::Byte>* array)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PINNEDBUFFERMEMORYSTREAM__CTOR_OFFSET))(this, array);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PINNEDBUFFERMEMORYSTREAM_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_PINNEDBUFFERMEMORYSTREAM_DISPOSE_OFFSET))(this, disposing);
		}
	};
}
