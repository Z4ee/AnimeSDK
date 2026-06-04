#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Collider2D.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_BOXCOLLIDER2D_GET_AUTOTILING_OFFSET UNITYSDK_OFFSET(0x1B3223A0)
#define UNITYENGINE_BOXCOLLIDER2D_GET_EDGERADIUS_OFFSET UNITYSDK_OFFSET(0x1B322380)
#define UNITYENGINE_BOXCOLLIDER2D_GET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B322340)
#define UNITYENGINE_BOXCOLLIDER2D_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1B322310)
#define UNITYENGINE_BOXCOLLIDER2D_SET_AUTOTILING_OFFSET UNITYSDK_OFFSET(0x1B3223B0)
#define UNITYENGINE_BOXCOLLIDER2D_SET_EDGERADIUS_OFFSET UNITYSDK_OFFSET(0x1B322390)
#define UNITYENGINE_BOXCOLLIDER2D_SET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B322370)
#define UNITYENGINE_BOXCOLLIDER2D_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1B322350)
#define UNITYENGINE_BOXCOLLIDER2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3223C0)

namespace UnityEngine
{
	inline static constexpr unsigned int BoxCollider2D_TypeDefinitionIndex = 5280;

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

		::System::Void set_size(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER2D_SET_SIZE_OFFSET))(this, a1);
		}

		::System::Single get_edgeRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER2D_GET_EDGERADIUS_OFFSET))(this);
		}

		::System::Void set_edgeRadius(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER2D_SET_EDGERADIUS_OFFSET))(this, a1);
		}

		::System::Boolean get_autoTiling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER2D_GET_AUTOTILING_OFFSET))(this);
		}

		::System::Void set_autoTiling(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER2D_SET_AUTOTILING_OFFSET))(this, a1);
		}

		::System::Void get_size_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER2D_GET_SIZE_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_size_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER2D_SET_SIZE_INJECTED_OFFSET))(this, a1);
		}
	};
}
