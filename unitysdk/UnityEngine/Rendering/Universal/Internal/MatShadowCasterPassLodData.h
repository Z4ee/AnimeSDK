#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/MatLodBaseData.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATSHADOWCASTERPASSLODDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xF7F6D10)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int MatShadowCasterPassLodData_TypeDefinitionIndex = 30449;

	class MatShadowCasterPassLodData : public ::UnityEngine::Rendering::Universal::Internal::MatLodBaseData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATSHADOWCASTERPASSLODDATA__CTOR_OFFSET))(this);
		}
	};
}
