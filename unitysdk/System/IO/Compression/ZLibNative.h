#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_IO_COMPRESSION_ZLIBNATIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x19BB1A70)

namespace System::IO::Compression
{
	inline static constexpr unsigned int ZLibNative_TypeDefinitionIndex = 3250;

	class ZLibNative : public ::System::Object
	{
	public:
		// static const ::System::Int32 GZip_DefaultWindowBits = 0x1F; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_COMPRESSION_ZLIBNATIVE__CTOR_OFFSET))(this);
		}
	};
}
