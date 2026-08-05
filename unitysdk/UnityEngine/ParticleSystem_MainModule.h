#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemCullingMode.h"
#include "unitysdk/UnityEngine/ParticleSystemScalingMode.h"
#include "unitysdk/UnityEngine/ParticleSystemSimulationSpace.h"
#include "unitysdk/UnityEngine/ParticleSystemStopAction.h"

namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_CULLINGMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123720)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_CULLINGMODE_OFFSET UNITYSDK_OFFSET(0xA904E0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_CUSTOMSIMULATIONSPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123640)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_CUSTOMSIMULATIONSPACE_OFFSET UNITYSDK_OFFSET(0xA90430)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_DURATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F122FE0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xA8FE20)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_GRAVITYMODIFIERMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F1235F0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_GRAVITYMODIFIERMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA903F0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_LOOP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123010)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_LOOP_OFFSET UNITYSDK_OFFSET(0xA8FE40)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_MAXPARTICLES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F1236D0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_MAXPARTICLES_OFFSET UNITYSDK_OFFSET(0xA904B0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_PLAYONAWAKE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F1236B0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0xA90490)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_PREWARM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123040)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_PREWARM_OFFSET UNITYSDK_OFFSET(0xA8FE60)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SCALINGMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123690)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SCALINGMODE_OFFSET UNITYSDK_OFFSET(0xA90470)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SIMULATIONSPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123610)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SIMULATIONSPACE_OFFSET UNITYSDK_OFFSET(0xA90410)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SIMULATIONSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123650)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_SIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0xA90440)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F1235D0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0xA90350)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTDELAYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123100)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTDELAYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA8FF00)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTDELAY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F1230D0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTDELAY_OFFSET UNITYSDK_OFFSET(0xA8FE90)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTLIFETIMEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123190)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTLIFETIMEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA8FF90)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTLIFETIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123160)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTLIFETIME_OFFSET UNITYSDK_OFFSET(0xA8FF20)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123460)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA90210)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F1234D0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA90270)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F1234C0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONX_OFFSET UNITYSDK_OFFSET(0xA90230)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123540)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA902D0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123530)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONY_OFFSET UNITYSDK_OFFSET(0xA90290)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F1235B0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA90330)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F1235A0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTROTATIONZ_OFFSET UNITYSDK_OFFSET(0xA902F0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZE3D_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123200)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZE3D_OFFSET UNITYSDK_OFFSET(0xA90000)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F1232A0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA90090)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123340)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA90120)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123300)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEX_OFFSET UNITYSDK_OFFSET(0xA900B0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F1233F0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA901B0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F1233B0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEY_OFFSET UNITYSDK_OFFSET(0xA90140)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123430)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZEZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA901D0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123270)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSIZE_OFFSET UNITYSDK_OFFSET(0xA90020)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSPEEDMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F1231D0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_STARTSPEEDMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA8FFE0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_TICKFREQUENCY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123060)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_TICKFREQUENCY_OFFSET UNITYSDK_OFFSET(0xA8FE70)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_USEUNSCALEDTIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123680)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_GET_USEUNSCALEDTIME_OFFSET UNITYSDK_OFFSET(0xA90460)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_CULLINGMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123740)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_CULLINGMODE_OFFSET UNITYSDK_OFFSET(0xA904F0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_DURATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123000)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_DURATION_OFFSET UNITYSDK_OFFSET(0xA8FE30)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_GRAVITYMODIFIERMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123600)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_GRAVITYMODIFIERMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA90400)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_LOOP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123020)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_LOOP_OFFSET UNITYSDK_OFFSET(0xA8FE50)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_MAXPARTICLES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F1236E0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_MAXPARTICLES_OFFSET UNITYSDK_OFFSET(0xA904C0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_PLAYONAWAKE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F1236C0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0xA904A0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SCALINGMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F1236A0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SCALINGMODE_OFFSET UNITYSDK_OFFSET(0xA90480)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SIMULATIONSPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123620)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SIMULATIONSPACE_OFFSET UNITYSDK_OFFSET(0xA90420)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SIMULATIONSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123660)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_SIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0xA90450)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F1235E0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0xA903B0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTDELAYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123110)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTDELAYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA8FF10)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTDELAY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F1230F0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTDELAY_OFFSET UNITYSDK_OFFSET(0xA8FED0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTLIFETIMEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F1231A0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTLIFETIMEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA8FFA0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTLIFETIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123180)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTLIFETIME_OFFSET UNITYSDK_OFFSET(0xA8FF60)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123470)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA90220)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F1234E0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA90280)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123550)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA902E0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F1235C0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATIONZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA90340)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123450)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTROTATION_OFFSET UNITYSDK_OFFSET(0xA901E0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZE3D_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123220)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZE3D_OFFSET UNITYSDK_OFFSET(0xA90010)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F1232B0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA900A0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123360)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA90130)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123320)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEX_OFFSET UNITYSDK_OFFSET(0xA900F0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123410)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA901C0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F1233D0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZEY_OFFSET UNITYSDK_OFFSET(0xA90180)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123290)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSIZE_OFFSET UNITYSDK_OFFSET(0xA90060)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSPEEDMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F1231E0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSPEEDMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA8FFF0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F1231C0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STARTSPEED_OFFSET UNITYSDK_OFFSET(0xA8FFB0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STOPACTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123700)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_STOPACTION_OFFSET UNITYSDK_OFFSET(0xA904D0)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_TICKFREQUENCY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F123080)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE_SET_TICKFREQUENCY_OFFSET UNITYSDK_OFFSET(0xA8FE80)
#define UNITYENGINE_PARTICLESYSTEM_MAINMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x324D50)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_MainModule_TypeDefinitionIndex = 7701;

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
