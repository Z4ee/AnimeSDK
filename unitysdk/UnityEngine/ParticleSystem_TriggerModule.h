#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemOverlapAction.h"

namespace UnityEngine { class Component; }
namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GETCOLLIDER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31F9B0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GETCOLLIDER_OFFSET UNITYSDK_OFFSET(0x3894F10)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31F810)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3894E40)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_ENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31F8D0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_ENTER_OFFSET UNITYSDK_OFFSET(0x3894EA0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_EXIT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31F910)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_EXIT_OFFSET UNITYSDK_OFFSET(0x3894EC0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_INSIDE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31F850)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_INSIDE_OFFSET UNITYSDK_OFFSET(0x3894E60)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_MAXCOLLIDERCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31F9D0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_MAXCOLLIDERCOUNT_OFFSET UNITYSDK_OFFSET(0x3894F20)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_OUTSIDE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31F890)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_OUTSIDE_OFFSET UNITYSDK_OFFSET(0x3894E80)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_RADIUSSCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31F950)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_RADIUSSCALE_OFFSET UNITYSDK_OFFSET(0x3894EE0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SETCOLLIDER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31F990)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SETCOLLIDER_OFFSET UNITYSDK_OFFSET(0x3894F00)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31F830)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3894E50)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_ENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31F8F0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_ENTER_OFFSET UNITYSDK_OFFSET(0x3894EB0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_EXIT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31F930)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_EXIT_OFFSET UNITYSDK_OFFSET(0x3894ED0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_INSIDE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31F870)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_INSIDE_OFFSET UNITYSDK_OFFSET(0x3894E70)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_OUTSIDE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31F8B0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_OUTSIDE_OFFSET UNITYSDK_OFFSET(0x3894E90)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_RADIUSSCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31F970)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_RADIUSSCALE_OFFSET UNITYSDK_OFFSET(0x3894EF0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC630)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_TriggerModule_TypeDefinitionIndex = 5749;

	struct alignas(8) ParticleSystem_TriggerModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_ENABLED_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystemOverlapAction get_inside()
		{
			return ((::UnityEngine::ParticleSystemOverlapAction(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_INSIDE_OFFSET))(this);
		}

		::System::Void set_inside(::UnityEngine::ParticleSystemOverlapAction a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemOverlapAction))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_INSIDE_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystemOverlapAction get_outside()
		{
			return ((::UnityEngine::ParticleSystemOverlapAction(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_OUTSIDE_OFFSET))(this);
		}

		::System::Void set_outside(::UnityEngine::ParticleSystemOverlapAction a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemOverlapAction))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_OUTSIDE_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystemOverlapAction get_enter()
		{
			return ((::UnityEngine::ParticleSystemOverlapAction(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_ENTER_OFFSET))(this);
		}

		::System::Void set_enter(::UnityEngine::ParticleSystemOverlapAction a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemOverlapAction))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_ENTER_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystemOverlapAction get_exit()
		{
			return ((::UnityEngine::ParticleSystemOverlapAction(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_EXIT_OFFSET))(this);
		}

		::System::Void set_exit(::UnityEngine::ParticleSystemOverlapAction a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemOverlapAction))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_EXIT_OFFSET))(this, a1);
		}

		::System::Single get_radiusScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_RADIUSSCALE_OFFSET))(this);
		}

		::System::Void set_radiusScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_RADIUSSCALE_OFFSET))(this, a1);
		}

		::System::Void SetCollider(::System::Int32 a1, ::UnityEngine::Component* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SETCOLLIDER_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Component* GetCollider(::System::Int32 a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GETCOLLIDER_OFFSET))(this, a1);
		}

		::System::Int32 get_maxColliderCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_MAXCOLLIDERCOUNT_OFFSET))(this);
		}

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_TriggerModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_TriggerModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_ENABLED_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_TriggerModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TriggerModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_ENABLED_INJECTED_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ParticleSystemOverlapAction get_inside_Injected(::UnityEngine::ParticleSystem_TriggerModule& a1)
		{
			return ((::UnityEngine::ParticleSystemOverlapAction(*)(::UnityEngine::ParticleSystem_TriggerModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_INSIDE_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_inside_Injected(::UnityEngine::ParticleSystem_TriggerModule& a1, ::UnityEngine::ParticleSystemOverlapAction a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TriggerModule&, ::UnityEngine::ParticleSystemOverlapAction))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_INSIDE_INJECTED_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ParticleSystemOverlapAction get_outside_Injected(::UnityEngine::ParticleSystem_TriggerModule& a1)
		{
			return ((::UnityEngine::ParticleSystemOverlapAction(*)(::UnityEngine::ParticleSystem_TriggerModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_OUTSIDE_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_outside_Injected(::UnityEngine::ParticleSystem_TriggerModule& a1, ::UnityEngine::ParticleSystemOverlapAction a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TriggerModule&, ::UnityEngine::ParticleSystemOverlapAction))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_OUTSIDE_INJECTED_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ParticleSystemOverlapAction get_enter_Injected(::UnityEngine::ParticleSystem_TriggerModule& a1)
		{
			return ((::UnityEngine::ParticleSystemOverlapAction(*)(::UnityEngine::ParticleSystem_TriggerModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_ENTER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_enter_Injected(::UnityEngine::ParticleSystem_TriggerModule& a1, ::UnityEngine::ParticleSystemOverlapAction a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TriggerModule&, ::UnityEngine::ParticleSystemOverlapAction))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_ENTER_INJECTED_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ParticleSystemOverlapAction get_exit_Injected(::UnityEngine::ParticleSystem_TriggerModule& a1)
		{
			return ((::UnityEngine::ParticleSystemOverlapAction(*)(::UnityEngine::ParticleSystem_TriggerModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_EXIT_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_exit_Injected(::UnityEngine::ParticleSystem_TriggerModule& a1, ::UnityEngine::ParticleSystemOverlapAction a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TriggerModule&, ::UnityEngine::ParticleSystemOverlapAction))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_EXIT_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Single get_radiusScale_Injected(::UnityEngine::ParticleSystem_TriggerModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_TriggerModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_RADIUSSCALE_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_radiusScale_Injected(::UnityEngine::ParticleSystem_TriggerModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TriggerModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_RADIUSSCALE_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void SetCollider_Injected(::UnityEngine::ParticleSystem_TriggerModule& a1, ::System::Int32 a2, ::UnityEngine::Component* a3)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TriggerModule&, ::System::Int32, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SETCOLLIDER_INJECTED_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Component* GetCollider_Injected(::UnityEngine::ParticleSystem_TriggerModule& a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Component*(*)(::UnityEngine::ParticleSystem_TriggerModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GETCOLLIDER_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Int32 get_maxColliderCount_Injected(::UnityEngine::ParticleSystem_TriggerModule& a1)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_TriggerModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_MAXCOLLIDERCOUNT_INJECTED_OFFSET))(a1);
		}
	};
}
