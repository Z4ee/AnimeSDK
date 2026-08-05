#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class HttpStreamAsyncResult; }

#define SYSTEM_NET_CHUNKEDINPUTSTREAM_READBUFFERSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD19480)

namespace System::Net
{
	inline static constexpr unsigned int ChunkedInputStream_ReadBufferState_TypeDefinitionIndex = 3495;

	class ChunkedInputStream_ReadBufferState : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* Buffer; // 0x10
		::System::Net::HttpStreamAsyncResult* Ares; // 0x18
		::System::Int32 Count; // 0x20
		::System::Int32 InitialCount; // 0x24
		::System::Int32 Offset; // 0x28

		::System::Void _ctor(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::Net::HttpStreamAsyncResult* ares)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Net::HttpStreamAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CHUNKEDINPUTSTREAM_READBUFFERSTATE__CTOR_OFFSET))(this, buffer, offset, count, ares);
		}
	};
}
