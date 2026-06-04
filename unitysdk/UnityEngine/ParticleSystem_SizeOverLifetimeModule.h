#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31E720)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x38942B0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_SEPARATEAXES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31EA20)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_SEPARATEAXES_OFFSET UNITYSDK_OFFSET(0x3894510)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_SIZEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31E7D0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_SIZEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3894340)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31E790)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x38942D0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_XMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31E880)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_XMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x38943D0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_X_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31E840)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_X_OFFSET UNITYSDK_OFFSET(0x3894360)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_YMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31E930)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_YMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3894460)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_Y_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31E8F0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_Y_OFFSET UNITYSDK_OFFSET(0x38943F0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_ZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31E9E0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_ZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x38944F0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_Z_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31E9A0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_Z_OFFSET UNITYSDK_OFFSET(0x3894480)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31E740)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x38942C0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_SEPARATEAXES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31EA40)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_SEPARATEAXES_OFFSET UNITYSDK_OFFSET(0x3894520)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_SIZEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31E7F0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_SIZEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3894350)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31E7B0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x3894310)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_XMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31E8A0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_XMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x38943E0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_X_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31E860)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_X_OFFSET UNITYSDK_OFFSET(0x38943A0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_YMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31E950)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_YMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3894470)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_Y_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31E910)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_Y_OFFSET UNITYSDK_OFFSET(0x3894430)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_ZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31EA00)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_ZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3894500)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_Z_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31E9C0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_Z_OFFSET UNITYSDK_OFFSET(0x38944C0)
#define UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC630)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_SizeOverLifetimeModule_TypeDefinitionIndex = 5742;

	struct alignas(8) ParticleSystem_SizeOverLifetimeModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_ENABLED_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_size()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_SIZE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_size(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_SIZE_OFFSET))(this, a1);
		}
		*/

		::System::Single get_sizeMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_SIZEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_sizeMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_SIZEMULTIPLIER_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_x()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_X_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_x(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_X_OFFSET))(this, a1);
		}
		*/

		::System::Single get_xMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_XMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_xMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_XMULTIPLIER_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_y()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_Y_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_y(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_Y_OFFSET))(this, a1);
		}
		*/

		::System::Single get_yMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_YMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_yMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_YMULTIPLIER_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_z()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_Z_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_z(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_Z_OFFSET))(this, a1);
		}
		*/

		::System::Single get_zMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_ZMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_zMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_ZMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Boolean get_separateAxes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_SEPARATEAXES_OFFSET))(this);
		}

		::System::Void set_separateAxes(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_SEPARATEAXES_OFFSET))(this, a1);
		}

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_ENABLED_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_size_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_SIZE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_size_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_SIZE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_sizeMultiplier_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_SIZEMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_sizeMultiplier_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_SIZEMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_x_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_X_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_x_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_X_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_xMultiplier_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_XMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_xMultiplier_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_XMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_y_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_Y_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_y_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_Y_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_yMultiplier_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_YMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_yMultiplier_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_YMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_z_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_Z_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_z_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_Z_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_zMultiplier_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_ZMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_zMultiplier_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_ZMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Boolean get_separateAxes_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_GET_SEPARATEAXES_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_separateAxes_Injected(::UnityEngine::ParticleSystem_SizeOverLifetimeModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_SizeOverLifetimeModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIZEOVERLIFETIMEMODULE_SET_SEPARATEAXES_INJECTED_OFFSET))(a1, a2);
		}
	};
}
