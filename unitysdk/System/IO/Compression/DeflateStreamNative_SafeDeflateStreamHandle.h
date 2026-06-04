#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/SafeHandle.h"

#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_SAFEDEFLATESTREAMHANDLE_GET_ISINVALID_OFFSET UNITYSDK_OFFSET(0x1AF4FBA0)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_SAFEDEFLATESTREAMHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x1AF50110)
#define SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_SAFEDEFLATESTREAMHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF500E0)

namespace System::IO::Compression
{
	inline static constexpr unsigned int DeflateStreamNative_SafeDeflateStreamHandle_TypeDefinitionIndex = 2711;

	class DeflateStreamNative_SafeDeflateStreamHandle : public ::System::Runtime::InteropServices::SafeHandle
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_SAFEDEFLATESTREAMHANDLE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsInvalid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_SAFEDEFLATESTREAMHANDLE_GET_ISINVALID_OFFSET))(this);
		}

		::System::Boolean ReleaseHandle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_DEFLATESTREAMNATIVE_SAFEDEFLATESTREAMHANDLE_RELEASEHANDLE_OFFSET))(this);
		}
	};
}
