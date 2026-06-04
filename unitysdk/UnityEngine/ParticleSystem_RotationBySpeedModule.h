#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31D030)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x38932A0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_RANGE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31D2E0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_RANGE_OFFSET UNITYSDK_OFFSET(0x3893490)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_SEPARATEAXES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31D280)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_SEPARATEAXES_OFFSET UNITYSDK_OFFSET(0x3893470)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_XMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31D0E0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_XMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3893330)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_X_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31D0A0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_X_OFFSET UNITYSDK_OFFSET(0x38932C0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_YMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31D190)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_YMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x38933C0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_Y_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31D150)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_Y_OFFSET UNITYSDK_OFFSET(0x3893350)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_ZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31D240)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_ZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3893450)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_Z_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31D200)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_Z_OFFSET UNITYSDK_OFFSET(0x38933E0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31D050)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x38932B0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_RANGE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31D310)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_RANGE_OFFSET UNITYSDK_OFFSET(0x38934C0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_SEPARATEAXES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31D2A0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_SEPARATEAXES_OFFSET UNITYSDK_OFFSET(0x3893480)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_XMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31D100)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_XMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3893340)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_X_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31D0C0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_X_OFFSET UNITYSDK_OFFSET(0x3893300)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_YMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31D1B0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_YMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x38933D0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_Y_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31D170)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_Y_OFFSET UNITYSDK_OFFSET(0x3893390)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_ZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31D260)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_ZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3893460)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_Z_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31D220)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_Z_OFFSET UNITYSDK_OFFSET(0x3893420)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC630)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_RotationBySpeedModule_TypeDefinitionIndex = 5745;

	struct alignas(8) ParticleSystem_RotationBySpeedModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_ENABLED_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_x()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_X_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_x(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_X_OFFSET))(this, a1);
		}
		*/

		::System::Single get_xMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_XMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_xMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_XMULTIPLIER_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_y()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_Y_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_y(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_Y_OFFSET))(this, a1);
		}
		*/

		::System::Single get_yMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_YMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_yMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_YMULTIPLIER_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_z()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_Z_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_z(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_Z_OFFSET))(this, a1);
		}
		*/

		::System::Single get_zMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_ZMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_zMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_ZMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Boolean get_separateAxes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_SEPARATEAXES_OFFSET))(this);
		}

		::System::Void set_separateAxes(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_SEPARATEAXES_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::Vector2 get_range()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_RANGE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_range(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_RANGE_OFFSET))(this, a1);
		}
		*/

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_ENABLED_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_ENABLED_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_x_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_X_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_x_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_X_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_xMultiplier_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_XMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_xMultiplier_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_XMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_y_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_Y_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_y_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_Y_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_yMultiplier_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_YMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_yMultiplier_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_YMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_z_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_Z_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_z_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_Z_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_zMultiplier_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_ZMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_zMultiplier_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_ZMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Boolean get_separateAxes_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_SEPARATEAXES_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_separateAxes_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_SEPARATEAXES_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_range_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& a1, ::UnityEngine::Vector2& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_RANGE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_range_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& a1, ::UnityEngine::Vector2& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_RANGE_INJECTED_OFFSET))(a1, a2);
		}
		*/
	};
}
