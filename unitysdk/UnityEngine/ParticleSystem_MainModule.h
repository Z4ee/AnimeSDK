#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemCullingMode.h"
#include "unitysdk/UnityEngine/ParticleSystemScalingMode.h"
#include "unitysdk/UnityEngine/ParticleSystemSimulationSpace.h"
#include "unitysdk/UnityEngine/ParticleSystemStopAction.h"

namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_CULLINGMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFB020)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_CULLINGMODE_OFFSET UNITYSDK_OFFSET(0xA449B0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_CUSTOMSIMULATIONSPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAF40)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_CUSTOMSIMULATIONSPACE_OFFSET UNITYSDK_OFFSET(0xA44900)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_DURATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFA8E0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xA442F0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_GRAVITYMODIFIERMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAEF0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_GRAVITYMODIFIERMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA448C0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_LOOP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFA910)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_LOOP_OFFSET UNITYSDK_OFFSET(0xA44310)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_MAXPARTICLES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAFD0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_MAXPARTICLES_OFFSET UNITYSDK_OFFSET(0xA44980)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_PLAYONAWAKE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAFB0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0xA44960)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_PREWARM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFA940)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_PREWARM_OFFSET UNITYSDK_OFFSET(0xA44330)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SCALINGMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAF90)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SCALINGMODE_OFFSET UNITYSDK_OFFSET(0xA44940)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SIMULATIONSPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAF10)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SIMULATIONSPACE_OFFSET UNITYSDK_OFFSET(0xA448E0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SIMULATIONSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAF50)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0xA44910)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAED0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0xA44820)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTDELAYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAA00)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTDELAYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA443D0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTDELAY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFA9D0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTDELAY_OFFSET UNITYSDK_OFFSET(0xA44360)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTLIFETIMEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAA90)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTLIFETIMEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA44460)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTLIFETIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAA60)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTLIFETIME_OFFSET UNITYSDK_OFFSET(0xA443F0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAD60)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA446E0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFADD0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA44740)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFADC0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONX_OFFSET UNITYSDK_OFFSET(0xA44700)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAE40)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA447A0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAE30)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONY_OFFSET UNITYSDK_OFFSET(0xA44760)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAEB0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA44800)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAEA0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONZ_OFFSET UNITYSDK_OFFSET(0xA447C0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZE3D_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAB00)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZE3D_OFFSET UNITYSDK_OFFSET(0xA444D0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFABA0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA44560)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAC40)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA445F0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAC00)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEX_OFFSET UNITYSDK_OFFSET(0xA44580)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFACF0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA44680)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFACB0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEY_OFFSET UNITYSDK_OFFSET(0xA44610)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAD30)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA446A0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAB70)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZE_OFFSET UNITYSDK_OFFSET(0xA444F0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSPEEDMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAAD0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSPEEDMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA444B0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_TICKFREQUENCY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFA960)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_TICKFREQUENCY_OFFSET UNITYSDK_OFFSET(0xA44340)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_USEUNSCALEDTIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAF80)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_USEUNSCALEDTIME_OFFSET UNITYSDK_OFFSET(0xA44930)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_CULLINGMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFB040)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_CULLINGMODE_OFFSET UNITYSDK_OFFSET(0xA449C0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_DURATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFA900)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_DURATION_OFFSET UNITYSDK_OFFSET(0xA44300)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_GRAVITYMODIFIERMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAF00)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_GRAVITYMODIFIERMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA448D0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_LOOP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFA920)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_LOOP_OFFSET UNITYSDK_OFFSET(0xA44320)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_MAXPARTICLES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAFE0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_MAXPARTICLES_OFFSET UNITYSDK_OFFSET(0xA44990)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_PLAYONAWAKE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAFC0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0xA44970)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SCALINGMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAFA0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SCALINGMODE_OFFSET UNITYSDK_OFFSET(0xA44950)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SIMULATIONSPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAF20)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SIMULATIONSPACE_OFFSET UNITYSDK_OFFSET(0xA448F0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SIMULATIONSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAF60)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0xA44920)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAEE0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0xA44880)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTDELAYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAA10)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTDELAYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA443E0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTDELAY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFA9F0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTDELAY_OFFSET UNITYSDK_OFFSET(0xA443A0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTLIFETIMEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAAA0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTLIFETIMEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA44470)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTLIFETIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAA80)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTLIFETIME_OFFSET UNITYSDK_OFFSET(0xA44430)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAD70)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA446F0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFADE0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA44750)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAE50)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA447B0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAEC0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA44810)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAD50)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATION_OFFSET UNITYSDK_OFFSET(0xA446B0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZE3D_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAB20)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZE3D_OFFSET UNITYSDK_OFFSET(0xA444E0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFABB0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA44570)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAC60)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA44600)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAC20)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEX_OFFSET UNITYSDK_OFFSET(0xA445C0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAD10)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA44690)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFACD0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEY_OFFSET UNITYSDK_OFFSET(0xA44650)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAB90)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZE_OFFSET UNITYSDK_OFFSET(0xA44530)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSPEEDMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAAE0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSPEEDMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA444C0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFAAC0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSPEED_OFFSET UNITYSDK_OFFSET(0xA44480)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STOPACTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFB000)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STOPACTION_OFFSET UNITYSDK_OFFSET(0xA449A0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_TICKFREQUENCY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DDFA980)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_TICKFREQUENCY_OFFSET UNITYSDK_OFFSET(0xA44350)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x2B6D10)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_MainModule_TypeDefinitionIndex = 18760;

	struct alignas(8) ParticleSystem_MainModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* particleSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE__CTOR_OFFSET))(this, particleSystem);
		}

		::System::Single get_duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_DURATION_OFFSET))(this);
		}

		::System::Void set_duration(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_DURATION_OFFSET))(this, value);
		}

		::System::Boolean get_loop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_LOOP_OFFSET))(this);
		}

		::System::Void set_loop(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_LOOP_OFFSET))(this, value);
		}

		::System::Boolean get_prewarm()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_PREWARM_OFFSET))(this);
		}

		::System::Single get_tickFrequency()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_TICKFREQUENCY_OFFSET))(this);
		}

		::System::Void set_tickFrequency(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_TICKFREQUENCY_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_startDelay()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTDELAY_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_startDelay(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTDELAY_OFFSET))(this, value);
		}
		*/

		::System::Single get_startDelayMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTDELAYMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_startDelayMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTDELAYMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_startLifetime()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTLIFETIME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_startLifetime(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTLIFETIME_OFFSET))(this, value);
		}
		*/

		::System::Single get_startLifetimeMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTLIFETIMEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_startLifetimeMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTLIFETIMEMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::System::Void set_startSpeed(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSPEED_OFFSET))(this, value);
		}
		*/

		::System::Single get_startSpeedMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSPEEDMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_startSpeedMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSPEEDMULTIPLIER_OFFSET))(this, value);
		}

		::System::Boolean get_startSize3D()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZE3D_OFFSET))(this);
		}

		::System::Void set_startSize3D(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZE3D_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_startSize()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_startSize(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZE_OFFSET))(this, value);
		}
		*/

		::System::Single get_startSizeMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_startSizeMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_startSizeX()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEX_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_startSizeX(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEX_OFFSET))(this, value);
		}
		*/

		::System::Single get_startSizeXMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEXMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_startSizeXMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEXMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_startSizeY()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEY_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_startSizeY(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEY_OFFSET))(this, value);
		}
		*/

		::System::Single get_startSizeYMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEYMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_startSizeYMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEYMULTIPLIER_OFFSET))(this, value);
		}

		::System::Single get_startSizeZMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEZMULTIPLIER_OFFSET))(this);
		}

		/*
		::System::Void set_startRotation(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATION_OFFSET))(this, value);
		}
		*/

		::System::Single get_startRotationMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_startRotationMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_startRotationX()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONX_OFFSET))(this);
		}
		*/

		::System::Single get_startRotationXMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONXMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_startRotationXMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONXMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_startRotationY()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONY_OFFSET))(this);
		}
		*/

		::System::Single get_startRotationYMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONYMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_startRotationYMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONYMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_startRotationZ()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONZ_OFFSET))(this);
		}
		*/

		::System::Single get_startRotationZMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONZMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_startRotationZMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONZMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxGradient get_startColor()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxGradient(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTCOLOR_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_startColor(::UnityEngine::ParticleSystem_MinMaxGradient value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxGradient))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTCOLOR_OFFSET))(this, value);
		}
		*/

		::System::Single get_gravityModifierMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_GRAVITYMODIFIERMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_gravityModifierMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_GRAVITYMODIFIERMULTIPLIER_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystemSimulationSpace get_simulationSpace()
		{
			return ((::UnityEngine::ParticleSystemSimulationSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SIMULATIONSPACE_OFFSET))(this);
		}

		::System::Void set_simulationSpace(::UnityEngine::ParticleSystemSimulationSpace value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemSimulationSpace))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SIMULATIONSPACE_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_customSimulationSpace()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_CUSTOMSIMULATIONSPACE_OFFSET))(this);
		}

		::System::Single get_simulationSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SIMULATIONSPEED_OFFSET))(this);
		}

		::System::Void set_simulationSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SIMULATIONSPEED_OFFSET))(this, value);
		}

		::System::Boolean get_useUnscaledTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_USEUNSCALEDTIME_OFFSET))(this);
		}

		::UnityEngine::ParticleSystemScalingMode get_scalingMode()
		{
			return ((::UnityEngine::ParticleSystemScalingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SCALINGMODE_OFFSET))(this);
		}

		::System::Void set_scalingMode(::UnityEngine::ParticleSystemScalingMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemScalingMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SCALINGMODE_OFFSET))(this, value);
		}

		::System::Boolean get_playOnAwake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_PLAYONAWAKE_OFFSET))(this);
		}

		::System::Void set_playOnAwake(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_PLAYONAWAKE_OFFSET))(this, value);
		}

		::System::Int32 get_maxParticles()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_MAXPARTICLES_OFFSET))(this);
		}

		::System::Void set_maxParticles(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_MAXPARTICLES_OFFSET))(this, value);
		}

		::System::Void set_stopAction(::UnityEngine::ParticleSystemStopAction value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemStopAction))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STOPACTION_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystemCullingMode get_cullingMode()
		{
			return ((::UnityEngine::ParticleSystemCullingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_CULLINGMODE_OFFSET))(this);
		}

		::System::Void set_cullingMode(::UnityEngine::ParticleSystemCullingMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemCullingMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_CULLINGMODE_OFFSET))(this, value);
		}

		static ::System::Single get_duration_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_DURATION_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_duration_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_DURATION_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_loop_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_LOOP_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_loop_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_LOOP_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_prewarm_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_PREWARM_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Single get_tickFrequency_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_TICKFREQUENCY_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_tickFrequency_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_TICKFREQUENCY_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_startDelay_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTDELAY_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_startDelay_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTDELAY_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_startDelayMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTDELAYMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_startDelayMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTDELAYMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_startLifetime_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTLIFETIME_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_startLifetime_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTLIFETIME_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_startLifetimeMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTLIFETIMEMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_startLifetimeMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTLIFETIMEMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void set_startSpeed_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSPEED_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_startSpeedMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSPEEDMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_startSpeedMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSPEEDMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_startSize3D_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZE3D_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_startSize3D_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZE3D_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_startSize_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZE_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_startSize_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZE_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_startSizeMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_startSizeMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_startSizeX_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEX_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_startSizeX_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEX_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_startSizeXMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEXMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_startSizeXMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEXMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_startSizeY_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEY_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_startSizeY_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEY_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_startSizeYMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEYMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_startSizeYMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEYMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_startSizeZMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEZMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		/*
		static ::System::Void set_startRotation_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATION_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_startRotationMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_startRotationMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_startRotationX_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONX_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		static ::System::Single get_startRotationXMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONXMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_startRotationXMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONXMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_startRotationY_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONY_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		static ::System::Single get_startRotationYMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONYMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_startRotationYMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONYMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_startRotationZ_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONZ_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		static ::System::Single get_startRotationZMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONZMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_startRotationZMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONZMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_startColor_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxGradient& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystem_MinMaxGradient&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTCOLOR_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_startColor_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxGradient& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystem_MinMaxGradient&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTCOLOR_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_gravityModifierMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_GRAVITYMODIFIERMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_gravityModifierMultiplier_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_GRAVITYMODIFIERMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::UnityEngine::ParticleSystemSimulationSpace get_simulationSpace_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::UnityEngine::ParticleSystemSimulationSpace(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SIMULATIONSPACE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_simulationSpace_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystemSimulationSpace value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystemSimulationSpace))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SIMULATIONSPACE_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::UnityEngine::Transform* get_customSimulationSpace_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_CUSTOMSIMULATIONSPACE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Single get_simulationSpeed_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SIMULATIONSPEED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_simulationSpeed_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SIMULATIONSPEED_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_useUnscaledTime_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_USEUNSCALEDTIME_INJECTED_OFFSET))(_unity_self);
		}

		static ::UnityEngine::ParticleSystemScalingMode get_scalingMode_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::UnityEngine::ParticleSystemScalingMode(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SCALINGMODE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_scalingMode_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystemScalingMode value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystemScalingMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SCALINGMODE_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_playOnAwake_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_PLAYONAWAKE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_playOnAwake_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_PLAYONAWAKE_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Int32 get_maxParticles_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_MAXPARTICLES_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_maxParticles_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::System::Int32 value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_MAXPARTICLES_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Void set_stopAction_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystemStopAction value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystemStopAction))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STOPACTION_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::UnityEngine::ParticleSystemCullingMode get_cullingMode_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self)
		{
			return ((::UnityEngine::ParticleSystemCullingMode(*)(::UnityEngine::ParticleSystem_MainModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_CULLINGMODE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_cullingMode_Injected(::UnityEngine::ParticleSystem_MainModule& _unity_self, ::UnityEngine::ParticleSystemCullingMode value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_MainModule&, ::UnityEngine::ParticleSystemCullingMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_CULLINGMODE_INJECTED_OFFSET))(_unity_self, value);
		}
	};
}
