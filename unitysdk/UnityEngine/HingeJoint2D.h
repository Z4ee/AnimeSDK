#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnchoredJoint2D.h"

#define UNITYENGINE_HINGEJOINT2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF8B4D0)

namespace UnityEngine
{
	inline static constexpr unsigned int HingeJoint2D_TypeDefinitionIndex = 18396;

	class HingeJoint2D : public ::UnityEngine::AnchoredJoint2D
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HINGEJOINT2D__CTOR_OFFSET))(this);
		}
	};
}
