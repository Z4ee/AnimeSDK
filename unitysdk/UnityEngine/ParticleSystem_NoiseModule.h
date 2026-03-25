#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemNoiseQuality.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_DAMPING_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A94F30)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_DAMPING_OFFSET UNITYSDK_OFFSET(0x2121910)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A94BB0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x2121670)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_FREQUENCY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A94EF0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_FREQUENCY_OFFSET UNITYSDK_OFFSET(0x21218F0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVECOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A94F70)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVECOUNT_OFFSET UNITYSDK_OFFSET(0x2121930)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A94FB0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2121950)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVESCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A94FF0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVESCALE_OFFSET UNITYSDK_OFFSET(0x2121970)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_POSITIONAMOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95450)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_POSITIONAMOUNT_OFFSET UNITYSDK_OFFSET(0x2121CA0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_QUALITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95030)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0x2121990)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95120)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPENABLED_OFFSET UNITYSDK_OFFSET(0x2121A40)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A951D0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2121AD0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95280)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2121B60)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPX_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95240)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPX_OFFSET UNITYSDK_OFFSET(0x2121AF0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95330)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2121BF0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A952F0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPY_OFFSET UNITYSDK_OFFSET(0x2121B80)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A953E0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2121C80)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A953A0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPZ_OFFSET UNITYSDK_OFFSET(0x2121C10)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAP_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95190)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAP_OFFSET UNITYSDK_OFFSET(0x2121A60)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_ROTATIONAMOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A954C0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_ROTATIONAMOUNT_OFFSET UNITYSDK_OFFSET(0x2121D10)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SCROLLSPEEDMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A950E0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SCROLLSPEEDMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2121A20)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SCROLLSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A950A0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SCROLLSPEED_OFFSET UNITYSDK_OFFSET(0x21219B0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SEPARATEAXES_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A94BF0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SEPARATEAXES_OFFSET UNITYSDK_OFFSET(0x2121690)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SIZEAMOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95530)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SIZEAMOUNT_OFFSET UNITYSDK_OFFSET(0x2121D80)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A94CA0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2121720)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A94D50)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x21217B0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHX_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A94D10)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHX_OFFSET UNITYSDK_OFFSET(0x2121740)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A94E00)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2121840)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A94DC0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHY_OFFSET UNITYSDK_OFFSET(0x21217D0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A94EB0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x21218D0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A94E70)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHZ_OFFSET UNITYSDK_OFFSET(0x2121860)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTH_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A94C60)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTH_OFFSET UNITYSDK_OFFSET(0x21216B0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_DAMPING_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A94F50)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_DAMPING_OFFSET UNITYSDK_OFFSET(0x2121920)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A94BD0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x2121680)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_FREQUENCY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A94F10)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_FREQUENCY_OFFSET UNITYSDK_OFFSET(0x2121900)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVECOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A94F90)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVECOUNT_OFFSET UNITYSDK_OFFSET(0x2121940)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A94FD0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2121960)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVESCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95010)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVESCALE_OFFSET UNITYSDK_OFFSET(0x2121980)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_POSITIONAMOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95470)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_POSITIONAMOUNT_OFFSET UNITYSDK_OFFSET(0x2121CE0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_QUALITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95050)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_QUALITY_OFFSET UNITYSDK_OFFSET(0x21219A0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95140)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPENABLED_OFFSET UNITYSDK_OFFSET(0x2121A50)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A951F0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2121AE0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A952A0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2121B70)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPX_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95260)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPX_OFFSET UNITYSDK_OFFSET(0x2121B30)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95350)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2121C00)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95310)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPY_OFFSET UNITYSDK_OFFSET(0x2121BC0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95400)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2121C90)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A953C0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPZ_OFFSET UNITYSDK_OFFSET(0x2121C50)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAP_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A951B0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAP_OFFSET UNITYSDK_OFFSET(0x2121AA0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_ROTATIONAMOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A954E0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_ROTATIONAMOUNT_OFFSET UNITYSDK_OFFSET(0x2121D50)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SCROLLSPEEDMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95100)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SCROLLSPEEDMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2121A30)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SCROLLSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A950C0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SCROLLSPEED_OFFSET UNITYSDK_OFFSET(0x21219F0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SEPARATEAXES_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A94C10)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SEPARATEAXES_OFFSET UNITYSDK_OFFSET(0x21216A0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SIZEAMOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A95550)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SIZEAMOUNT_OFFSET UNITYSDK_OFFSET(0x2121DC0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A94CC0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2121730)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A94D70)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x21217C0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHX_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A94D30)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHX_OFFSET UNITYSDK_OFFSET(0x2121780)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A94E20)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2121850)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A94DE0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHY_OFFSET UNITYSDK_OFFSET(0x2121810)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A94ED0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x21218E0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A94E90)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHZ_OFFSET UNITYSDK_OFFSET(0x21218A0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTH_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A94C80)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTH_OFFSET UNITYSDK_OFFSET(0x21216F0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xBDD0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_NoiseModule_TypeDefinitionIndex = 5459;

	struct alignas(8) ParticleSystem_NoiseModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* particleSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE__CTOR_OFFSET))(this, particleSystem);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_ENABLED_OFFSET))(this, value);
		}

		::System::Boolean get_separateAxes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SEPARATEAXES_OFFSET))(this);
		}

		::System::Void set_separateAxes(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SEPARATEAXES_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_strength()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTH_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_strength(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTH_OFFSET))(this, value);
		}
		*/

		::System::Single get_strengthMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_strengthMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_strengthX()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHX_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_strengthX(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHX_OFFSET))(this, value);
		}
		*/

		::System::Single get_strengthXMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHXMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_strengthXMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHXMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_strengthY()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHY_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_strengthY(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHY_OFFSET))(this, value);
		}
		*/

		::System::Single get_strengthYMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHYMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_strengthYMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHYMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_strengthZ()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHZ_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_strengthZ(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHZ_OFFSET))(this, value);
		}
		*/

		::System::Single get_strengthZMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHZMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_strengthZMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHZMULTIPLIER_OFFSET))(this, value);
		}

		::System::Single get_frequency()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_FREQUENCY_OFFSET))(this);
		}

		::System::Void set_frequency(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_FREQUENCY_OFFSET))(this, value);
		}

		::System::Boolean get_damping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_DAMPING_OFFSET))(this);
		}

		::System::Void set_damping(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_DAMPING_OFFSET))(this, value);
		}

		::System::Int32 get_octaveCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVECOUNT_OFFSET))(this);
		}

		::System::Void set_octaveCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVECOUNT_OFFSET))(this, value);
		}

		::System::Single get_octaveMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_octaveMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVEMULTIPLIER_OFFSET))(this, value);
		}

		::System::Single get_octaveScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVESCALE_OFFSET))(this);
		}

		::System::Void set_octaveScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVESCALE_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystemNoiseQuality get_quality()
		{
			return ((::UnityEngine::ParticleSystemNoiseQuality(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_QUALITY_OFFSET))(this);
		}

		::System::Void set_quality(::UnityEngine::ParticleSystemNoiseQuality value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemNoiseQuality))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_QUALITY_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_scrollSpeed()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SCROLLSPEED_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_scrollSpeed(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SCROLLSPEED_OFFSET))(this, value);
		}
		*/

		::System::Single get_scrollSpeedMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SCROLLSPEEDMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_scrollSpeedMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SCROLLSPEEDMULTIPLIER_OFFSET))(this, value);
		}

		::System::Boolean get_remapEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPENABLED_OFFSET))(this);
		}

		::System::Void set_remapEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPENABLED_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_remap()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAP_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_remap(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAP_OFFSET))(this, value);
		}
		*/

		::System::Single get_remapMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_remapMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_remapX()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPX_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_remapX(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPX_OFFSET))(this, value);
		}
		*/

		::System::Single get_remapXMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPXMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_remapXMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPXMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_remapY()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPY_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_remapY(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPY_OFFSET))(this, value);
		}
		*/

		::System::Single get_remapYMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPYMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_remapYMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPYMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_remapZ()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPZ_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_remapZ(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPZ_OFFSET))(this, value);
		}
		*/

		::System::Single get_remapZMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPZMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_remapZMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPZMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_positionAmount()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_POSITIONAMOUNT_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_positionAmount(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_POSITIONAMOUNT_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_rotationAmount()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_ROTATIONAMOUNT_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_rotationAmount(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_ROTATIONAMOUNT_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_sizeAmount()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SIZEAMOUNT_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_sizeAmount(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SIZEAMOUNT_OFFSET))(this, value);
		}
		*/

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_ENABLED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_ENABLED_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_separateAxes_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SEPARATEAXES_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_separateAxes_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SEPARATEAXES_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_strength_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTH_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_strength_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTH_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_strengthMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_strengthMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_strengthX_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHX_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_strengthX_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHX_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_strengthXMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHXMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_strengthXMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHXMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_strengthY_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHY_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_strengthY_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHY_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_strengthYMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHYMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_strengthYMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHYMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_strengthZ_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHZ_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_strengthZ_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHZ_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_strengthZMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHZMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_strengthZMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHZMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_frequency_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_FREQUENCY_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_frequency_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_FREQUENCY_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_damping_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_DAMPING_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_damping_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_DAMPING_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Int32 get_octaveCount_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVECOUNT_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_octaveCount_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::System::Int32 value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVECOUNT_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_octaveMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVEMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_octaveMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVEMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_octaveScale_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVESCALE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_octaveScale_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVESCALE_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::UnityEngine::ParticleSystemNoiseQuality get_quality_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::UnityEngine::ParticleSystemNoiseQuality(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_QUALITY_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_quality_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystemNoiseQuality value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystemNoiseQuality))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_QUALITY_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_scrollSpeed_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SCROLLSPEED_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_scrollSpeed_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SCROLLSPEED_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_scrollSpeedMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SCROLLSPEEDMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_scrollSpeedMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SCROLLSPEEDMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_remapEnabled_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPENABLED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_remapEnabled_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPENABLED_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_remap_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAP_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_remap_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAP_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_remapMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_remapMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_remapX_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPX_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_remapX_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPX_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_remapXMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPXMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_remapXMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPXMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_remapY_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPY_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_remapY_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPY_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_remapYMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPYMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_remapYMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPYMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_remapZ_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPZ_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_remapZ_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPZ_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_remapZMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPZMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_remapZMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPZMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_positionAmount_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_POSITIONAMOUNT_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_positionAmount_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_POSITIONAMOUNT_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void get_rotationAmount_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_ROTATIONAMOUNT_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_rotationAmount_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_ROTATIONAMOUNT_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void get_sizeAmount_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SIZEAMOUNT_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_sizeAmount_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SIZEAMOUNT_INJECTED_OFFSET))(_unity_self, value);
		}
		*/
	};
}
