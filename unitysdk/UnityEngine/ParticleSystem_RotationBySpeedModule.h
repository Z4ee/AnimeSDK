#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95A20)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x21220D0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_RANGE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95CD0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_RANGE_OFFSET UNITYSDK_OFFSET(0x21222C0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_SEPARATEAXES_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95C70)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_SEPARATEAXES_OFFSET UNITYSDK_OFFSET(0x21222A0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_XMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95AD0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_XMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2122160)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_X_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95A90)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_X_OFFSET UNITYSDK_OFFSET(0x21220F0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_YMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95B80)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_YMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x21221F0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_Y_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95B40)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_Y_OFFSET UNITYSDK_OFFSET(0x2122180)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_ZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95C30)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_ZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2122280)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_Z_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95BF0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_Z_OFFSET UNITYSDK_OFFSET(0x2122210)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95A40)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x21220E0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_RANGE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95D00)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_RANGE_OFFSET UNITYSDK_OFFSET(0x21222F0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_SEPARATEAXES_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95C90)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_SEPARATEAXES_OFFSET UNITYSDK_OFFSET(0x21222B0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_XMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95AF0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_XMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2122170)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_X_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95AB0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_X_OFFSET UNITYSDK_OFFSET(0x2122130)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_YMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95BA0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_YMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2122200)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_Y_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95B60)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_Y_OFFSET UNITYSDK_OFFSET(0x21221C0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_ZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95C50)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_ZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2122290)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_Z_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95C10)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_Z_OFFSET UNITYSDK_OFFSET(0x2122250)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xBDD0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_RotationBySpeedModule_TypeDefinitionIndex = 5457;

	struct alignas(8) ParticleSystem_RotationBySpeedModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* particleSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE__CTOR_OFFSET))(this, particleSystem);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_ENABLED_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_x()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_X_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_x(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_X_OFFSET))(this, value);
		}
		*/

		::System::Single get_xMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_XMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_xMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_XMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_y()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_Y_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_y(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_Y_OFFSET))(this, value);
		}
		*/

		::System::Single get_yMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_YMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_yMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_YMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_z()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_Z_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_z(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_Z_OFFSET))(this, value);
		}
		*/

		::System::Single get_zMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_ZMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_zMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_ZMULTIPLIER_OFFSET))(this, value);
		}

		::System::Boolean get_separateAxes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_SEPARATEAXES_OFFSET))(this);
		}

		::System::Void set_separateAxes(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_SEPARATEAXES_OFFSET))(this, value);
		}

		/*
		::UnityEngine::Vector2 get_range()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_RANGE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_range(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_RANGE_OFFSET))(this, value);
		}
		*/

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_ENABLED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_ENABLED_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_x_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_X_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_x_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_X_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_xMultiplier_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_XMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_xMultiplier_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_XMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_y_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_Y_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_y_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_Y_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_yMultiplier_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_YMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_yMultiplier_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_YMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_z_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_Z_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_z_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_Z_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_zMultiplier_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_ZMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_zMultiplier_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_ZMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_separateAxes_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_SEPARATEAXES_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_separateAxes_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_SEPARATEAXES_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_range_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& _unity_self, ::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_RANGE_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_range_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule& _unity_self, ::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_RANGE_INJECTED_OFFSET))(_unity_self, value);
		}
		*/
	};
}
