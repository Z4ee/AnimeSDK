#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Collider2D.h"

#define UNITYENGINE_CIRCLECOLLIDER2D_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1B3223E0)
#define UNITYENGINE_CIRCLECOLLIDER2D_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1B3223F0)
#define UNITYENGINE_CIRCLECOLLIDER2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1B322400)

namespace UnityEngine
{
	inline static constexpr unsigned int CircleCollider2D_TypeDefinitionIndex = 5279;

	class CircleCollider2D : public ::UnityEngine::Collider2D
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CIRCLECOLLIDER2D__CTOR_OFFSET))(this);
		}

		::System::Single get_radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CIRCLECOLLIDER2D_GET_RADIUS_OFFSET))(this);
		}

		::System::Void set_radius(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CIRCLECOLLIDER2D_SET_RADIUS_OFFSET))(this, a1);
		}
	};
}
