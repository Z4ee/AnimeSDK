#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/Unity/Jobs/LowLevel/Unsafe/JobsUtility_JobScheduleParameters.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Component.h"
#include "unitysdk/UnityEngine/ParticleSystemCustomData.h"
#include "unitysdk/UnityEngine/ParticleSystemJobs/NativeParticleData.h"
#include "unitysdk/UnityEngine/ParticleSystemScalingMode.h"
#include "unitysdk/UnityEngine/ParticleSystemSimulationSpace.h"
#include "unitysdk/UnityEngine/ParticleSystemStopBehavior.h"
#include "unitysdk/UnityEngine/ParticleSystem_CollisionModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_ColorBySpeedModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_ColorOverLifetimeModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_CustomDataModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_EmissionModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_EmitParams.h"
#include "unitysdk/UnityEngine/ParticleSystem_ExternalForcesModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_ForceOverLifetimeModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_InheritVelocityModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_LightsModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_LimitVelocityOverLifetimeModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_MainModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_NoiseModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_Particle.h"
#include "unitysdk/UnityEngine/ParticleSystem_PlaybackState.h"
#include "unitysdk/UnityEngine/ParticleSystem_RotationBySpeedModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_RotationOverLifetimeModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_ShapeModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_SizeBySpeedModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_SizeOverLifetimeModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_SubEmittersModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_TextureSheetAnimationModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_TrailModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_Trails.h"
#include "unitysdk/UnityEngine/ParticleSystem_TriggerModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_VelocityOverLifetimeModule.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class ParticleSystemRenderer; }
namespace UnityEngine { class ParticleSystem_OnNewParticleEmissionEvent; }
namespace UnityEngine { class ParticleSystem_OnParticleEmissionBeginEvent; }

