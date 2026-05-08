#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Collider2D.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_BOXCOLLIDER2D_GET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BC4A980)
#define UNITYENGINE_BOXCOLLIDER2D_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1BC4A950)
#define UNITYENGINE_BOXCOLLIDER2D_SET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BC4A9B0)
#define UNITYENGINE_BOXCOLLIDER2D_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1BC4A990)
#define UNITYENGINE_BOXCOLLIDER2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC4A9C0)

namespace UnityEngine
{
	inline static constexpr unsigned int BoxCollider2D_TypeDefinitionIndex = 7640;

	class BoxCollider2D : public ::UnityEngine::Collider2D
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER2D__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_size()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER2D_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_size(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER2D_SET_SIZE_OFFSET))(this, value);
		}

		::System::Void get_size_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER2D_GET_SIZE_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_size_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER2D_SET_SIZE_INJECTED_OFFSET))(this, value);
		}
	};
}
