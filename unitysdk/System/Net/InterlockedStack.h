#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class Stack; }

#define SYSTEM_NET_INTERLOCKEDSTACK_POP_OFFSET UNITYSDK_OFFSET(0x1AFE38B0)
#define SYSTEM_NET_INTERLOCKEDSTACK_PUSH_OFFSET UNITYSDK_OFFSET(0x1AFE3770)
#define SYSTEM_NET_INTERLOCKEDSTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFE36F0)

namespace System::Net
{
	inline static constexpr unsigned int InterlockedStack_TypeDefinitionIndex = 3412;

	class InterlockedStack : public ::System::Object
	{
	public:
		::System::Collections::Stack* _stack; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_INTERLOCKEDSTACK__CTOR_OFFSET))(this);
		}

		::System::Void Push(::System::Object* pooledStream)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_INTERLOCKEDSTACK_PUSH_OFFSET))(this, pooledStream);
		}

		::System::Object* Pop()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_INTERLOCKEDSTACK_POP_OFFSET))(this);
		}
	};
}
