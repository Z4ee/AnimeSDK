#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_SCATTERGATHERBUFFERS_MEMORYCHUNK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A257580)

namespace System::Net
{
	inline static constexpr unsigned int ScatterGatherBuffers_MemoryChunk_TypeDefinitionIndex = 3392;

	class ScatterGatherBuffers_MemoryChunk : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* Buffer; // 0x10
		::System::Net::ScatterGatherBuffers_MemoryChunk* Next; // 0x18
		::System::Int32 FreeOffset; // 0x20

		::System::Void _ctor(::System::Int32 bufferSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SCATTERGATHERBUFFERS_MEMORYCHUNK__CTOR_OFFSET))(this, bufferSize);
		}
	};
}
