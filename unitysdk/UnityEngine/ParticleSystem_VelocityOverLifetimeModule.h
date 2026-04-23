#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemSimulationSpace.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2670)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x22F5A40)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2C20)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F5F10)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2B00)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETX_OFFSET UNITYSDK_OFFSET(0x22F5DC0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2C60)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F5F30)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2B70)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETY_OFFSET UNITYSDK_OFFSET(0x22F5E30)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2CA0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F5F50)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2BE0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETZ_OFFSET UNITYSDK_OFFSET(0x22F5EA0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2A10)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F5D60)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D28F0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALX_OFFSET UNITYSDK_OFFSET(0x22F5C10)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2A50)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F5D80)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2960)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALY_OFFSET UNITYSDK_OFFSET(0x22F5C80)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2A90)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F5DA0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D29D0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALZ_OFFSET UNITYSDK_OFFSET(0x22F5CF0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_RADIALMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2D50)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_RADIALMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F5FE0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_RADIAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2D10)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_RADIAL_OFFSET UNITYSDK_OFFSET(0x22F5F70)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2E40)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPACE_OFFSET UNITYSDK_OFFSET(0x22F6090)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPEEDMODIFIERMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2E00)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPEEDMODIFIERMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F6070)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPEEDMODIFIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2DC0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPEEDMODIFIER_OFFSET UNITYSDK_OFFSET(0x22F6000)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_XMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2800)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_XMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F5BB0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_X_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D26E0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_X_OFFSET UNITYSDK_OFFSET(0x22F5A60)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_YMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2840)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_YMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F5BD0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_Y_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2750)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_Y_OFFSET UNITYSDK_OFFSET(0x22F5AD0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2880)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F5BF0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_Z_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D27C0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_Z_OFFSET UNITYSDK_OFFSET(0x22F5B40)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2690)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x22F5A50)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2C40)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F5F20)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2B20)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETX_OFFSET UNITYSDK_OFFSET(0x22F5E00)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2C80)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F5F40)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2B90)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETY_OFFSET UNITYSDK_OFFSET(0x22F5E70)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2CC0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F5F60)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2C00)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETZ_OFFSET UNITYSDK_OFFSET(0x22F5EE0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2A30)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F5D70)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2910)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALX_OFFSET UNITYSDK_OFFSET(0x22F5C50)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2A70)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F5D90)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2980)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALY_OFFSET UNITYSDK_OFFSET(0x22F5CC0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2AB0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F5DB0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D29F0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALZ_OFFSET UNITYSDK_OFFSET(0x22F5D30)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_RADIALMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2D70)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_RADIALMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F5FF0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_RADIAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2D30)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_RADIAL_OFFSET UNITYSDK_OFFSET(0x22F5FB0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2E60)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPACE_OFFSET UNITYSDK_OFFSET(0x22F60A0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPEEDMODIFIERMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2E20)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPEEDMODIFIERMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F6080)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPEEDMODIFIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2DE0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPEEDMODIFIER_OFFSET UNITYSDK_OFFSET(0x22F6040)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_XMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2820)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_XMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F5BC0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_X_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2700)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_X_OFFSET UNITYSDK_OFFSET(0x22F5AA0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_YMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2860)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_YMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F5BE0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_Y_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D2770)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_Y_OFFSET UNITYSDK_OFFSET(0x22F5B10)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D28A0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x22F5C00)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_Z_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D27E0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_Z_OFFSET UNITYSDK_OFFSET(0x22F5B80)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xBDC0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_VelocityOverLifetimeModule_TypeDefinitionIndex = 5459;

	struct alignas(8) ParticleSystem_VelocityOverLifetimeModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* particleSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE__CTOR_OFFSET))(this, particleSystem);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ENABLED_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_x()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_X_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_x(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_X_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_y()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_Y_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_y(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_Y_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_z()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_Z_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_z(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_Z_OFFSET))(this, value);
		}
		*/

		::System::Single get_xMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_XMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_xMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_XMULTIPLIER_OFFSET))(this, value);
		}

		::System::Single get_yMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_YMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_yMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_YMULTIPLIER_OFFSET))(this, value);
		}

		::System::Single get_zMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ZMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_zMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ZMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_orbitalX()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALX_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_orbitalX(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALX_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_orbitalY()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALY_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_orbitalY(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALY_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_orbitalZ()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALZ_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_orbitalZ(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALZ_OFFSET))(this, value);
		}
		*/

		::System::Single get_orbitalXMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALXMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_orbitalXMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALXMULTIPLIER_OFFSET))(this, value);
		}

		::System::Single get_orbitalYMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALYMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_orbitalYMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALYMULTIPLIER_OFFSET))(this, value);
		}

		::System::Single get_orbitalZMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALZMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_orbitalZMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALZMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_orbitalOffsetX()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETX_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_orbitalOffsetX(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETX_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_orbitalOffsetY()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETY_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_orbitalOffsetY(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETY_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_orbitalOffsetZ()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETZ_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_orbitalOffsetZ(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETZ_OFFSET))(this, value);
		}
		*/

		::System::Single get_orbitalOffsetXMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETXMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_orbitalOffsetXMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETXMULTIPLIER_OFFSET))(this, value);
		}

		::System::Single get_orbitalOffsetYMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETYMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_orbitalOffsetYMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETYMULTIPLIER_OFFSET))(this, value);
		}

		::System::Single get_orbitalOffsetZMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETZMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_orbitalOffsetZMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETZMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_radial()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_RADIAL_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_radial(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_RADIAL_OFFSET))(this, value);
		}
		*/

		::System::Single get_radialMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_RADIALMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_radialMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_RADIALMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_speedModifier()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPEEDMODIFIER_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_speedModifier(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPEEDMODIFIER_OFFSET))(this, value);
		}
		*/

		::System::Single get_speedModifierMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPEEDMODIFIERMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_speedModifierMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPEEDMODIFIERMULTIPLIER_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystemSimulationSpace get_space()
		{
			return ((::UnityEngine::ParticleSystemSimulationSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPACE_OFFSET))(this);
		}

		::System::Void set_space(::UnityEngine::ParticleSystemSimulationSpace value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemSimulationSpace))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPACE_OFFSET))(this, value);
		}

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ENABLED_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_x_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_X_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_x_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_X_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void get_y_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_Y_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_y_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_Y_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void get_z_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_Z_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_z_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_Z_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_xMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_XMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_xMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_XMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_yMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_YMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_yMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_YMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_zMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ZMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_zMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ZMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_orbitalX_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALX_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_orbitalX_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALX_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void get_orbitalY_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALY_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_orbitalY_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALY_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void get_orbitalZ_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALZ_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_orbitalZ_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALZ_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_orbitalXMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALXMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_orbitalXMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALXMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_orbitalYMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALYMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_orbitalYMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALYMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_orbitalZMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALZMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_orbitalZMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALZMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_orbitalOffsetX_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETX_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_orbitalOffsetX_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETX_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void get_orbitalOffsetY_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETY_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_orbitalOffsetY_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETY_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void get_orbitalOffsetZ_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETZ_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_orbitalOffsetZ_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETZ_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_orbitalOffsetXMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETXMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_orbitalOffsetXMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETXMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_orbitalOffsetYMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETYMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_orbitalOffsetYMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETYMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_orbitalOffsetZMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETZMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_orbitalOffsetZMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETZMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_radial_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_RADIAL_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_radial_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_RADIAL_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_radialMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_RADIALMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_radialMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_RADIALMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_speedModifier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPEEDMODIFIER_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_speedModifier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPEEDMODIFIER_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_speedModifierMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPEEDMODIFIERMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_speedModifierMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPEEDMODIFIERMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::UnityEngine::ParticleSystemSimulationSpace get_space_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self)
		{
			return ((::UnityEngine::ParticleSystemSimulationSpace(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPACE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_space_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystemSimulationSpace value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystemSimulationSpace))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPACE_INJECTED_OFFSET))(_unity_self, value);
		}
	};
}
