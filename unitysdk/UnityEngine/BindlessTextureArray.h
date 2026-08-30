#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/BaseBindlessArray.h"

#define UNITYENGINE_BINDLESSTEXTUREARRAY_DESTROY_OFFSET UNITYSDK_OFFSET(0x1E1E8260)
#define UNITYENGINE_BINDLESSTEXTUREARRAY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E1E81B0)

namespace UnityEngine
{
	inline static constexpr unsigned int BindlessTextureArray_TypeDefinitionIndex = 4251;

	class BindlessTextureArray : public ::UnityEngine::BaseBindlessArray
	{
	public:
		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDLESSTEXTUREARRAY_DISPOSE_OFFSET))(this);
		}

		static ::System::Void Destroy(::UnityEngine::BindlessTextureArray* a1)
		{
			return ((::System::Void(*)(::UnityEngine::BindlessTextureArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDLESSTEXTUREARRAY_DESTROY_OFFSET))(a1);
		}
	};
}
