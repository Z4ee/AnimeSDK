#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class HttpStreamAsyncResult; }

#define SYSTEM_NET_CHUNKEDINPUTSTREAM_READBUFFERSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9583F0)

namespace System::Net
{
	inline static constexpr unsigned int ChunkedInputStream_ReadBufferState_TypeDefinitionIndex = 2826;

	class ChunkedInputStream_ReadBufferState : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* Buffer; // 0x10
		::System::Net::HttpStreamAsyncResult* Ares; // 0x18
		::System::Int32 InitialCount; // 0x20
		::System::Int32 Count; // 0x24
		::System::Int32 Offset; // 0x28

		::System::Void _ctor(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Net::HttpStreamAsyncResult* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::HttpStreamAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CHUNKEDINPUTSTREAM_READBUFFERSTATE__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
