#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnchoredJoint2D.h"

#define UNITYENGINE_FIXEDJOINT2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF8B480)

namespace UnityEngine
{
	inline static constexpr unsigned int FixedJoint2D_TypeDefinitionIndex = 18398;

	class FixedJoint2D : public ::UnityEngine::AnchoredJoint2D
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FIXEDJOINT2D__CTOR_OFFSET))(this);
		}
	};
}
