#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/MatLodBaseData.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATOUTLINELODDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x191108C0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int MatOutlineLodData_TypeDefinitionIndex = 30451;

	class MatOutlineLodData : public ::UnityEngine::Rendering::Universal::Internal::MatLodBaseData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MATOUTLINELODDATA__CTOR_OFFSET))(this);
		}
	};
}