#define UNITYENGINE_PARTICLESYSTEM_CLEAR_1_OFFSET UNITYSDK_OFFSET(0x1D12CB80)
#define UNITYENGINE_PARTICLESYSTEM_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D12CB70)
#define UNITYENGINE_PARTICLESYSTEM_COPYMANAGEDJOBDATA_OFFSET UNITYSDK_OFFSET(0x1D12CF60)
#define UNITYENGINE_PARTICLESYSTEM_DONEWPARTICLEEMISSIONEVENT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D12CC30)
#define UNITYENGINE_PARTICLESYSTEM_DOPARTICLEEMISSIONBEGINEVENT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D12CBF0)
#define UNITYENGINE_PARTICLESYSTEM_DRAW_OFFSET UNITYSDK_OFFSET(0x1D12CF80)
#define UNITYENGINE_PARTICLESYSTEM_EMITOLD_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D12BB70)
#define UNITYENGINE_PARTICLESYSTEM_EMIT_1_OFFSET UNITYSDK_OFFSET(0x1D12BB80)
#define UNITYENGINE_PARTICLESYSTEM_EMIT_2_OFFSET UNITYSDK_OFFSET(0x1D12CBB0)
#define UNITYENGINE_PARTICLESYSTEM_EMIT_3_OFFSET UNITYSDK_OFFSET(0x1D12CBD0)
#define UNITYENGINE_PARTICLESYSTEM_EMIT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D12CBE0)
#define UNITYENGINE_PARTICLESYSTEM_EMIT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D12CBC0)
#define UNITYENGINE_PARTICLESYSTEM_EMIT_OFFSET UNITYSDK_OFFSET(0x1D12BA10)
#define UNITYENGINE_PARTICLESYSTEM_FILLINSTIDTOVERTEXCOUNTMAPTONATIVEARRAY_OFFSET UNITYSDK_OFFSET(0x1D12CE80)
#define UNITYENGINE_PARTICLESYSTEM_FORCEUPDATEPARTICLESYSTEMLIGHTSMODULE_OFFSET UNITYSDK_OFFSET(0x1D12CD90)
#define UNITYENGINE_PARTICLESYSTEM_GETCOMPONENTMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1D12C810)
#define UNITYENGINE_PARTICLESYSTEM_GETCURRENTPREMAPPEDBUFFERCOUNT_OFFSET UNITYSDK_OFFSET(0x1D12CD40)
#define UNITYENGINE_PARTICLESYSTEM_GETCURRENTPREMAPPEDBUFFEROCCUPANCY_OFFSET UNITYSDK_OFFSET(0x1D12CD70)
#define UNITYENGINE_PARTICLESYSTEM_GETCURRENTPREMAPPEDBUFFERREQUIREDSIZE_OFFSET UNITYSDK_OFFSET(0x1D12CD60)
#define UNITYENGINE_PARTICLESYSTEM_GETCURRENTPREMAPPEDBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1D12CD50)
#define UNITYENGINE_PARTICLESYSTEM_GETCURVEDATAMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1D12C830)
#define UNITYENGINE_PARTICLESYSTEM_GETCUSTOMPARTICLEDATA_OFFSET UNITYSDK_OFFSET(0x1D12C760)
#define UNITYENGINE_PARTICLESYSTEM_GETINSTANCEDPARTICLEVERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1D12CDB0)
#define UNITYENGINE_PARTICLESYSTEM_GETINSTIDTOVERTEXCOUNTMAPSIZE_OFFSET UNITYSDK_OFFSET(0x1D12CE70)
#define UNITYENGINE_PARTICLESYSTEM_GETINSTIDTOVERTEXCOUNTMAPWITHNATIVEARRAY_OFFSET UNITYSDK_OFFSET(0x1D12CDC0)
#define UNITYENGINE_PARTICLESYSTEM_GETMANAGEDJOBDATA_OFFSET UNITYSDK_OFFSET(0x1D12CE90)
#define UNITYENGINE_PARTICLESYSTEM_GETMANAGEDJOBHANDLE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D12CEE0)
#define UNITYENGINE_PARTICLESYSTEM_GETMANAGEDJOBHANDLE_OFFSET UNITYSDK_OFFSET(0x1D12CEA0)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLECAPACITY_OFFSET UNITYSDK_OFFSET(0x1D12C850)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLECURRENTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D12C570)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLECURRENTCOLOR_OFFSET UNITYSDK_OFFSET(0x1D12C550)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLECURRENTSIZE3D_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D12C540)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLECURRENTSIZE3D_OFFSET UNITYSDK_OFFSET(0x1D12C4F0)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLECURRENTSIZE_OFFSET UNITYSDK_OFFSET(0x1D12C4E0)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLEINITCOUNT_OFFSET UNITYSDK_OFFSET(0x1D12C870)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLEMESHINDEX_OFFSET UNITYSDK_OFFSET(0x1D12C580)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLEREALCOUNT_OFFSET UNITYSDK_OFFSET(0x1D12C860)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLESWITHNATIVEARRAY_OFFSET UNITYSDK_OFFSET(0x1D12C6B0)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_1_OFFSET UNITYSDK_OFFSET(0x1D12C680)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_2_OFFSET UNITYSDK_OFFSET(0x1D12C690)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_3_OFFSET UNITYSDK_OFFSET(0x1D12C6C0)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_4_OFFSET UNITYSDK_OFFSET(0x1D12C6F0)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_5_OFFSET UNITYSDK_OFFSET(0x1D12C720)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_OFFSET UNITYSDK_OFFSET(0x1D12C670)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLEUNITMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1D12C840)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLEVERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1D12CDA0)
#define UNITYENGINE_PARTICLESYSTEM_GETPLAYBACKSTATE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D12C7E0)
#define UNITYENGINE_PARTICLESYSTEM_GETPLAYBACKSTATE_OFFSET UNITYSDK_OFFSET(0x1D12C790)
#define UNITYENGINE_PARTICLESYSTEM_GETPREMAPPEDBUFFERDEFAULTCOUNT_OFFSET UNITYSDK_OFFSET(0x1D12CD20)
#define UNITYENGINE_PARTICLESYSTEM_GETSTRUCTMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1D12C820)
#define UNITYENGINE_PARTICLESYSTEM_GETTRAILDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D12C880)
#define UNITYENGINE_PARTICLESYSTEM_GETTRAILS_OFFSET UNITYSDK_OFFSET(0x1D12C890)
#define UNITYENGINE_PARTICLESYSTEM_GET_AUTOMATICCULLINGENABLED_OFFSET UNITYSDK_OFFSET(0x1D12C410)
#define UNITYENGINE_PARTICLESYSTEM_GET_COLLISION_OFFSET UNITYSDK_OFFSET(0x1D12D0F0)
#define UNITYENGINE_PARTICLESYSTEM_GET_COLORBYSPEED_OFFSET UNITYSDK_OFFSET(0x1D12D050)
#define UNITYENGINE_PARTICLESYSTEM_GET_COLOROVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x1D12D030)
#define UNITYENGINE_PARTICLESYSTEM_GET_CUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x1D12D170)
#define UNITYENGINE_PARTICLESYSTEM_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1D12BCC0)
#define UNITYENGINE_PARTICLESYSTEM_GET_EMISSIONRATE_OFFSET UNITYSDK_OFFSET(0x1D12BDC0)
#define UNITYENGINE_PARTICLESYSTEM_GET_EMISSION_OFFSET UNITYSDK_OFFSET(0x1D12BD70)
#define UNITYENGINE_PARTICLESYSTEM_GET_ENABLEEMISSION_OFFSET UNITYSDK_OFFSET(0x1D12BD50)
#define UNITYENGINE_PARTICLESYSTEM_GET_EXTERNALFORCES_OFFSET UNITYSDK_OFFSET(0x1D12D0B0)
#define UNITYENGINE_PARTICLESYSTEM_GET_FORCEOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x1D12D010)
#define UNITYENGINE_PARTICLESYSTEM_GET_GRAVITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x1D12C290)
#define UNITYENGINE_PARTICLESYSTEM_GET_INHERITVELOCITY_OFFSET UNITYSDK_OFFSET(0x1D12CFF0)
#define UNITYENGINE_PARTICLESYSTEM_GET_ISEMITTING_OFFSET UNITYSDK_OFFSET(0x1D12C440)
#define UNITYENGINE_PARTICLESYSTEM_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x1D12C460)
#define UNITYENGINE_PARTICLESYSTEM_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1D12C430)
#define UNITYENGINE_PARTICLESYSTEM_GET_ISSTOPPED_OFFSET UNITYSDK_OFFSET(0x1D12C450)
#define UNITYENGINE_PARTICLESYSTEM_GET_LIGHTS_OFFSET UNITYSDK_OFFSET(0x1D12D140)
#define UNITYENGINE_PARTICLESYSTEM_GET_LIMITVELOCITYOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x1D12CFD0)
#define UNITYENGINE_PARTICLESYSTEM_GET_LOOP_OFFSET UNITYSDK_OFFSET(0x1D12BC00)
#define UNITYENGINE_PARTICLESYSTEM_GET_MAIN_OFFSET UNITYSDK_OFFSET(0x1D12BBB0)
#define UNITYENGINE_PARTICLESYSTEM_GET_MAXPARTICLES_OFFSET UNITYSDK_OFFSET(0x1D12C2F0)
#define UNITYENGINE_PARTICLESYSTEM_GET_NOISE_OFFSET UNITYSDK_OFFSET(0x1D12D0D0)
#define UNITYENGINE_PARTICLESYSTEM_GET_PARTICLECOUNT_OFFSET UNITYSDK_OFFSET(0x1D12C470)
#define UNITYENGINE_PARTICLESYSTEM_GET_PLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0x1D12BCF0)
#define UNITYENGINE_PARTICLESYSTEM_GET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x1D12BC60)
#define UNITYENGINE_PARTICLESYSTEM_GET_PROCEDURALSIMULATIONSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1D12C420)
#define UNITYENGINE_PARTICLESYSTEM_GET_RANDOMSEED_OFFSET UNITYSDK_OFFSET(0x1D12C4A0)
#define UNITYENGINE_PARTICLESYSTEM_GET_ROTATIONBYSPEED_OFFSET UNITYSDK_OFFSET(0x1D12D0A0)
#define UNITYENGINE_PARTICLESYSTEM_GET_ROTATIONOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x1D12D090)
#define UNITYENGINE_PARTICLESYSTEM_GET_SCALINGMODE_OFFSET UNITYSDK_OFFSET(0x1D12C3B0)
#define UNITYENGINE_PARTICLESYSTEM_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1D12CFB0)
#define UNITYENGINE_PARTICLESYSTEM_GET_SIMULATIONSPACE_OFFSET UNITYSDK_OFFSET(0x1D12C350)
#define UNITYENGINE_PARTICLESYSTEM_GET_SIZEBYSPEED_OFFSET UNITYSDK_OFFSET(0x1D12D080)
#define UNITYENGINE_PARTICLESYSTEM_GET_SIZEOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x1D12D070)
#define UNITYENGINE_PARTICLESYSTEM_GET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x1D12BF20)
#define UNITYENGINE_PARTICLESYSTEM_GET_STARTDELAY_OFFSET UNITYSDK_OFFSET(0x1D12BB90)
#define UNITYENGINE_PARTICLESYSTEM_GET_STARTLIFETIME_OFFSET UNITYSDK_OFFSET(0x1D12C230)
#define UNITYENGINE_PARTICLESYSTEM_GET_STARTROTATION3D_OFFSET UNITYSDK_OFFSET(0x1D12C110)
#define UNITYENGINE_PARTICLESYSTEM_GET_STARTROTATION_OFFSET UNITYSDK_OFFSET(0x1D12C0B0)
#define UNITYENGINE_PARTICLESYSTEM_GET_STARTSIZE_OFFSET UNITYSDK_OFFSET(0x1D12BEC0)
#define UNITYENGINE_PARTICLESYSTEM_GET_STARTSPEED_OFFSET UNITYSDK_OFFSET(0x1D12BE60)
#define UNITYENGINE_PARTICLESYSTEM_GET_SUBEMITTERS_OFFSET UNITYSDK_OFFSET(0x1D12D120)
#define UNITYENGINE_PARTICLESYSTEM_GET_TEXTURESHEETANIMATION_OFFSET UNITYSDK_OFFSET(0x1D12D130)
#define UNITYENGINE_PARTICLESYSTEM_GET_TIME_OFFSET UNITYSDK_OFFSET(0x1D12C480)
#define UNITYENGINE_PARTICLESYSTEM_GET_TRAILS_OFFSET UNITYSDK_OFFSET(0x1D12D160)
#define UNITYENGINE_PARTICLESYSTEM_GET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1D12D110)
#define UNITYENGINE_PARTICLESYSTEM_GET_USEAUTORANDOMSEED_OFFSET UNITYSDK_OFFSET(0x1D12C4C0)
#define UNITYENGINE_PARTICLESYSTEM_GET_VELOCITYOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x1D12CFC0)
#define UNITYENGINE_PARTICLESYSTEM_INSTANCEIDTOPARTICLESYSTEM_OFFSET UNITYSDK_OFFSET(0x1D12CD80)
#define UNITYENGINE_PARTICLESYSTEM_INTERNAL_DRAW_OFFSET UNITYSDK_OFFSET(0x1D12CF70)
#define UNITYENGINE_PARTICLESYSTEM_ISALIVE_1_OFFSET UNITYSDK_OFFSET(0x1D12CBA0)
#define UNITYENGINE_PARTICLESYSTEM_ISALIVE_OFFSET UNITYSDK_OFFSET(0x1D12CB90)
#define UNITYENGINE_PARTICLESYSTEM_MOVEPARTICLESYSTEM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D12C780)
#define UNITYENGINE_PARTICLESYSTEM_MOVEPARTICLESYSTEM_OFFSET UNITYSDK_OFFSET(0x1D12C770)
#define UNITYENGINE_PARTICLESYSTEM_MOVETRAILS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D12CA70)
#define UNITYENGINE_PARTICLESYSTEM_MOVETRAILS_OFFSET UNITYSDK_OFFSET(0x1D12CA60)
#define UNITYENGINE_PARTICLESYSTEM_PAUSE_1_OFFSET UNITYSDK_OFFSET(0x1D12CB20)
#define UNITYENGINE_PARTICLESYSTEM_PAUSE_OFFSET UNITYSDK_OFFSET(0x1D12CB10)
#define UNITYENGINE_PARTICLESYSTEM_PLAY_1_OFFSET UNITYSDK_OFFSET(0x1D12CB00)
#define UNITYENGINE_PARTICLESYSTEM_PLAY_OFFSET UNITYSDK_OFFSET(0x1D12CAF0)
#define UNITYENGINE_PARTICLESYSTEM_RESETPREMAPPEDBUFFERMEMORY_OFFSET UNITYSDK_OFFSET(0x1D12CD00)
#define UNITYENGINE_PARTICLESYSTEM_SCHEDULEMANAGEDJOB_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D12CF50)
#define UNITYENGINE_PARTICLESYSTEM_SCHEDULEMANAGEDJOB_OFFSET UNITYSDK_OFFSET(0x1D12CF10)
#define UNITYENGINE_PARTICLESYSTEM_SETCUSTOMPARTICLEDATA_OFFSET UNITYSDK_OFFSET(0x1D12C750)
#define UNITYENGINE_PARTICLESYSTEM_SETMANAGEDJOBHANDLE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D12CF00)
#define UNITYENGINE_PARTICLESYSTEM_SETMANAGEDJOBHANDLE_OFFSET UNITYSDK_OFFSET(0x1D12CEF0)
#define UNITYENGINE_PARTICLESYSTEM_SETMAXIMUMPREMAPPEDBUFFERCOUNTS_OFFSET UNITYSDK_OFFSET(0x1D12CD10)
#define UNITYENGINE_PARTICLESYSTEM_SETPARTICLESWITHNATIVEARRAY_OFFSET UNITYSDK_OFFSET(0x1D12C5D0)
#define UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_1_OFFSET UNITYSDK_OFFSET(0x1D12C5A0)
#define UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_2_OFFSET UNITYSDK_OFFSET(0x1D12C5B0)
#define UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_3_OFFSET UNITYSDK_OFFSET(0x1D12C5E0)
#define UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_4_OFFSET UNITYSDK_OFFSET(0x1D12C610)
#define UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_5_OFFSET UNITYSDK_OFFSET(0x1D12C640)
#define UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_OFFSET UNITYSDK_OFFSET(0x1D12C590)
#define UNITYENGINE_PARTICLESYSTEM_SETPLAYBACKSTATE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D12C800)
#define UNITYENGINE_PARTICLESYSTEM_SETPLAYBACKSTATE_OFFSET UNITYSDK_OFFSET(0x1D12C7F0)
#define UNITYENGINE_PARTICLESYSTEM_SETPREMAPPEDBUFFERDEFAULTCOUNT_OFFSET UNITYSDK_OFFSET(0x1D12CD30)
#define UNITYENGINE_PARTICLESYSTEM_SETTRAILS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D12CA50)
#define UNITYENGINE_PARTICLESYSTEM_SETTRAILS_OFFSET UNITYSDK_OFFSET(0x1D12CA40)
#define UNITYENGINE_PARTICLESYSTEM_SET_EMISSIONRATE_OFFSET UNITYSDK_OFFSET(0x1D12BDF0)
#define UNITYENGINE_PARTICLESYSTEM_SET_ENABLEEMISSION_OFFSET UNITYSDK_OFFSET(0x1D12BD90)
#define UNITYENGINE_PARTICLESYSTEM_SET_GRAVITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x1D12C2C0)
#define UNITYENGINE_PARTICLESYSTEM_SET_LOOP_OFFSET UNITYSDK_OFFSET(0x1D12BC30)
#define UNITYENGINE_PARTICLESYSTEM_SET_MAXPARTICLES_OFFSET UNITYSDK_OFFSET(0x1D12C320)
#define UNITYENGINE_PARTICLESYSTEM_SET_PLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0x1D12BD20)
#define UNITYENGINE_PARTICLESYSTEM_SET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x1D12BC90)
#define UNITYENGINE_PARTICLESYSTEM_SET_RANDOMSEED_OFFSET UNITYSDK_OFFSET(0x1D12C4B0)
#define UNITYENGINE_PARTICLESYSTEM_SET_SCALINGMODE_OFFSET UNITYSDK_OFFSET(0x1D12C3E0)
#define UNITYENGINE_PARTICLESYSTEM_SET_SIMULATIONSPACE_OFFSET UNITYSDK_OFFSET(0x1D12C380)
#define UNITYENGINE_PARTICLESYSTEM_SET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x1D12C020)
#define UNITYENGINE_PARTICLESYSTEM_SET_STARTDELAY_OFFSET UNITYSDK_OFFSET(0x1D12BBD0)
#define UNITYENGINE_PARTICLESYSTEM_SET_STARTLIFETIME_OFFSET UNITYSDK_OFFSET(0x1D12C260)
#define UNITYENGINE_PARTICLESYSTEM_SET_STARTROTATION3D_OFFSET UNITYSDK_OFFSET(0x1D12C1B0)
#define UNITYENGINE_PARTICLESYSTEM_SET_STARTROTATION_OFFSET UNITYSDK_OFFSET(0x1D12C0E0)
#define UNITYENGINE_PARTICLESYSTEM_SET_STARTSIZE_OFFSET UNITYSDK_OFFSET(0x1D12BEF0)
#define UNITYENGINE_PARTICLESYSTEM_SET_STARTSPEED_OFFSET UNITYSDK_OFFSET(0x1D12BE90)
#define UNITYENGINE_PARTICLESYSTEM_SET_TIME_OFFSET UNITYSDK_OFFSET(0x1D12C490)
#define UNITYENGINE_PARTICLESYSTEM_SET_USEAUTORANDOMSEED_OFFSET UNITYSDK_OFFSET(0x1D12C4D0)
#define UNITYENGINE_PARTICLESYSTEM_SIMULATE_1_OFFSET UNITYSDK_OFFSET(0x1D12CA90)
#define UNITYENGINE_PARTICLESYSTEM_SIMULATE_2_OFFSET UNITYSDK_OFFSET(0x1D12CAB0)
#define UNITYENGINE_PARTICLESYSTEM_SIMULATE_3_OFFSET UNITYSDK_OFFSET(0x1D12CAD0)
#define UNITYENGINE_PARTICLESYSTEM_SIMULATE_OFFSET UNITYSDK_OFFSET(0x1D12CA80)
#define UNITYENGINE_PARTICLESYSTEM_STOP_1_OFFSET UNITYSDK_OFFSET(0x1D12CB40)
#define UNITYENGINE_PARTICLESYSTEM_STOP_2_OFFSET UNITYSDK_OFFSET(0x1D12CB50)
#define UNITYENGINE_PARTICLESYSTEM_STOP_OFFSET UNITYSDK_OFFSET(0x1D12CB30)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERSUBEMITTERFORPARTICLE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D12CCF0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERSUBEMITTERFORPARTICLE_OFFSET UNITYSDK_OFFSET(0x1D12CCE0)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERSUBEMITTER_1_OFFSET UNITYSDK_OFFSET(0x1D12CC90)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERSUBEMITTER_2_OFFSET UNITYSDK_OFFSET(0x1D12CC80)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERSUBEMITTER_OFFSET UNITYSDK_OFFSET(0x1D12CC70)
#define UNITYENGINE_PARTICLESYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D12D190)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_TypeDefinitionIndex = 5716;

	class ParticleSystem : public ::UnityEngine::Component
	{
	public:
		static ::UnityEngine::ParticleSystem_OnParticleEmissionBeginEvent** StaticGet_psEmissionBeginCb()
		{
			return (::UnityEngine::ParticleSystem_OnParticleEmissionBeginEvent**)Il2CppClass::FromTypeDefinitionIndex(ParticleSystem_TypeDefinitionIndex)->GetStaticField(0x3B650);
		}
		static ::UnityEngine::ParticleSystem_OnNewParticleEmissionEvent** StaticGet_psNewEmissionCb()
		{
			return (::UnityEngine::ParticleSystem_OnNewParticleEmissionEvent**)Il2CppClass::FromTypeDefinitionIndex(ParticleSystem_TypeDefinitionIndex)->GetStaticField(0x3B658);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void Emit(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Color32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMIT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Emit_1(::UnityEngine::ParticleSystem_Particle a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_Particle))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMIT_1_OFFSET))(this, a1);
		}

		::System::Single get_startDelay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_STARTDELAY_OFFSET))(this);
		}

		::System::Void set_startDelay(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_STARTDELAY_OFFSET))(this, a1);
		}

		::System::Boolean get_loop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_LOOP_OFFSET))(this);
		}

		::System::Void set_loop(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_LOOP_OFFSET))(this, a1);
		}

		::System::Boolean get_playOnAwake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_PLAYONAWAKE_OFFSET))(this);
		}

		::System::Void set_playOnAwake(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_PLAYONAWAKE_OFFSET))(this, a1);
		}

		::System::Single get_duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_DURATION_OFFSET))(this);
		}

		::System::Single get_playbackSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_PLAYBACKSPEED_OFFSET))(this);
		}

		::System::Void set_playbackSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_PLAYBACKSPEED_OFFSET))(this, a1);
		}

		::System::Boolean get_enableEmission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_ENABLEEMISSION_OFFSET))(this);
		}

		::System::Void set_enableEmission(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_ENABLEEMISSION_OFFSET))(this, a1);
		}

		::System::Single get_emissionRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_EMISSIONRATE_OFFSET))(this);
		}

		::System::Void set_emissionRate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_EMISSIONRATE_OFFSET))(this, a1);
		}

		::System::Single get_startSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_STARTSPEED_OFFSET))(this);
		}

		::System::Void set_startSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_STARTSPEED_OFFSET))(this, a1);
		}

		::System::Single get_startSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_STARTSIZE_OFFSET))(this);
		}

		::System::Void set_startSize(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_STARTSIZE_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_startColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_STARTCOLOR_OFFSET))(this);
		}

		::System::Void set_startColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_STARTCOLOR_OFFSET))(this, a1);
		}

		::System::Single get_startRotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_STARTROTATION_OFFSET))(this);
		}

		::System::Void set_startRotation(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_STARTROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_startRotation3D()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_STARTROTATION3D_OFFSET))(this);
		}

		::System::Void set_startRotation3D(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_STARTROTATION3D_OFFSET))(this, a1);
		}

		::System::Single get_startLifetime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_STARTLIFETIME_OFFSET))(this);
		}

		::System::Void set_startLifetime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_STARTLIFETIME_OFFSET))(this, a1);
		}

		::System::Single get_gravityModifier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_GRAVITYMODIFIER_OFFSET))(this);
		}

		::System::Void set_gravityModifier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_GRAVITYMODIFIER_OFFSET))(this, a1);
		}

		::System::Int32 get_maxParticles()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_MAXPARTICLES_OFFSET))(this);
		}

		::System::Void set_maxParticles(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_MAXPARTICLES_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystemSimulationSpace get_simulationSpace()
		{
			return ((::UnityEngine::ParticleSystemSimulationSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_SIMULATIONSPACE_OFFSET))(this);
		}

		::System::Void set_simulationSpace(::UnityEngine::ParticleSystemSimulationSpace a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemSimulationSpace))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_SIMULATIONSPACE_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystemScalingMode get_scalingMode()
		{
			return ((::UnityEngine::ParticleSystemScalingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_SCALINGMODE_OFFSET))(this);
		}

		::System::Void set_scalingMode(::UnityEngine::ParticleSystemScalingMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemScalingMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_SCALINGMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_automaticCullingEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_AUTOMATICCULLINGENABLED_OFFSET))(this);
		}

		::System::Boolean get_isPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Boolean get_isEmitting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_ISEMITTING_OFFSET))(this);
		}

		::System::Boolean get_isStopped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_ISSTOPPED_OFFSET))(this);
		}

		::System::Boolean get_isPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_ISPAUSED_OFFSET))(this);
		}

		::System::Int32 get_particleCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_PARTICLECOUNT_OFFSET))(this);
		}

		::System::Single get_time()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_TIME_OFFSET))(this);
		}

		::System::Void set_time(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_TIME_OFFSET))(this, a1);
		}

		::System::UInt32 get_randomSeed()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_RANDOMSEED_OFFSET))(this);
		}

		::System::Void set_randomSeed(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_RANDOMSEED_OFFSET))(this, a1);
		}

		::System::Boolean get_useAutoRandomSeed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_USEAUTORANDOMSEED_OFFSET))(this);
		}

		::System::Void set_useAutoRandomSeed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_USEAUTORANDOMSEED_OFFSET))(this, a1);
		}

		::System::Boolean get_proceduralSimulationSupported()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_PROCEDURALSIMULATIONSUPPORTED_OFFSET))(this);
		}

		::System::Single GetParticleCurrentSize(::UnityEngine::ParticleSystem_Particle& a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::ParticleSystem_Particle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLECURRENTSIZE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetParticleCurrentSize3D(::UnityEngine::ParticleSystem_Particle& a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::ParticleSystem_Particle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLECURRENTSIZE3D_OFFSET))(this, a1);
		}

		::UnityEngine::Color32 GetParticleCurrentColor(::UnityEngine::ParticleSystem_Particle& a1)
		{
			return ((::UnityEngine::Color32(*)(::PVOID, ::UnityEngine::ParticleSystem_Particle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLECURRENTCOLOR_OFFSET))(this, a1);
		}

		::System::Int32 GetParticleMeshIndex(::UnityEngine::ParticleSystem_Particle& a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ParticleSystem_Particle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLEMESHINDEX_OFFSET))(this, a1);
		}

		::System::Void SetParticles(::Il2CppArray<::UnityEngine::ParticleSystem_Particle>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::ParticleSystem_Particle>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetParticles_1(::Il2CppArray<::UnityEngine::ParticleSystem_Particle>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::ParticleSystem_Particle>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetParticles_2(::Il2CppArray<::UnityEngine::ParticleSystem_Particle>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::ParticleSystem_Particle>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_2_OFFSET))(this, a1);
		}

		::System::Void SetParticlesWithNativeArray(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETPARTICLESWITHNATIVEARRAY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetParticles_3(::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle> a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetParticles_4(::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle> a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_4_OFFSET))(this, a1, a2);
		}

		::System::Void SetParticles_5(::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle> a1)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_5_OFFSET))(this, a1);
		}

		::System::Int32 GetParticles(::Il2CppArray<::UnityEngine::ParticleSystem_Particle>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::ParticleSystem_Particle>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetParticles_1(::Il2CppArray<::UnityEngine::ParticleSystem_Particle>* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::ParticleSystem_Particle>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetParticles_2(::Il2CppArray<::UnityEngine::ParticleSystem_Particle>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::ParticleSystem_Particle>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_2_OFFSET))(this, a1);
		}

		::System::Int32 GetParticlesWithNativeArray(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLESWITHNATIVEARRAY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 GetParticles_3(::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle> a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetParticles_4(::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle> a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_4_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetParticles_5(::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_5_OFFSET))(this, a1);
		}

		::System::Void SetCustomParticleData(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a1, ::UnityEngine::ParticleSystemCustomData a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::UnityEngine::ParticleSystemCustomData))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETCUSTOMPARTICLEDATA_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetCustomParticleData(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a1, ::UnityEngine::ParticleSystemCustomData a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::UnityEngine::ParticleSystemCustomData))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETCUSTOMPARTICLEDATA_OFFSET))(this, a1, a2);
		}

		::System::Void MoveParticleSystem(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MOVEPARTICLESYSTEM_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_PlaybackState GetPlaybackState()
		{
			return ((::UnityEngine::ParticleSystem_PlaybackState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPLAYBACKSTATE_OFFSET))(this);
		}

		::System::Void SetPlaybackState(::UnityEngine::ParticleSystem_PlaybackState a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_PlaybackState))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETPLAYBACKSTATE_OFFSET))(this, a1);
		}

		::System::Int64 GetComponentMemorySize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETCOMPONENTMEMORYSIZE_OFFSET))(this);
		}

		::System::Int64 GetStructMemorySize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETSTRUCTMEMORYSIZE_OFFSET))(this);
		}

		::System::Int64 GetCurveDataMemorySize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETCURVEDATAMEMORYSIZE_OFFSET))(this);
		}

		::System::Int64 GetParticleUnitMemorySize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLEUNITMEMORYSIZE_OFFSET))(this);
		}

		::System::Int64 GetParticleCapacity()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLECAPACITY_OFFSET))(this);
		}

		::System::Int64 GetParticleRealCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLEREALCOUNT_OFFSET))(this);
		}

		::System::Int64 GetParticleInitCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLEINITCOUNT_OFFSET))(this);
		}

		::System::Void GetTrailDataInternal(::UnityEngine::ParticleSystem_Trails& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_Trails&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETTRAILDATAINTERNAL_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_Trails GetTrails()
		{
			return ((::UnityEngine::ParticleSystem_Trails(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETTRAILS_OFFSET))(this);
		}

		::System::Void SetTrails(::UnityEngine::ParticleSystem_Trails a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_Trails))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETTRAILS_OFFSET))(this, a1);
		}

		::System::Void MoveTrails(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MOVETRAILS_OFFSET))(this, a1);
		}

		::System::Void Simulate(::System::Single a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIMULATE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Simulate_1(::System::Single a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIMULATE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Simulate_2(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIMULATE_2_OFFSET))(this, a1, a2);
		}

		::System::Void Simulate_3(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIMULATE_3_OFFSET))(this, a1);
		}

		::System::Void Play(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PLAY_OFFSET))(this, a1);
		}

		::System::Void Play_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PLAY_1_OFFSET))(this);
		}

		::System::Void Pause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PAUSE_OFFSET))(this, a1);
		}

		::System::Void Pause_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PAUSE_1_OFFSET))(this);
		}

		::System::Void Stop(::System::Boolean a1, ::UnityEngine::ParticleSystemStopBehavior a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::ParticleSystemStopBehavior))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_STOP_OFFSET))(this, a1, a2);
		}

		::System::Void Stop_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_STOP_1_OFFSET))(this, a1);
		}

		::System::Void Stop_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_STOP_2_OFFSET))(this);
		}

		::System::Void Clear(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CLEAR_OFFSET))(this, a1);
		}

		::System::Void Clear_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CLEAR_1_OFFSET))(this);
		}

		::System::Boolean IsAlive(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ISALIVE_OFFSET))(this, a1);
		}

		::System::Boolean IsAlive_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ISALIVE_1_OFFSET))(this);
		}

		::System::Void Emit_2(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMIT_2_OFFSET))(this, a1);
		}

		::System::Void Emit_Internal(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMIT_INTERNAL_OFFSET))(this, a1);
		}

		::System::Void Emit_3(::UnityEngine::ParticleSystem_EmitParams a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_EmitParams, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMIT_3_OFFSET))(this, a1, a2);
		}

		::System::Void EmitOld_Internal(::UnityEngine::ParticleSystem_Particle& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_Particle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITOLD_INTERNAL_OFFSET))(this, a1);
		}

		static ::System::Void DoParticleEmissionBeginEvent_Internal(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_DOPARTICLEEMISSIONBEGINEVENT_INTERNAL_OFFSET))(a1);
		}

		static ::System::Void DoNewParticleEmissionEvent_Internal(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_DONEWPARTICLEEMISSIONEVENT_INTERNAL_OFFSET))(a1);
		}

		::System::Void TriggerSubEmitter(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERSUBEMITTER_OFFSET))(this, a1);
		}

		::System::Void TriggerSubEmitter_1(::System::Int32 a1, ::UnityEngine::ParticleSystem_Particle& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ParticleSystem_Particle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERSUBEMITTER_1_OFFSET))(this, a1, a2);
		}

		::System::Void TriggerSubEmitterForParticle(::System::Int32 a1, ::UnityEngine::ParticleSystem_Particle a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ParticleSystem_Particle))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERSUBEMITTERFORPARTICLE_OFFSET))(this, a1, a2);
		}

		::System::Void TriggerSubEmitter_2(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem_Particle>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem_Particle>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERSUBEMITTER_2_OFFSET))(this, a1, a2);
		}

		static ::System::Void ResetPreMappedBufferMemory()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_RESETPREMAPPEDBUFFERMEMORY_OFFSET))();
		}

		static ::System::Void SetMaximumPreMappedBufferCounts(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETMAXIMUMPREMAPPEDBUFFERCOUNTS_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetPremappedBufferDefaultCount(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPREMAPPEDBUFFERDEFAULTCOUNT_OFFSET))(a1);
		}

		static ::System::Void SetPremappedBufferDefaultCount(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETPREMAPPEDBUFFERDEFAULTCOUNT_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetCurrentPremappedBufferCount(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETCURRENTPREMAPPEDBUFFERCOUNT_OFFSET))(a1);
		}

		static ::System::Int32 GetCurrentPremappedBufferSize(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETCURRENTPREMAPPEDBUFFERSIZE_OFFSET))(a1);
		}

		static ::System::Int32 GetCurrentPremappedBufferRequiredSize(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETCURRENTPREMAPPEDBUFFERREQUIREDSIZE_OFFSET))(a1);
		}

		static ::System::Single GetCurrentPremappedBufferOccupancy(::System::Int32 a1)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETCURRENTPREMAPPEDBUFFEROCCUPANCY_OFFSET))(a1);
		}

		static ::UnityEngine::ParticleSystem* InstanceIDToParticleSystem(::System::Int32 a1)
		{
			return ((::UnityEngine::ParticleSystem*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INSTANCEIDTOPARTICLESYSTEM_OFFSET))(a1);
		}

		::System::Void ForceUpdateParticleSystemLightsModule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEUPDATEPARTICLESYSTEMLIGHTSMODULE_OFFSET))(this);
		}

		static ::System::UInt32 GetParticleVertexCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLEVERTEXCOUNT_OFFSET))();
		}

		static ::System::UInt32 GetInstancedParticleVertexCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETINSTANCEDPARTICLEVERTEXCOUNT_OFFSET))();
		}

		static ::System::Int32 GetInstIdToVertexCountMapWithNativeArray(::Unity::Collections::NativeArray_1<::System::Int32>& a1)
		{
			return ((::System::Int32(*)(::Unity::Collections::NativeArray_1<::System::Int32>&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETINSTIDTOVERTEXCOUNTMAPWITHNATIVEARRAY_OFFSET))(a1);
		}

		static ::System::Int32 GetInstIdToVertexCountMapSize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETINSTIDTOVERTEXCOUNTMAPSIZE_OFFSET))();
		}

		static ::System::Boolean FillInstIdToVertexCountMapToNativeArray(::System::Void* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FILLINSTIDTOVERTEXCOUNTMAPTONATIVEARRAY_OFFSET))(a1, a2);
		}

		::System::Void* GetManagedJobData()
		{
			return ((::System::Void*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETMANAGEDJOBDATA_OFFSET))(this);
		}

		::Unity::Jobs::JobHandle GetManagedJobHandle()
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETMANAGEDJOBHANDLE_OFFSET))(this);
		}

		::System::Void SetManagedJobHandle(::Unity::Jobs::JobHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETMANAGEDJOBHANDLE_OFFSET))(this, a1);
		}

		static ::Unity::Jobs::JobHandle ScheduleManagedJob(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters& a1, ::System::Void* a2)
		{
			return ((::Unity::Jobs::JobHandle(*)(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters&, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SCHEDULEMANAGEDJOB_OFFSET))(a1, a2);
		}

		static ::System::Void CopyManagedJobData(::System::Void* a1, ::UnityEngine::ParticleSystemJobs::NativeParticleData& a2)
		{
			return ((::System::Void(*)(::System::Void*, ::UnityEngine::ParticleSystemJobs::NativeParticleData&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COPYMANAGEDJOBDATA_OFFSET))(a1, a2);
		}

		static ::System::Void Internal_Draw(::UnityEngine::ParticleSystemRenderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::Material* a3, ::UnityEngine::Camera* a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystemRenderer*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::UnityEngine::Camera*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INTERNAL_DRAW_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void Draw(::UnityEngine::ParticleSystemRenderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::Material* a3, ::UnityEngine::Camera* a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystemRenderer*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::UnityEngine::Camera*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_DRAW_OFFSET))(a1, a2, a3, a4, a5);
		}

		::UnityEngine::ParticleSystem_MainModule get_main()
		{
			return ((::UnityEngine::ParticleSystem_MainModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_MAIN_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_EmissionModule get_emission()
		{
			return ((::UnityEngine::ParticleSystem_EmissionModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_EMISSION_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_ShapeModule get_shape()
		{
			return ((::UnityEngine::ParticleSystem_ShapeModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_SHAPE_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_VelocityOverLifetimeModule get_velocityOverLifetime()
		{
			return ((::UnityEngine::ParticleSystem_VelocityOverLifetimeModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_VELOCITYOVERLIFETIME_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule get_limitVelocityOverLifetime()
		{
			return ((::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_LIMITVELOCITYOVERLIFETIME_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_InheritVelocityModule get_inheritVelocity()
		{
			return ((::UnityEngine::ParticleSystem_InheritVelocityModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_INHERITVELOCITY_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_ForceOverLifetimeModule get_forceOverLifetime()
		{
			return ((::UnityEngine::ParticleSystem_ForceOverLifetimeModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_FORCEOVERLIFETIME_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_ColorOverLifetimeModule get_colorOverLifetime()
		{
			return ((::UnityEngine::ParticleSystem_ColorOverLifetimeModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_COLOROVERLIFETIME_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_ColorBySpeedModule get_colorBySpeed()
		{
			return ((::UnityEngine::ParticleSystem_ColorBySpeedModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_COLORBYSPEED_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_SizeOverLifetimeModule get_sizeOverLifetime()
		{
			return ((::UnityEngine::ParticleSystem_SizeOverLifetimeModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_SIZEOVERLIFETIME_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_SizeBySpeedModule get_sizeBySpeed()
		{
			return ((::UnityEngine::ParticleSystem_SizeBySpeedModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_SIZEBYSPEED_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_RotationOverLifetimeModule get_rotationOverLifetime()
		{
			return ((::UnityEngine::ParticleSystem_RotationOverLifetimeModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_ROTATIONOVERLIFETIME_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_RotationBySpeedModule get_rotationBySpeed()
		{
			return ((::UnityEngine::ParticleSystem_RotationBySpeedModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_ROTATIONBYSPEED_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_ExternalForcesModule get_externalForces()
		{
			return ((::UnityEngine::ParticleSystem_ExternalForcesModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_EXTERNALFORCES_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_NoiseModule get_noise()
		{
			return ((::UnityEngine::ParticleSystem_NoiseModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_NOISE_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_CollisionModule get_collision()
		{
			return ((::UnityEngine::ParticleSystem_CollisionModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_COLLISION_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_TriggerModule get_trigger()
		{
			return ((::UnityEngine::ParticleSystem_TriggerModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_TRIGGER_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_SubEmittersModule get_subEmitters()
		{
			return ((::UnityEngine::ParticleSystem_SubEmittersModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_SUBEMITTERS_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_TextureSheetAnimationModule get_textureSheetAnimation()
		{
			return ((::UnityEngine::ParticleSystem_TextureSheetAnimationModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_TEXTURESHEETANIMATION_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_LightsModule get_lights()
		{
			return ((::UnityEngine::ParticleSystem_LightsModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_LIGHTS_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_TrailModule get_trails()
		{
			return ((::UnityEngine::ParticleSystem_TrailModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_TRAILS_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_CustomDataModule get_customData()
		{
			return ((::UnityEngine::ParticleSystem_CustomDataModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_CUSTOMDATA_OFFSET))(this);
		}

		::System::Void GetParticleCurrentSize3D_Injected(::UnityEngine::ParticleSystem_Particle& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_Particle&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLECURRENTSIZE3D_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void GetParticleCurrentColor_Injected(::UnityEngine::ParticleSystem_Particle& a1, ::UnityEngine::Color32& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_Particle&, ::UnityEngine::Color32&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLECURRENTCOLOR_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void MoveParticleSystem_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MOVEPARTICLESYSTEM_INJECTED_OFFSET))(this, a1);
		}

		::System::Void GetPlaybackState_Injected(::UnityEngine::ParticleSystem_PlaybackState& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_PlaybackState&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPLAYBACKSTATE_INJECTED_OFFSET))(this, a1);
		}

		::System::Void SetPlaybackState_Injected(::UnityEngine::ParticleSystem_PlaybackState& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_PlaybackState&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETPLAYBACKSTATE_INJECTED_OFFSET))(this, a1);
		}

		::System::Void SetTrails_Injected(::UnityEngine::ParticleSystem_Trails& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_Trails&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETTRAILS_INJECTED_OFFSET))(this, a1);
		}

		::System::Void MoveTrails_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MOVETRAILS_INJECTED_OFFSET))(this, a1);
		}

		::System::Void Emit_Injected(::UnityEngine::ParticleSystem_EmitParams& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_EmitParams&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMIT_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void TriggerSubEmitterForParticle_Injected(::System::Int32 a1, ::UnityEngine::ParticleSystem_Particle& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ParticleSystem_Particle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERSUBEMITTERFORPARTICLE_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void GetManagedJobHandle_Injected(::Unity::Jobs::JobHandle& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETMANAGEDJOBHANDLE_INJECTED_OFFSET))(this, a1);
		}

		::System::Void SetManagedJobHandle_Injected(::Unity::Jobs::JobHandle& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETMANAGEDJOBHANDLE_INJECTED_OFFSET))(this, a1);
		}

		static ::System::Void ScheduleManagedJob_Injected(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters& a1, ::System::Void* a2, ::Unity::Jobs::JobHandle& a3)
		{
			return ((::System::Void(*)(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters&, ::System::Void*, ::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SCHEDULEMANAGEDJOB_INJECTED_OFFSET))(a1, a2, a3);
		}
	};
}
