#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemNoiseQuality.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_DAMPING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C4A0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_DAMPING_OFFSET UNITYSDK_OFFSET(0x3892AE0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C120)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3892840)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_FREQUENCY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C460)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_FREQUENCY_OFFSET UNITYSDK_OFFSET(0x3892AC0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVECOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C4E0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVECOUNT_OFFSET UNITYSDK_OFFSET(0x3892B00)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C520)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3892B20)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVESCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C560)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVESCALE_OFFSET UNITYSDK_OFFSET(0x3892B40)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_POSITIONAMOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C9C0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_POSITIONAMOUNT_OFFSET UNITYSDK_OFFSET(0x3892E70)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_QUALITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C5A0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0x3892B60)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C690)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPENABLED_OFFSET UNITYSDK_OFFSET(0x3892C10)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C740)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3892CA0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C7F0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3892D30)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C7B0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPX_OFFSET UNITYSDK_OFFSET(0x3892CC0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C8A0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3892DC0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C860)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPY_OFFSET UNITYSDK_OFFSET(0x3892D50)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C950)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3892E50)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C910)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPZ_OFFSET UNITYSDK_OFFSET(0x3892DE0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C700)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAP_OFFSET UNITYSDK_OFFSET(0x3892C30)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_ROTATIONAMOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31CA30)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_ROTATIONAMOUNT_OFFSET UNITYSDK_OFFSET(0x3892EE0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SCROLLSPEEDMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C650)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SCROLLSPEEDMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3892BF0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SCROLLSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C610)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SCROLLSPEED_OFFSET UNITYSDK_OFFSET(0x3892B80)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SEPARATEAXES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C160)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SEPARATEAXES_OFFSET UNITYSDK_OFFSET(0x3892860)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SIZEAMOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31CAA0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SIZEAMOUNT_OFFSET UNITYSDK_OFFSET(0x3892F50)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C210)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x38928F0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C2C0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3892980)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C280)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHX_OFFSET UNITYSDK_OFFSET(0x3892910)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C370)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3892A10)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C330)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHY_OFFSET UNITYSDK_OFFSET(0x38929A0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C420)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3892AA0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C3E0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHZ_OFFSET UNITYSDK_OFFSET(0x3892A30)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C1D0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTH_OFFSET UNITYSDK_OFFSET(0x3892880)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_DAMPING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C4C0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_DAMPING_OFFSET UNITYSDK_OFFSET(0x3892AF0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C140)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3892850)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_FREQUENCY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C480)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_FREQUENCY_OFFSET UNITYSDK_OFFSET(0x3892AD0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVECOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C500)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVECOUNT_OFFSET UNITYSDK_OFFSET(0x3892B10)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C540)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3892B30)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVESCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C580)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVESCALE_OFFSET UNITYSDK_OFFSET(0x3892B50)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_POSITIONAMOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C9E0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_POSITIONAMOUNT_OFFSET UNITYSDK_OFFSET(0x3892EB0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_QUALITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C5C0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_QUALITY_OFFSET UNITYSDK_OFFSET(0x3892B70)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C6B0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPENABLED_OFFSET UNITYSDK_OFFSET(0x3892C20)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C760)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3892CB0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C810)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3892D40)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C7D0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPX_OFFSET UNITYSDK_OFFSET(0x3892D00)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C8C0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3892DD0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C880)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPY_OFFSET UNITYSDK_OFFSET(0x3892D90)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C970)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3892E60)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C930)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPZ_OFFSET UNITYSDK_OFFSET(0x3892E20)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C720)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAP_OFFSET UNITYSDK_OFFSET(0x3892C70)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_ROTATIONAMOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31CA50)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_ROTATIONAMOUNT_OFFSET UNITYSDK_OFFSET(0x3892F20)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SCROLLSPEEDMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C670)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SCROLLSPEEDMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3892C00)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SCROLLSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C630)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SCROLLSPEED_OFFSET UNITYSDK_OFFSET(0x3892BC0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SEPARATEAXES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C180)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SEPARATEAXES_OFFSET UNITYSDK_OFFSET(0x3892870)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SIZEAMOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31CAC0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SIZEAMOUNT_OFFSET UNITYSDK_OFFSET(0x3892F90)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C230)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3892900)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C2E0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3892990)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C2A0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHX_OFFSET UNITYSDK_OFFSET(0x3892950)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C390)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3892A20)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C350)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHY_OFFSET UNITYSDK_OFFSET(0x38929E0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C440)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3892AB0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C400)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHZ_OFFSET UNITYSDK_OFFSET(0x3892A70)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B31C1F0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTH_OFFSET UNITYSDK_OFFSET(0x38928C0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC630)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_NoiseModule_TypeDefinitionIndex = 5747;

	struct alignas(8) ParticleSystem_NoiseModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_ENABLED_OFFSET))(this, a1);
		}

		::System::Boolean get_separateAxes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SEPARATEAXES_OFFSET))(this);
		}

		::System::Void set_separateAxes(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SEPARATEAXES_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_strength()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTH_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_strength(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTH_OFFSET))(this, a1);
		}
		*/

		::System::Single get_strengthMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_strengthMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHMULTIPLIER_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_strengthX()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHX_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_strengthX(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHX_OFFSET))(this, a1);
		}
		*/

		::System::Single get_strengthXMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHXMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_strengthXMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHXMULTIPLIER_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_strengthY()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHY_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_strengthY(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHY_OFFSET))(this, a1);
		}
		*/

		::System::Single get_strengthYMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHYMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_strengthYMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHYMULTIPLIER_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_strengthZ()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHZ_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_strengthZ(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHZ_OFFSET))(this, a1);
		}
		*/

		::System::Single get_strengthZMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHZMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_strengthZMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHZMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Single get_frequency()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_FREQUENCY_OFFSET))(this);
		}

		::System::Void set_frequency(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_FREQUENCY_OFFSET))(this, a1);
		}

		::System::Boolean get_damping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_DAMPING_OFFSET))(this);
		}

		::System::Void set_damping(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_DAMPING_OFFSET))(this, a1);
		}

		::System::Int32 get_octaveCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVECOUNT_OFFSET))(this);
		}

		::System::Void set_octaveCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVECOUNT_OFFSET))(this, a1);
		}

		::System::Single get_octaveMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_octaveMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVEMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Single get_octaveScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVESCALE_OFFSET))(this);
		}

		::System::Void set_octaveScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVESCALE_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystemNoiseQuality get_quality()
		{
			return ((::UnityEngine::ParticleSystemNoiseQuality(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_QUALITY_OFFSET))(this);
		}

		::System::Void set_quality(::UnityEngine::ParticleSystemNoiseQuality a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemNoiseQuality))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_QUALITY_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_scrollSpeed()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SCROLLSPEED_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_scrollSpeed(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SCROLLSPEED_OFFSET))(this, a1);
		}
		*/

		::System::Single get_scrollSpeedMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SCROLLSPEEDMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_scrollSpeedMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SCROLLSPEEDMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Boolean get_remapEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPENABLED_OFFSET))(this);
		}

		::System::Void set_remapEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPENABLED_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_remap()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAP_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_remap(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAP_OFFSET))(this, a1);
		}
		*/

		::System::Single get_remapMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_remapMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPMULTIPLIER_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_remapX()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPX_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_remapX(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPX_OFFSET))(this, a1);
		}
		*/

		::System::Single get_remapXMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPXMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_remapXMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPXMULTIPLIER_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_remapY()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPY_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_remapY(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPY_OFFSET))(this, a1);
		}
		*/

		::System::Single get_remapYMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPYMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_remapYMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPYMULTIPLIER_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_remapZ()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPZ_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_remapZ(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPZ_OFFSET))(this, a1);
		}
		*/

		::System::Single get_remapZMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPZMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_remapZMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPZMULTIPLIER_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_positionAmount()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_POSITIONAMOUNT_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_positionAmount(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_POSITIONAMOUNT_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_rotationAmount()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_ROTATIONAMOUNT_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_rotationAmount(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_ROTATIONAMOUNT_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_sizeAmount()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SIZEAMOUNT_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_sizeAmount(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SIZEAMOUNT_OFFSET))(this, a1);
		}
		*/

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_ENABLED_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_ENABLED_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Boolean get_separateAxes_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SEPARATEAXES_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_separateAxes_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SEPARATEAXES_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_strength_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTH_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_strength_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTH_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_strengthMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_strengthMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_strengthX_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHX_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_strengthX_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHX_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_strengthXMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHXMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_strengthXMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHXMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_strengthY_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHY_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_strengthY_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHY_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_strengthYMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHYMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_strengthYMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHYMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_strengthZ_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHZ_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_strengthZ_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHZ_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_strengthZMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHZMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_strengthZMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHZMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Single get_frequency_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_FREQUENCY_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_frequency_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_FREQUENCY_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Boolean get_damping_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_DAMPING_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_damping_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_DAMPING_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Int32 get_octaveCount_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVECOUNT_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_octaveCount_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVECOUNT_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Single get_octaveMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVEMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_octaveMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVEMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Single get_octaveScale_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVESCALE_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_octaveScale_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVESCALE_INJECTED_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ParticleSystemNoiseQuality get_quality_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1)
		{
			return ((::UnityEngine::ParticleSystemNoiseQuality(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_QUALITY_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_quality_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::UnityEngine::ParticleSystemNoiseQuality a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystemNoiseQuality))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_QUALITY_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_scrollSpeed_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SCROLLSPEED_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_scrollSpeed_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SCROLLSPEED_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_scrollSpeedMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SCROLLSPEEDMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_scrollSpeedMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SCROLLSPEEDMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Boolean get_remapEnabled_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPENABLED_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_remapEnabled_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPENABLED_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_remap_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAP_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_remap_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAP_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_remapMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_remapMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_remapX_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPX_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_remapX_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPX_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_remapXMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPXMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_remapXMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPXMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_remapY_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPY_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_remapY_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPY_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_remapYMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPYMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_remapYMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPYMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_remapZ_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPZ_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_remapZ_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPZ_INJECTED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Single get_remapZMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPZMULTIPLIER_INJECTED_OFFSET))(a1);
		}

		static ::System::Void set_remapZMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPZMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}

		/*
		static ::System::Void get_positionAmount_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_POSITIONAMOUNT_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_positionAmount_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_POSITIONAMOUNT_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_rotationAmount_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_ROTATIONAMOUNT_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_rotationAmount_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_ROTATIONAMOUNT_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_sizeAmount_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SIZEAMOUNT_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_sizeAmount_Injected(::UnityEngine::ParticleSystem_NoiseModule& a1, ::UnityEngine::ParticleSystem_MinMaxCurve& a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SIZEAMOUNT_INJECTED_OFFSET))(a1, a2);
		}
		*/
	};
}
