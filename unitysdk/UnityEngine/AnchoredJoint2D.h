#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Joint2D.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_ANCHOREDJOINT2D_GET_ANCHOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BC4A800)
#define UNITYENGINE_ANCHOREDJOINT2D_GET_ANCHOR_OFFSET UNITYSDK_OFFSET(0x1BC4A7D0)
#define UNITYENGINE_ANCHOREDJOINT2D_GET_CONNECTEDANCHOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BC4A870)
#define UNITYENGINE_ANCHOREDJOINT2D_GET_CONNECTEDANCHOR_OFFSET UNITYSDK_OFFSET(0x1BC4A840)
#define UNITYENGINE_ANCHOREDJOINT2D_SET_ANCHOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BC4A830)
#define UNITYENGINE_ANCHOREDJOINT2D_SET_ANCHOR_OFFSET UNITYSDK_OFFSET(0x1BC4A810)
#define UNITYENGINE_ANCHOREDJOINT2D_SET_CONNECTEDANCHOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BC4A8A0)
#define UNITYENGINE_ANCHOREDJOINT2D_SET_CONNECTEDANCHOR_OFFSET UNITYSDK_OFFSET(0x1BC4A880)
#define UNITYENGINE_ANCHOREDJOINT2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC4A8B0)

namespace UnityEngine
{
	inline static constexpr unsigned int AnchoredJoint2D_TypeDefinitionIndex = 7644;

	class AnchoredJoint2D : public ::UnityEngine::Joint2D
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANCHOREDJOINT2D__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_anchor()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANCHOREDJOINT2D_GET_ANCHOR_OFFSET))(this);
		}

		::System::Void set_anchor(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_ANCHOREDJOINT2D_SET_ANCHOR_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_connectedAnchor()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANCHOREDJOINT2D_GET_CONNECTEDANCHOR_OFFSET))(this);
		}

		::System::Void set_connectedAnchor(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_ANCHOREDJOINT2D_SET_CONNECTEDANCHOR_OFFSET))(this, value);
		}

		::System::Void get_anchor_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANCHOREDJOINT2D_GET_ANCHOR_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_anchor_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANCHOREDJOINT2D_SET_ANCHOR_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_connectedAnchor_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANCHOREDJOINT2D_GET_CONNECTEDANCHOR_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_connectedAnchor_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANCHOREDJOINT2D_SET_CONNECTEDANCHOR_INJECTED_OFFSET))(this, value);
		}
	};
}
