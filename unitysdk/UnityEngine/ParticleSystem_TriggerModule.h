#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemOverlapAction.h"

namespace UnityEngine { class Component; }
namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GETCOLLIDER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EEBBC10)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GETCOLLIDER_OFFSET UNITYSDK_OFFSET(0x3C8FC60)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EEBBA70)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3C8FB90)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_ENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EEBBB30)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_ENTER_OFFSET UNITYSDK_OFFSET(0x3C8FBF0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_EXIT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EEBBB70)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_EXIT_OFFSET UNITYSDK_OFFSET(0x3C8FC10)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_INSIDE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EEBBAB0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_INSIDE_OFFSET UNITYSDK_OFFSET(0x3C8FBB0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_MAXCOLLIDERCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EEBBC30)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_MAXCOLLIDERCOUNT_OFFSET UNITYSDK_OFFSET(0x3C8FC70)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_OUTSIDE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EEBBAF0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_OUTSIDE_OFFSET UNITYSDK_OFFSET(0x3C8FBD0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_RADIUSSCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EEBBBB0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_GET_RADIUSSCALE_OFFSET UNITYSDK_OFFSET(0x3C8FC30)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SETCOLLIDER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EEBBBF0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SETCOLLIDER_OFFSET UNITYSDK_OFFSET(0x3C8FC50)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EEBBA90)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3C8FBA0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_ENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EEBBB50)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_ENTER_OFFSET UNITYSDK_OFFSET(0x3C8FC00)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_EXIT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EEBBB90)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_EXIT_OFFSET UNITYSDK_OFFSET(0x3C8FC20)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_INSIDE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EEBBAD0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_INSIDE_OFFSET UNITYSDK_OFFSET(0x3C8FBC0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_OUTSIDE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EEBBB10)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_OUTSIDE_OFFSET UNITYSDK_OFFSET(0x3C8FBE0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_RADIUSSCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EEBBBD0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE_SET_RADIUSSCALE_OFFSET UNITYSDK_OFFSET(0x3C8FC40)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x16050)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_TriggerModule_TypeDefinitionIndex = 5238;

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
