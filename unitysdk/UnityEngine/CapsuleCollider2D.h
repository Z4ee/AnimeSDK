#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/CapsuleDirection2D.h"
#include "unitysdk/UnityEngine/Collider2D.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_CAPSULECOLLIDER2D_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1F3BE3C0)
#define UNITYENGINE_CAPSULECOLLIDER2D_SET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3BE3B0)
#define UNITYENGINE_CAPSULECOLLIDER2D_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1F3BE390)
#define UNITYENGINE_CAPSULECOLLIDER2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3BE3D0)

namespace UnityEngine
{
	inline static constexpr unsigned int CapsuleCollider2D_TypeDefinitionIndex = 18795;

	class CapsuleCollider2D : public ::UnityEngine::Collider2D
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER2D__CTOR_OFFSET))(this);
		}

		::System::Void set_size(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER2D_SET_SIZE_OFFSET))(this, value);
		}

		::System::Void set_direction(::UnityEngine::CapsuleDirection2D value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::CapsuleDirection2D))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER2D_SET_DIRECTION_OFFSET))(this, value);
		}

		::System::Void set_size_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER2D_SET_SIZE_INJECTED_OFFSET))(this, value);
		}
	};
}
