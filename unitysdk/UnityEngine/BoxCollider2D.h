#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Collider2D.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_BOXCOLLIDER2D_GET_AUTOTILING_OFFSET UNITYSDK_OFFSET(0x18A9A5F0)
#define UNITYENGINE_BOXCOLLIDER2D_GET_EDGERADIUS_OFFSET UNITYSDK_OFFSET(0x18A9A5D0)
#define UNITYENGINE_BOXCOLLIDER2D_GET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A9A590)
#define UNITYENGINE_BOXCOLLIDER2D_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x18A9A560)
#define UNITYENGINE_BOXCOLLIDER2D_SET_AUTOTILING_OFFSET UNITYSDK_OFFSET(0x18A9A600)
#define UNITYENGINE_BOXCOLLIDER2D_SET_EDGERADIUS_OFFSET UNITYSDK_OFFSET(0x18A9A5E0)
#define UNITYENGINE_BOXCOLLIDER2D_SET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A9A5C0)
#define UNITYENGINE_BOXCOLLIDER2D_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x18A9A5A0)
#define UNITYENGINE_BOXCOLLIDER2D__CTOR_OFFSET UNITYSDK_OFFSET(0x18A9A610)

namespace UnityEngine
{
	inline static constexpr unsigned int BoxCollider2D_TypeDefinitionIndex = 5193;

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

		::System::Single get_edgeRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER2D_GET_EDGERADIUS_OFFSET))(this);
		}

		::System::Void set_edgeRadius(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER2D_SET_EDGERADIUS_OFFSET))(this, value);
		}

		::System::Boolean get_autoTiling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER2D_GET_AUTOTILING_OFFSET))(this);
		}

		::System::Void set_autoTiling(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER2D_SET_AUTOTILING_OFFSET))(this, value);
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
