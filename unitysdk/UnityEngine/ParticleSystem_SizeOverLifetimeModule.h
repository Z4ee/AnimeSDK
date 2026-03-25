#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A97110)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x21230E0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_SEPARATEAXES_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A97410)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_SEPARATEAXES_OFFSET UNITYSDK_OFFSET(0x2123340)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_SIZEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A971C0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_SIZEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2123170)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A97180)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x2123100)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_XMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A97270)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_XMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2123200)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_X_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A97230)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_X_OFFSET UNITYSDK_OFFSET(0x2123190)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_YMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A97320)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_YMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2123290)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_Y_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A972E0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_Y_OFFSET UNITYSDK_OFFSET(0x2123220)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_ZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A973D0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_ZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2123320)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_Z_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A97390)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_Z_OFFSET UNITYSDK_OFFSET(0x21232B0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A97130)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x21230F0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_SEPARATEAXES_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A97430)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_SEPARATEAXES_OFFSET UNITYSDK_OFFSET(0x2123350)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_SIZEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A971E0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_SIZEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2123180)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A971A0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x2123140)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_XMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A97290)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_XMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2123210)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_X_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A97250)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_X_OFFSET UNITYSDK_OFFSET(0x21231D0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_YMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A97340)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_YMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x21232A0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_Y_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A97300)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_Y_OFFSET UNITYSDK_OFFSET(0x2123260)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_ZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A973F0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_ZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2123330)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_Z_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A973B0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_Z_OFFSET UNITYSDK_OFFSET(0x21232F0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xBDD0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_SizeOverLifetimeModule_TypeDefinitionIndex = 5454;

	struct alignas(8) ParticleSystem_SizeOverLifetimeModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* particleSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE__CTOR_OFFSET))(this, particleSystem);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_ENABLED_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_size()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_SIZE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_size(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_SIZE_OFFSET))(this, value);
		}
		*/

		::System::Single get_sizeMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_SIZEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_sizeMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_SIZEMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_x()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_X_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_x(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_X_OFFSET))(this, value);
		}
		*/

		::System::Single get_xMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_XMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_xMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_XMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_y()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_Y_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_y(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_Y_OFFSET))(this, value);
		}
		*/

		::System::Single get_yMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_YMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_yMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_YMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_z()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_Z_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_z(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_Z_OFFSET))(this, value);
		}
		*/

		::System::Single get_zMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_ZMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_zMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_ZMULTIPLIER_OFFSET))(this, value);
		}

		::System::Boolean get_separateAxes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_SEPARATEAXES_OFFSET))(this);
		}

		::System::Void set_separateAxes(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_SEPARATEAXES_OFFSET))(this, value);
		}

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_ENABLED_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_size_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_SIZE_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_size_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_SIZE_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_sizeMultiplier_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_SIZEMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_sizeMultiplier_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_SIZEMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_x_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_X_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_x_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_X_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_xMultiplier_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_XMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_xMultiplier_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_XMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_y_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_Y_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_y_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_Y_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_yMultiplier_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_YMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_yMultiplier_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_YMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_z_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_Z_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_z_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_Z_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_zMultiplier_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_ZMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_zMultiplier_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_ZMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_separateAxes_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_SEPARATEAXES_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_separateAxes_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_SEPARATEAXES_INJECTED_OFFSET))(_unity_self, value);
		}
	};
}
