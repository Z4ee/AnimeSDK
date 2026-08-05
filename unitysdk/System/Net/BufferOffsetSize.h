#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_BUFFEROFFSETSIZE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEBE8A0)
#define SYSTEM_NET_BUFFEROFFSETSIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEBE810)

namespace System::Net
{
	inline static constexpr unsigned int BufferOffsetSize_TypeDefinitionIndex = 3365;

	class BufferOffsetSize : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* Buffer; // 0x10
		::System::Int32 Size; // 0x18
		::System::Int32 Offset; // 0x1C

		::System::Void _ctor(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size, ::System::Boolean copyBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_BUFFEROFFSETSIZE__CTOR_OFFSET))(this, buffer, offset, size, copyBuffer);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* buffer, ::System::Boolean copyBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_BUFFEROFFSETSIZE__CTOR_1_OFFSET))(this, buffer, copyBuffer);
		}
	};
}
