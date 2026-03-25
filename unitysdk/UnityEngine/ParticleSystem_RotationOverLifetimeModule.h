#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95D30)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x2122330)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_SEPARATEAXES_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95F80)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_SEPARATEAXES_OFFSET UNITYSDK_OFFSET(0x2122500)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_XMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95DE0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_XMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x21223C0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_X_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95DA0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_X_OFFSET UNITYSDK_OFFSET(0x2122350)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_YMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95E90)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_YMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2122450)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_Y_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95E50)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_Y_OFFSET UNITYSDK_OFFSET(0x21223E0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_ZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95F40)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_ZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x21224E0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_Z_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95F00)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_Z_OFFSET UNITYSDK_OFFSET(0x2122470)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95D50)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x2122340)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_SEPARATEAXES_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95FA0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_SEPARATEAXES_OFFSET UNITYSDK_OFFSET(0x2122510)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_XMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95E00)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_XMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x21223D0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_X_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95DC0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_X_OFFSET UNITYSDK_OFFSET(0x2122390)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_YMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95EB0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_YMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2122460)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_Y_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95E70)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_Y_OFFSET UNITYSDK_OFFSET(0x2122420)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_ZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95F60)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_ZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x21224F0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_Z_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95F20)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_Z_OFFSET UNITYSDK_OFFSET(0x21224B0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xBDD0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_RotationOverLifetimeModule_TypeDefinitionIndex = 5456;

	struct alignas(8) ParticleSystem_RotationOverLifetimeModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* particleSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE__CTOR_OFFSET))(this, particleSystem);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_ENABLED_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_x()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_X_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_x(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_X_OFFSET))(this, value);
		}
		*/

		::System::Single get_xMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_XMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_xMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_XMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_y()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_Y_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_y(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_Y_OFFSET))(this, value);
		}
		*/

		::System::Single get_yMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_YMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_yMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_YMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_z()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_Z_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_z(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_Z_OFFSET))(this, value);
		}
		*/

		::System::Single get_zMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_ZMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_zMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_ZMULTIPLIER_OFFSET))(this, value);
		}

		::System::Boolean get_separateAxes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_SEPARATEAXES_OFFSET))(this);
		}

		::System::Void set_separateAxes(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_SEPARATEAXES_OFFSET))(this, value);
		}

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_RotationOverLifetimeModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_RotationOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_RotationOverLifetimeModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationOverLifetimeModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_ENABLED_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_x_Injected(::UnityEngine::ParticleSystem_RotationOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_X_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_x_Injected(::UnityEngine::ParticleSystem_RotationOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_X_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_xMultiplier_Injected(::UnityEngine::ParticleSystem_RotationOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_RotationOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_XMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_xMultiplier_Injected(::UnityEngine::ParticleSystem_RotationOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_XMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_y_Injected(::UnityEngine::ParticleSystem_RotationOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_Y_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_y_Injected(::UnityEngine::ParticleSystem_RotationOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_Y_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_yMultiplier_Injected(::UnityEngine::ParticleSystem_RotationOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_RotationOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_YMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_yMultiplier_Injected(::UnityEngine::ParticleSystem_RotationOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_YMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_z_Injected(::UnityEngine::ParticleSystem_RotationOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_Z_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_z_Injected(::UnityEngine::ParticleSystem_RotationOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_Z_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_zMultiplier_Injected(::UnityEngine::ParticleSystem_RotationOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_RotationOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_ZMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_zMultiplier_Injected(::UnityEngine::ParticleSystem_RotationOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_ZMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_separateAxes_Injected(::UnityEngine::ParticleSystem_RotationOverLifetimeModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_RotationOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_GET_SEPARATEAXES_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_separateAxes_Injected(::UnityEngine::ParticleSystem_RotationOverLifetimeModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationOverLifetimeModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONOVERLIFETIMEMODULE_SET_SEPARATEAXES_INJECTED_OFFSET))(_unity_self, value);
		}
	};
}
