#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/MatLodBaseData.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATREFLECTIONPASSLODDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2FA140)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int MatReflectionPassLodData_TypeDefinitionIndex = 30450;

	class MatReflectionPassLodData : public ::UnityEngine::Rendering::Universal::Internal::MatLodBaseData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATREFLECTIONPASSLODDATA__CTOR_OFFSET))(this);
		}
	};
}
