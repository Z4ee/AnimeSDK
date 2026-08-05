#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Joint2D.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_TARGETJOINT2D_GET_ANCHOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3C7BB0)
#define UNITYENGINE_TARGETJOINT2D_GET_ANCHOR_OFFSET UNITYSDK_OFFSET(0x1F3C7B80)
#define UNITYENGINE_TARGETJOINT2D_GET_TARGET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3C7C20)
#define UNITYENGINE_TARGETJOINT2D_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1F3C7BF0)
#define UNITYENGINE_TARGETJOINT2D_SET_ANCHOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3C7BE0)
#define UNITYENGINE_TARGETJOINT2D_SET_ANCHOR_OFFSET UNITYSDK_OFFSET(0x1F3C7BC0)
#define UNITYENGINE_TARGETJOINT2D_SET_AUTOCONFIGURETARGET_OFFSET UNITYSDK_OFFSET(0x1F3C7C60)
#define UNITYENGINE_TARGETJOINT2D_SET_DAMPINGRATIO_OFFSET UNITYSDK_OFFSET(0x1F3C7C80)
#define UNITYENGINE_TARGETJOINT2D_SET_FREQUENCY_OFFSET UNITYSDK_OFFSET(0x1F3C7C90)
#define UNITYENGINE_TARGETJOINT2D_SET_MAXFORCE_OFFSET UNITYSDK_OFFSET(0x1F3C7C70)
#define UNITYENGINE_TARGETJOINT2D_SET_TARGET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F3C7C50)
#define UNITYENGINE_TARGETJOINT2D_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x1F3C7C30)
#define UNITYENGINE_TARGETJOINT2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3C7CA0)

namespace UnityEngine
{
	inline static constexpr unsigned int TargetJoint2D_TypeDefinitionIndex = 18803;

	class TargetJoint2D : public ::UnityEngine::Joint2D
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TARGETJOINT2D__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_anchor()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TARGETJOINT2D_GET_ANCHOR_OFFSET))(this);
		}

		::System::Void set_anchor(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_TARGETJOINT2D_SET_ANCHOR_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_target()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TARGETJOINT2D_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_target(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_TARGETJOINT2D_SET_TARGET_OFFSET))(this, value);
		}

		::System::Void set_autoConfigureTarget(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TARGETJOINT2D_SET_AUTOCONFIGURETARGET_OFFSET))(this, value);
		}

		::System::Void set_maxForce(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TARGETJOINT2D_SET_MAXFORCE_OFFSET))(this, value);
		}

		::System::Void set_dampingRatio(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TARGETJOINT2D_SET_DAMPINGRATIO_OFFSET))(this, value);
		}

		::System::Void set_frequency(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TARGETJOINT2D_SET_FREQUENCY_OFFSET))(this, value);
		}

		::System::Void get_anchor_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_TARGETJOINT2D_GET_ANCHOR_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_anchor_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_TARGETJOINT2D_SET_ANCHOR_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_target_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_TARGETJOINT2D_GET_TARGET_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_target_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_TARGETJOINT2D_SET_TARGET_INJECTED_OFFSET))(this, value);
		}
	};
}
