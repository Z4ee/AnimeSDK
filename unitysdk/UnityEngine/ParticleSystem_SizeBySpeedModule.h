#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A96D50)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x2122DF0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_RANGE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A970B0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_RANGE_OFFSET UNITYSDK_OFFSET(0x2123070)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_SEPARATEAXES_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A97050)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_SEPARATEAXES_OFFSET UNITYSDK_OFFSET(0x2123050)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_SIZEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A96E00)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_SIZEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2122E80)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A96DC0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x2122E10)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_XMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A96EB0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_XMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2122F10)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_X_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A96E70)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_X_OFFSET UNITYSDK_OFFSET(0x2122EA0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_YMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A96F60)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_YMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2122FA0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_Y_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A96F20)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_Y_OFFSET UNITYSDK_OFFSET(0x2122F30)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_ZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A97010)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_ZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2123030)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_Z_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A96FD0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_Z_OFFSET UNITYSDK_OFFSET(0x2122FC0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A96D70)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x2122E00)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_RANGE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A970E0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_RANGE_OFFSET UNITYSDK_OFFSET(0x21230A0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_SEPARATEAXES_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A97070)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_SEPARATEAXES_OFFSET UNITYSDK_OFFSET(0x2123060)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_SIZEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A96E20)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_SIZEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2122E90)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A96DE0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x2122E50)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_XMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A96ED0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_XMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2122F20)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_X_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A96E90)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_X_OFFSET UNITYSDK_OFFSET(0x2122EE0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_YMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A96F80)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_YMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2122FB0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_Y_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A96F40)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_Y_OFFSET UNITYSDK_OFFSET(0x2122F70)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_ZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A97030)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_ZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2123040)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_Z_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A96FF0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_Z_OFFSET UNITYSDK_OFFSET(0x2123000)
#define UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xBDD0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_SizeBySpeedModule_TypeDefinitionIndex = 5455;

	struct alignas(8) ParticleSystem_SizeBySpeedModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* particleSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE__CTOR_OFFSET))(this, particleSystem);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_ENABLED_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_size()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_SIZE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_size(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_SIZE_OFFSET))(this, value);
		}
		*/

		::System::Single get_sizeMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_SIZEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_sizeMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_SIZEMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_x()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_X_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_x(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_X_OFFSET))(this, value);
		}
		*/

		::System::Single get_xMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_XMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_xMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_XMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_y()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_Y_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_y(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_Y_OFFSET))(this, value);
		}
		*/

		::System::Single get_yMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_YMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_yMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_YMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_z()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_Z_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_z(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_Z_OFFSET))(this, value);
		}
		*/

		::System::Single get_zMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_ZMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_zMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_ZMULTIPLIER_OFFSET))(this, value);
		}

		::System::Boolean get_separateAxes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_SEPARATEAXES_OFFSET))(this);
		}

		::System::Void set_separateAxes(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_SEPARATEAXES_OFFSET))(this, value);
		}

		/*
		::UnityEngine::Vector2 get_range()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_RANGE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_range(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_RANGE_OFFSET))(this, value);
		}
		*/

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_ENABLED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_ENABLED_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_size_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_SIZE_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_size_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_SIZE_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_sizeMultiplier_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_SIZEMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_sizeMultiplier_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_SIZEMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_x_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_X_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_x_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_X_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_xMultiplier_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_XMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_xMultiplier_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_XMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_y_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_Y_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_y_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_Y_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_yMultiplier_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_YMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_yMultiplier_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_YMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_z_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_Z_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_z_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_Z_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_zMultiplier_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_ZMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_zMultiplier_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_ZMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_separateAxes_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_SEPARATEAXES_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_separateAxes_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_SEPARATEAXES_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_range_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& _unity_self, ::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_GET_RANGE_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_range_Injected(::UnityEngine::ParticleSystem_SizeBySpeedModule& _unity_self, ::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeBySpeedModule&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEBYSPEEDMODULE_SET_RANGE_INJECTED_OFFSET))(_unity_self, value);
		}
		*/
	};
}
