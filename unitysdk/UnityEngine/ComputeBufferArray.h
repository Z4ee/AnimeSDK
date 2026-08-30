#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/BaseBindlessArray.h"

#define UNITYENGINE_COMPUTEBUFFERARRAY_DESTROY_OFFSET UNITYSDK_OFFSET(0x1ED13580)
#define UNITYENGINE_COMPUTEBUFFERARRAY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ED134D0)

namespace UnityEngine
{
	inline static constexpr unsigned int ComputeBufferArray_TypeDefinitionIndex = 4252;

	class ComputeBufferArray : public ::UnityEngine::BaseBindlessArray
	{
	public:
		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFERARRAY_DISPOSE_OFFSET))(this);
		}

		static ::System::Void Destroy(::UnityEngine::ComputeBufferArray* a1)
		{
			return ((::System::Void(*)(::UnityEngine::ComputeBufferArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFERARRAY_DESTROY_OFFSET))(a1);
		}
	};
}
