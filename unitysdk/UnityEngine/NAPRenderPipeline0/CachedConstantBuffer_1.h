#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/BaseCachedConstantBuffer.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int CachedConstantBuffer_1_TypeDefinitionIndex = 5998;

	template <typename T>
	class CachedConstantBuffer_1 : public ::UnityEngine::NAPRenderPipeline0::BaseCachedConstantBuffer
	{
	public:
		::Il2CppArray<T>* curData; // 0x0
		::Il2CppArray<T>* prevData; // 0x0
	};
}
