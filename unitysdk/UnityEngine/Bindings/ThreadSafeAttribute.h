#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bindings/NativeMethodAttribute.h"

#define UNITYENGINE_BINDINGS_THREADSAFEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3004E0)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int ThreadSafeAttribute_TypeDefinitionIndex = 3724;

	class ThreadSafeAttribute : public ::UnityEngine::Bindings::NativeMethodAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_THREADSAFEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
