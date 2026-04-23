#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Joint2D.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_ANCHOREDJOINT2D_GET_CONNECTEDANCHOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D47D0)
#define UNITYENGINE_ANCHOREDJOINT2D_GET_CONNECTEDANCHOR_OFFSET UNITYSDK_OFFSET(0x1A4D47A0)

namespace UnityEngine
{
	inline static constexpr unsigned int AnchoredJoint2D_TypeDefinitionIndex = 5208;

	class AnchoredJoint2D : public ::UnityEngine::Joint2D
	{
	public:
		::UnityEngine::Vector2 get_connectedAnchor()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANCHOREDJOINT2D_GET_CONNECTEDANCHOR_OFFSET))(this);
		}

		::System::Void get_connectedAnchor_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANCHOREDJOINT2D_GET_CONNECTEDANCHOR_INJECTED_OFFSET))(this, ret);
		}
	};
}
