#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class BufferOffsetSize; }

#define SYSTEM_NET_SPLITWRITESSTATE_GETNEXTBUFFERS_OFFSET UNITYSDK_OFFSET(0x1C02D720)
#define SYSTEM_NET_SPLITWRITESSTATE_GET_ISDONE_OFFSET UNITYSDK_OFFSET(0x1C02D690)
#define SYSTEM_NET_SPLITWRITESSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C02D680)

namespace System::Net
{
	inline static constexpr unsigned int SplitWritesState_TypeDefinitionIndex = 3328;

	class SplitWritesState : public ::System::Object
	{
	public:
		// static const ::System::Int32 c_SplitEncryptedBuffersSize = 0x10000; // 0x0
		::Il2CppArray<::System::Net::BufferOffsetSize*>* _UserBuffers; // 0x10
		::Il2CppArray<::System::Net::BufferOffsetSize*>* _RealBuffers; // 0x18
		::System::Int32 _Index; // 0x20
		::System::Int32 _LastBufferConsumed; // 0x24

		::System::Void _ctor(::Il2CppArray<::System::Net::BufferOffsetSize*>* buffers)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Net::BufferOffsetSize*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SPLITWRITESSTATE__CTOR_OFFSET))(this, buffers);
		}

		::System::Boolean get_IsDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SPLITWRITESSTATE_GET_ISDONE_OFFSET))(this);
		}

		::Il2CppArray<::System::Net::BufferOffsetSize*>* GetNextBuffers()
		{
			return ((::Il2CppArray<::System::Net::BufferOffsetSize*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SPLITWRITESSTATE_GETNEXTBUFFERS_OFFSET))(this);
		}
	};
}
