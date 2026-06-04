#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31D340)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3893500)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_SEPARATEAXES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31D590)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_SEPARATEAXES_OFFSET UNITYSDK_OFFSET(0x38936D0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_XMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31D3F0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_XMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3893590)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_X_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31D3B0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_X_OFFSET UNITYSDK_OFFSET(0x3893520)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_YMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31D4A0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_YMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3893620)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_Y_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31D460)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_Y_OFFSET UNITYSDK_OFFSET(0x38935B0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_ZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31D550)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_ZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x38936B0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_Z_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31D510)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_Z_OFFSET UNITYSDK_OFFSET(0x3893640)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31D360)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3893510)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_SEPARATEAXES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31D5B0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_SEPARATEAXES_OFFSET UNITYSDK_OFFSET(0x38936E0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_XMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31D410)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_XMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x38935A0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_X_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31D3D0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_X_OFFSET UNITYSDK_OFFSET(0x3893560)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_YMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31D4C0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_YMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3893630)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_Y_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31D480)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_Y_OFFSET UNITYSDK_OFFSET(0x38935F0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_ZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31D570)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_ZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x38936C0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_Z_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31D530)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_Z_OFFSET UNITYSDK_OFFSET(0x3893680)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC630)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_RotationOverLifetimeModule_TypeDefinitionIndex = 5744;

	struct alignas(8) ParticleSystem_RotationOverLifetimeModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_ENABLED_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_x()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_X_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_x(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_X_OFFSET))(this, a1);
		}
		*/

		::System::Single get_xMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_XMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_xMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_XMULTIPLIER_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_y()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_Y_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_y(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_Y_OFFSET))(this, a1);
		}
		*/

		::System::Single get_yMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_YMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_yMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_YMULTIPLIER_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_z()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_Z_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_z(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_Z_OFFSET))(this, a1);
		}
		*/

		::System::Single get_zMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_ZMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_zMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_ZMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Boolean get_separateAxes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_SEPARATEAXES_OFFSET))(this);
		}

		::System::Void set_separateAxes(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_SEPARATEAXES_OFFSET))(this, a1);
		}

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_RotationOverLifetimeModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_RotationOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_RotationOverLifetimeModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationOverLifetimeModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_ENABLED_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_x_Injected(::UnityEngine::ParticleSystem_RotationOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_X_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_x_Injected(::UnityEngine::ParticleSystem_RotationOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_X_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_xMultiplier_Injected(::UnityEngine::ParticleSystem_RotationOverLifetimeModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_RotationOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_XMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_xMultiplier_Injected(::UnityEngine::ParticleSystem_RotationOverLifetimeModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_XMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_y_Injected(::UnityEngine::ParticleSystem_RotationOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_Y_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_y_Injected(::UnityEngine::ParticleSystem_RotationOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_Y_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_yMultiplier_Injected(::UnityEngine::ParticleSystem_RotationOverLifetimeModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_RotationOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_YMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_yMultiplier_Injected(::UnityEngine::ParticleSystem_RotationOverLifetimeModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_YMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_z_Injected(::UnityEngine::ParticleSystem_RotationOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_Z_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_z_Injected(::UnityEngine::ParticleSystem_RotationOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_Z_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_zMultiplier_Injected(::UnityEngine::ParticleSystem_RotationOverLifetimeModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_RotationOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_ZMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_zMultiplier_Injected(::UnityEngine::ParticleSystem_RotationOverLifetimeModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_ZMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Boolean get_separateAxes_Injected(::UnityEngine::ParticleSystem_RotationOverLifetimeModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_RotationOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_SEPARATEAXES_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_separateAxes_Injected(::UnityEngine::ParticleSystem_RotationOverLifetimeModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationOverLifetimeModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_SEPARATEAXES_INJECTED_OFFSET))(a1, a2);
		}
	};
}
