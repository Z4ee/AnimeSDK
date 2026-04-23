#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/BaseBindlessArray.h"

#define UNITYENGINE_COMPUTEBUFFERARRAY_DESTROY_OFFSET UNITYSDK_OFFSET(0x1A4332C0)
#define UNITYENGINE_COMPUTEBUFFERARRAY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A433230)

namespace UnityEngine
{
	inline static constexpr unsigned int ComputeBufferArray_TypeDefinitionIndex = 4063;

	class ComputeBufferArray : public ::UnityEngine::BaseBindlessArray
	{
	public:
		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFERARRAY_DISPOSE_OFFSET))(this);
		}

		static ::System::Void Destroy(::UnityEngine::ComputeBufferArray* bindlessArray)
		{
			return ((::System::Void(*)(::UnityEngine::ComputeBufferArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPUTEBUFFERARRAY_DESTROY_OFFSET))(bindlessArray);
		}
	};
}
