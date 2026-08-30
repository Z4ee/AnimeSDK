#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_HALTONSEQUENCE_GET_OFFSET UNITYSDK_OFFSET(0x1CD1EF10)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int HaltonSequence_TypeDefinitionIndex = 34935;

	class HaltonSequence : public ::System::Object
	{
	public:
		static ::System::Single Get(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HALTONSEQUENCE_GET_OFFSET))(a1, a2);
		}
	};
}
