#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemInheritVelocityMode.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_CURVEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDAEC00)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_CURVEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3BC9FA0)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_CURVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDAEBC0)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_CURVE_OFFSET UNITYSDK_OFFSET(0x3BC9F30)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDAEB10)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3BC9EF0)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_MODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDAEB50)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_MODE_OFFSET UNITYSDK_OFFSET(0x3BC9F10)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_CURVEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDAEC20)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_CURVEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3BC9FB0)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_CURVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDAEBE0)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_CURVE_OFFSET UNITYSDK_OFFSET(0x3BC9F70)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDAEB30)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3BC9F00)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_MODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDAEB70)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_MODE_OFFSET UNITYSDK_OFFSET(0x3BC9F20)
#define UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC610)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_InheritVelocityModule_TypeDefinitionIndex = 5227;

	struct alignas(8) ParticleSystem_InheritVelocityModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_ENABLED_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystemInheritVelocityMode get_mode()
		{
			return ((::UnityEngine::ParticleSystemInheritVelocityMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_MODE_OFFSET))(this);
		}

		::System::Void set_mode(::UnityEngine::ParticleSystemInheritVelocityMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemInheritVelocityMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_MODE_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_curve()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_CURVE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_curve(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_CURVE_OFFSET))(this, a1);
		}
		*/

		::System::Single get_curveMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_CURVEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_curveMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_CURVEMULTIPLIER_OFFSET))(this, a1);
		}

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_InheritVelocityModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_InheritVelocityModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_ENABLED_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_InheritVelocityModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_InheritVelocityModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_ENABLED_INJECTED_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ParticleSystemInheritVelocityMode get_mode_Injected(::UnityEngine::ParticleSystem_InheritVelocityModule& a1)
		{
			return ((::UnityEngine::ParticleSystemInheritVelocityMode(*)(::UnityEngine::ParticleSystem_InheritVelocityModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_MODE_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_mode_Injected(::UnityEngine::ParticleSystem_InheritVelocityModule& a1, ::UnityEngine::ParticleSystemInheritVelocityMode a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_InheritVelocityModule&, ::UnityEngine::ParticleSystemInheritVelocityMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_MODE_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_curve_Injected(::UnityEngine::ParticleSystem_InheritVelocityModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_InheritVelocityModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_CURVE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_curve_Injected(::UnityEngine::ParticleSystem_InheritVelocityModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_InheritVelocityModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_CURVE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_curveMultiplier_Injected(::UnityEngine::ParticleSystem_InheritVelocityModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_InheritVelocityModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_GET_CURVEMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_curveMultiplier_Injected(::UnityEngine::ParticleSystem_InheritVelocityModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_InheritVelocityModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INHERITVELOCITYMODULE_SET_CURVEMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}
	};
}
