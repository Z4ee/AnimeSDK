#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemSimulationSpace.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31FA00)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3894F50)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31FFB0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3895420)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31FE90)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETX_OFFSET UNITYSDK_OFFSET(0x38952D0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31FFF0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3895440)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31FF00)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETY_OFFSET UNITYSDK_OFFSET(0x3895340)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B320030)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3895460)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31FF70)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETZ_OFFSET UNITYSDK_OFFSET(0x38953B0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31FDA0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3895270)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31FC80)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALX_OFFSET UNITYSDK_OFFSET(0x3895120)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31FDE0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3895290)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31FCF0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALY_OFFSET UNITYSDK_OFFSET(0x3895190)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31FE20)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x38952B0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31FD60)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALZ_OFFSET UNITYSDK_OFFSET(0x3895200)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_RADIALMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B3200E0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_RADIALMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x38954F0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_RADIAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B3200A0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_RADIAL_OFFSET UNITYSDK_OFFSET(0x3895480)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B3201D0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPACE_OFFSET UNITYSDK_OFFSET(0x38955A0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPEEDMODIFIERMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B320190)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPEEDMODIFIERMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3895580)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPEEDMODIFIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B320150)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPEEDMODIFIER_OFFSET UNITYSDK_OFFSET(0x3895510)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_XMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31FB90)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_XMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x38950C0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_X_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31FA70)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_X_OFFSET UNITYSDK_OFFSET(0x3894F70)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_YMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31FBD0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_YMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x38950E0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_Y_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31FAE0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_Y_OFFSET UNITYSDK_OFFSET(0x3894FE0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31FC10)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3895100)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_Z_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31FB50)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_Z_OFFSET UNITYSDK_OFFSET(0x3895050)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31FA20)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3894F60)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31FFD0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3895430)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31FEB0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETX_OFFSET UNITYSDK_OFFSET(0x3895310)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B320010)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3895450)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31FF20)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETY_OFFSET UNITYSDK_OFFSET(0x3895380)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B320050)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3895470)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31FF90)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETZ_OFFSET UNITYSDK_OFFSET(0x38953F0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31FDC0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3895280)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31FCA0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALX_OFFSET UNITYSDK_OFFSET(0x3895160)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31FE00)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x38952A0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31FD10)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALY_OFFSET UNITYSDK_OFFSET(0x38951D0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31FE40)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x38952C0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31FD80)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALZ_OFFSET UNITYSDK_OFFSET(0x3895240)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_RADIALMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B320100)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_RADIALMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3895500)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_RADIAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B3200C0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_RADIAL_OFFSET UNITYSDK_OFFSET(0x38954C0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B3201F0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPACE_OFFSET UNITYSDK_OFFSET(0x38955B0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPEEDMODIFIERMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B3201B0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPEEDMODIFIERMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3895590)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPEEDMODIFIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B320170)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPEEDMODIFIER_OFFSET UNITYSDK_OFFSET(0x3895550)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_XMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31FBB0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_XMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x38950D0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_X_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31FA90)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_X_OFFSET UNITYSDK_OFFSET(0x3894FB0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_YMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31FBF0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_YMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x38950F0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_Y_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31FB00)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_Y_OFFSET UNITYSDK_OFFSET(0x3895020)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31FC30)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3895110)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_Z_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31FB70)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_Z_OFFSET UNITYSDK_OFFSET(0x3895090)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC630)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_VelocityOverLifetimeModule_TypeDefinitionIndex = 5736;

	struct alignas(8) ParticleSystem_VelocityOverLifetimeModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ENABLED_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_x()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_X_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_x(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_X_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_y()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_Y_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_y(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_Y_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_z()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_Z_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_z(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_Z_OFFSET))(this, a1);
		}
		*/

		::System::Single get_xMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_XMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_xMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_XMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Single get_yMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_YMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_yMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_YMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Single get_zMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ZMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_zMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ZMULTIPLIER_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_orbitalX()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALX_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_orbitalX(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALX_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_orbitalY()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALY_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_orbitalY(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALY_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_orbitalZ()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALZ_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_orbitalZ(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALZ_OFFSET))(this, a1);
		}
		*/

		::System::Single get_orbitalXMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALXMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_orbitalXMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALXMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Single get_orbitalYMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALYMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_orbitalYMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALYMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Single get_orbitalZMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALZMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_orbitalZMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALZMULTIPLIER_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_orbitalOffsetX()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETX_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_orbitalOffsetX(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETX_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_orbitalOffsetY()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETY_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_orbitalOffsetY(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETY_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_orbitalOffsetZ()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETZ_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_orbitalOffsetZ(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETZ_OFFSET))(this, a1);
		}
		*/

		::System::Single get_orbitalOffsetXMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETXMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_orbitalOffsetXMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETXMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Single get_orbitalOffsetYMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETYMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_orbitalOffsetYMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETYMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Single get_orbitalOffsetZMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETZMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_orbitalOffsetZMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETZMULTIPLIER_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_radial()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_RADIAL_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_radial(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_RADIAL_OFFSET))(this, a1);
		}
		*/

		::System::Single get_radialMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_RADIALMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_radialMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_RADIALMULTIPLIER_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_speedModifier()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPEEDMODIFIER_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_speedModifier(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPEEDMODIFIER_OFFSET))(this, a1);
		}
		*/

		::System::Single get_speedModifierMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPEEDMODIFIERMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_speedModifierMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPEEDMODIFIERMULTIPLIER_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystemSimulationSpace get_space()
		{
			return ((::UnityEngine::ParticleSystemSimulationSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPACE_OFFSET))(this);
		}

		::System::Void set_space(::UnityEngine::ParticleSystemSimulationSpace a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemSimulationSpace))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPACE_OFFSET))(this, a1);
		}

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ENABLED_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_x_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_X_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_x_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_X_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_y_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_Y_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_y_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_Y_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_z_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_Z_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_z_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_Z_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_xMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_XMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_xMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_XMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Single get_yMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_YMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_yMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_YMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Single get_zMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ZMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_zMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ZMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_orbitalX_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALX_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_orbitalX_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALX_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_orbitalY_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALY_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_orbitalY_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALY_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_orbitalZ_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALZ_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_orbitalZ_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALZ_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_orbitalXMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALXMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_orbitalXMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALXMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Single get_orbitalYMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALYMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_orbitalYMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALYMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Single get_orbitalZMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALZMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_orbitalZMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALZMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_orbitalOffsetX_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETX_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_orbitalOffsetX_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETX_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_orbitalOffsetY_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETY_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_orbitalOffsetY_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETY_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_orbitalOffsetZ_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETZ_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_orbitalOffsetZ_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETZ_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_orbitalOffsetXMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETXMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_orbitalOffsetXMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETXMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Single get_orbitalOffsetYMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETYMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_orbitalOffsetYMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETYMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Single get_orbitalOffsetZMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETZMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_orbitalOffsetZMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETZMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_radial_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_RADIAL_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_radial_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_RADIAL_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_radialMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_RADIALMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_radialMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_RADIALMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_speedModifier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPEEDMODIFIER_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_speedModifier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPEEDMODIFIER_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_speedModifierMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPEEDMODIFIERMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_speedModifierMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPEEDMODIFIERMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ParticleSystemSimulationSpace get_space_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1)
		{
			return ((::UnityEngine::ParticleSystemSimulationSpace(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPACE_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_space_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& a1, ::UnityEngine::ParticleSystemSimulationSpace a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystemSimulationSpace))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPACE_INJECTED_OFFSET))(a1, a2);
		}
	};
}
