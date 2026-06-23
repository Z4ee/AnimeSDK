#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class BufferOffsetSize; }
namespace System::Net { class ScatterGatherBuffers_MemoryChunk; }

#define SYSTEM_NET_SCATTERGATHERBUFFERS_ALLOCATEMEMORYCHUNK_OFFSET UNITYSDK_OFFSET(0x1CB02CF0)
#define SYSTEM_NET_SCATTERGATHERBUFFERS_GETBUFFERS_OFFSET UNITYSDK_OFFSET(0x1CB02D90)
#define SYSTEM_NET_SCATTERGATHERBUFFERS_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x1CB02F40)
#define SYSTEM_NET_SCATTERGATHERBUFFERS_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1CB02F60)
#define SYSTEM_NET_SCATTERGATHERBUFFERS_WRITE_OFFSET UNITYSDK_OFFSET(0x1CB02F70)
#define SYSTEM_NET_SCATTERGATHERBUFFERS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CB02C30)
#define SYSTEM_NET_SCATTERGATHERBUFFERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB02C20)

namespace System::Net
{
	inline static constexpr unsigned int ScatterGatherBuffers_TypeDefinitionIndex = 3390;

	class ScatterGatherBuffers : public ::System::Object
	{
	public:
		::System::Net::ScatterGatherBuffers_MemoryChunk* headChunk; // 0x10
		::System::Net::ScatterGatherBuffers_MemoryChunk* currentChunk; // 0x18
		::System::Int32 totalLength; // 0x20
		::System::Int32 nextChunkLength; // 0x24
		::System::Int32 chunkCount; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SCATTERGATHERBUFFERS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int64 totalSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_SCATTERGATHERBUFFERS__CTOR_1_OFFSET))(this, totalSize);
		}

		::Il2CppArray<::System::Net::BufferOffsetSize*>* GetBuffers()
		{
			return ((::Il2CppArray<::System::Net::BufferOffsetSize*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SCATTERGATHERBUFFERS_GETBUFFERS_OFFSET))(this);
		}

		::System::Boolean get_Empty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SCATTERGATHERBUFFERS_GET_EMPTY_OFFSET))(this);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SCATTERGATHERBUFFERS_GET_LENGTH_OFFSET))(this);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SCATTERGATHERBUFFERS_WRITE_OFFSET))(this, buffer, offset, count);
		}

		::System::Net::ScatterGatherBuffers_MemoryChunk* AllocateMemoryChunk(::System::Int32 newSize)
		{
			return ((::System::Net::ScatterGatherBuffers_MemoryChunk*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SCATTERGATHERBUFFERS_ALLOCATEMEMORYCHUNK_OFFSET))(this, newSize);
		}
	};
}
