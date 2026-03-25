#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_MONOCHUNKSTREAM_CHUNK_READ_OFFSET UNITYSDK_OFFSET(0x186F9470)
#define SYSTEM_NET_MONOCHUNKSTREAM_CHUNK__CTOR_OFFSET UNITYSDK_OFFSET(0x186FA240)

namespace System::Net
{
	inline static constexpr unsigned int MonoChunkStream_Chunk_TypeDefinitionIndex = 2857;

	class MonoChunkStream_Chunk : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* Bytes; // 0x10
		::System::Int32 Offset; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::Byte>* chunk)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_CHUNK__CTOR_OFFSET))(this, chunk);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MONOCHUNKSTREAM_CHUNK_READ_OFFSET))(this, buffer, offset, size);
		}
	};
}
