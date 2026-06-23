#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/XR/XRHMD.h"

#define UNITY_XR_GOOGLEVR_DAYDREAMHMD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8A5F30)

namespace Unity::XR::GoogleVr
{
	inline static constexpr unsigned int DaydreamHMD_TypeDefinitionIndex = 31516;

	class DaydreamHMD : public ::UnityEngine::InputSystem::XR::XRHMD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_XR_GOOGLEVR_DAYDREAMHMD__CTOR_OFFSET))(this);
		}
	};
}
