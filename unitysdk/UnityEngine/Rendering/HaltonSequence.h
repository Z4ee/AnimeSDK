#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_HALTONSEQUENCE_GET_OFFSET UNITYSDK_OFFSET(0x188E7B60)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int HaltonSequence_TypeDefinitionIndex = 27891;

	class HaltonSequence : public ::System::Object
	{
	public:
		static ::System::Single Get(::System::Int32 index, ::System::Int32 radix)
		{
			return ((::System::Single(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HALTONSEQUENCE_GET_OFFSET))(index, radix);
		}
	};
}
