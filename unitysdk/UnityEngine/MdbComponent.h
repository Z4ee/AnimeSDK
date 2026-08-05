#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/MDB_ClothLayerType.h"
#include "unitysdk/UnityEngine/MDB_QuerySceneType.h"
#include "unitysdk/UnityEngine/MDB_StateType.h"
#include "unitysdk/UnityEngine/MDB_SupplyAnimType.h"
#include "unitysdk/UnityEngine/MdbComponent_TransiteParam.h"
#include "unitysdk/UnityEngine/MdbSimWindData.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class TextAsset; }

#define UNITYENGINE_MDBCOMPONENT_BLENDTOANIMPOSEPERCLOTH_OFFSET UNITYSDK_OFFSET(0x1FC57F80)
#define UNITYENGINE_MDBCOMPONENT_BLENDTOANIMPOSESECONDS_OFFSET UNITYSDK_OFFSET(0x1FC57F60)
#define UNITYENGINE_MDBCOMPONENT_BLENDTOSIMPOSEPERCLOTH_OFFSET UNITYSDK_OFFSET(0x1FC57F90)
#define UNITYENGINE_MDBCOMPONENT_BLENDTOSIMPOSESECONDS_OFFSET UNITYSDK_OFFSET(0x1FC57F70)
#define UNITYENGINE_MDBCOMPONENT_CREATEMVDACTORSERVER_OFFSET UNITYSDK_OFFSET(0x1FC57EE0)
#define UNITYENGINE_MDBCOMPONENT_DOWNLOADBONENAMES_OFFSET UNITYSDK_OFFSET(0x1FC581E0)
#define UNITYENGINE_MDBCOMPONENT_DOWNLOADBONEPARENTS_OFFSET UNITYSDK_OFFSET(0x1FC581F0)
#define UNITYENGINE_MDBCOMPONENT_DOWNLOADBONEPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1FC58200)
#define UNITYENGINE_MDBCOMPONENT_DOWNLOADBONEROTATIONS_OFFSET UNITYSDK_OFFSET(0x1FC58210)
#define UNITYENGINE_MDBCOMPONENT_DOWNLOADCTXPARTICLESBONENAME_OFFSET UNITYSDK_OFFSET(0x1FC580F0)
#define UNITYENGINE_MDBCOMPONENT_DOWNLOADSIMCLOTHSKINCOLLIDERSPHEREPOS_OFFSET UNITYSDK_OFFSET(0x1FC58150)
#define UNITYENGINE_MDBCOMPONENT_DOWNLOADSIMCLOTHSKINCOLLIDERSPHERERADIUS_OFFSET UNITYSDK_OFFSET(0x1FC58160)
#define UNITYENGINE_MDBCOMPONENT_DOWNLOADSIMPARTICLESANIMPOSEPOS_OFFSET UNITYSDK_OFFSET(0x1FC58130)
#define UNITYENGINE_MDBCOMPONENT_DOWNLOADSIMPARTICLESANIMPOSEROT_OFFSET UNITYSDK_OFFSET(0x1FC58140)
#define UNITYENGINE_MDBCOMPONENT_DOWNLOADSIMPARTICLESSIMPOSENORM_OFFSET UNITYSDK_OFFSET(0x1FC58100)
#define UNITYENGINE_MDBCOMPONENT_DOWNLOADSIMPARTICLESSIMPOSEPOS_OFFSET UNITYSDK_OFFSET(0x1FC58110)
#define UNITYENGINE_MDBCOMPONENT_DOWNLOADSIMPARTICLESSIMPOSEROT_OFFSET UNITYSDK_OFFSET(0x1FC58120)
#define UNITYENGINE_MDBCOMPONENT_DOWNLOADSIMWINDDATA_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FC581D0)
#define UNITYENGINE_MDBCOMPONENT_DOWNLOADSIMWINDDATA_OFFSET UNITYSDK_OFFSET(0x1FC58170)
#define UNITYENGINE_MDBCOMPONENT_GETBYTEDATAVER_OFFSET UNITYSDK_OFFSET(0x1FC58220)
#define UNITYENGINE_MDBCOMPONENT_GETCLOTHBLENDRATE_OFFSET UNITYSDK_OFFSET(0x1FC57F50)
#define UNITYENGINE_MDBCOMPONENT_GETCLOTHINITSTATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1FC57FA0)
#define UNITYENGINE_MDBCOMPONENT_GETCLOTHINITSTATE_OFFSET UNITYSDK_OFFSET(0x1FC57FB0)
#define UNITYENGINE_MDBCOMPONENT_GETCLOTHNUM_OFFSET UNITYSDK_OFFSET(0x1FC57DD0)
#define UNITYENGINE_MDBCOMPONENT_GETCLOTHSTATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1FC57FE0)
#define UNITYENGINE_MDBCOMPONENT_GETCLOTHSTATE_OFFSET UNITYSDK_OFFSET(0x1FC57FF0)
#define UNITYENGINE_MDBCOMPONENT_GETMANUALSTEPENABLE_OFFSET UNITYSDK_OFFSET(0x1FC57E40)
#define UNITYENGINE_MDBCOMPONENT_GETMDBCLOTHES_OFFSET UNITYSDK_OFFSET(0x1FC57D10)
#define UNITYENGINE_MDBCOMPONENT_GETMDBENABLE_OFFSET UNITYSDK_OFFSET(0x1FC57E20)
#define UNITYENGINE_MDBCOMPONENT_GETSTEPUNITYBONEENABLE_OFFSET UNITYSDK_OFFSET(0x1FC57EB0)
#define UNITYENGINE_MDBCOMPONENT_GETSTIFFEXPONENTRATE_OFFSET UNITYSDK_OFFSET(0x1FC57F30)
#define UNITYENGINE_MDBCOMPONENT_GETTIMESLOWRATE_OFFSET UNITYSDK_OFFSET(0x1FC57F10)
#define UNITYENGINE_MDBCOMPONENT_GET_BLEND2ANIMPOSESECONDS_OFFSET UNITYSDK_OFFSET(0x1FC58250)
#define UNITYENGINE_MDBCOMPONENT_GET_BLEND2SIMPOSESECONDS_OFFSET UNITYSDK_OFFSET(0x1FC58270)
#define UNITYENGINE_MDBCOMPONENT_GET_ENVIRONMENTLODVALUE_OFFSET UNITYSDK_OFFSET(0x1FC57D50)
#define UNITYENGINE_MDBCOMPONENT_GET_FORCEUSEAVATARPOSITIONENABLE_OFFSET UNITYSDK_OFFSET(0x1FC57D70)
#define UNITYENGINE_MDBCOMPONENT_GET_ISMDBUSESKELETONSCALE_OFFSET UNITYSDK_OFFSET(0x1FC57DB0)
#define UNITYENGINE_MDBCOMPONENT_GET_LAYERINDEX_OFFSET UNITYSDK_OFFSET(0x1FC58230)
#define UNITYENGINE_MDBCOMPONENT_GET_MDBCLOTHES_OFFSET UNITYSDK_OFFSET(0x1FC57CF0)
#define UNITYENGINE_MDBCOMPONENT_GET_MDBCLOTHFLAGS_OFFSET UNITYSDK_OFFSET(0x1FC57D30)
#define UNITYENGINE_MDBCOMPONENT_GET_MDBHUMAN_OFFSET UNITYSDK_OFFSET(0x1FC57CD0)
#define UNITYENGINE_MDBCOMPONENT_GET_MDBTIMESCALEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1FC57E80)
#define UNITYENGINE_MDBCOMPONENT_GET_SIMBYREFPOSESETUNITSCALE_OFFSET UNITYSDK_OFFSET(0x1FC57D90)
#define UNITYENGINE_MDBCOMPONENT_GET_STATEHASHBLENDANIM_OFFSET UNITYSDK_OFFSET(0x1FC582B0)
#define UNITYENGINE_MDBCOMPONENT_GET_STATEHASHTRANSITEPARAM_OFFSET UNITYSDK_OFFSET(0x1FC58310)
#define UNITYENGINE_MDBCOMPONENT_GET_STATELISTBLENDANIM_OFFSET UNITYSDK_OFFSET(0x1FC58290)
#define UNITYENGINE_MDBCOMPONENT_GET_STATELISTTRANSITEPARAM_OFFSET UNITYSDK_OFFSET(0x1FC582F0)
#define UNITYENGINE_MDBCOMPONENT_GET_TRANSITEPARAMSECONDS_OFFSET UNITYSDK_OFFSET(0x1FC582D0)
#define UNITYENGINE_MDBCOMPONENT_GET_USESCALEDDELTATIME_OFFSET UNITYSDK_OFFSET(0x1FC57E60)
#define UNITYENGINE_MDBCOMPONENT_ISCOLWITHSCENE_OFFSET UNITYSDK_OFFSET(0x1FC580C0)
#define UNITYENGINE_MDBCOMPONENT_MANUALSTEP_OFFSET UNITYSDK_OFFSET(0x1FC57E50)
#define UNITYENGINE_MDBCOMPONENT_REBINDMDB_OFFSET UNITYSDK_OFFSET(0x1FC57DE0)
#define UNITYENGINE_MDBCOMPONENT_REFRESHSTATEHASH_OFFSET UNITYSDK_OFFSET(0x1FC58330)
#define UNITYENGINE_MDBCOMPONENT_RELOADHUMANDATA_OFFSET UNITYSDK_OFFSET(0x1FC57DF0)
#define UNITYENGINE_MDBCOMPONENT_RELOADSINGLECLOTHDATA_OFFSET UNITYSDK_OFFSET(0x1FC57E00)
#define UNITYENGINE_MDBCOMPONENT_SETBLENDRATE_OFFSET UNITYSDK_OFFSET(0x1FC57F40)
#define UNITYENGINE_MDBCOMPONENT_SETCLOTHLAYER_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1FC58020)
#define UNITYENGINE_MDBCOMPONENT_SETCLOTHLAYER_OFFSET UNITYSDK_OFFSET(0x1FC58030)
#define UNITYENGINE_MDBCOMPONENT_SETCLOTHSTATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1FC57FC0)
#define UNITYENGINE_MDBCOMPONENT_SETCLOTHSTATE_OFFSET UNITYSDK_OFFSET(0x1FC57FD0)
#define UNITYENGINE_MDBCOMPONENT_SETCLOTHSUPPLYANIM_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1FC58040)
#define UNITYENGINE_MDBCOMPONENT_SETCLOTHSUPPLYANIM_OFFSET UNITYSDK_OFFSET(0x1FC58050)
#define UNITYENGINE_MDBCOMPONENT_SETCOLWITHSCENE_OFFSET UNITYSDK_OFFSET(0x1FC580B0)
#define UNITYENGINE_MDBCOMPONENT_SETMANUALSTEPENABLE_OFFSET UNITYSDK_OFFSET(0x1FC57E30)
#define UNITYENGINE_MDBCOMPONENT_SETMDBCLOTHES_OFFSET UNITYSDK_OFFSET(0x1FC57D20)
#define UNITYENGINE_MDBCOMPONENT_SETMDBENABLE_OFFSET UNITYSDK_OFFSET(0x1FC57E10)
#define UNITYENGINE_MDBCOMPONENT_SETMDBLODDISTS_OFFSET UNITYSDK_OFFSET(0x1FC57EF0)
#define UNITYENGINE_MDBCOMPONENT_SETMDBLOGENABLED_OFFSET UNITYSDK_OFFSET(0x1FC57ED0)
#define UNITYENGINE_MDBCOMPONENT_SETQUERYSCENE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1FC580D0)
#define UNITYENGINE_MDBCOMPONENT_SETQUERYSCENE_OFFSET UNITYSDK_OFFSET(0x1FC580E0)
#define UNITYENGINE_MDBCOMPONENT_SETSTEPUNITYBONEENABLE_OFFSET UNITYSDK_OFFSET(0x1FC57EA0)
#define UNITYENGINE_MDBCOMPONENT_SETSTIFFEXPONENTRATE_OFFSET UNITYSDK_OFFSET(0x1FC57F20)
#define UNITYENGINE_MDBCOMPONENT_SETTELEPORTUP_OFFSET UNITYSDK_OFFSET(0x1FC58080)
#define UNITYENGINE_MDBCOMPONENT_SETTIMESLOWRATE_OFFSET UNITYSDK_OFFSET(0x1FC57F00)
#define UNITYENGINE_MDBCOMPONENT_SETTRANSPORT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FC580A0)
#define UNITYENGINE_MDBCOMPONENT_SETTRANSPORT_OFFSET UNITYSDK_OFFSET(0x1FC58090)
#define UNITYENGINE_MDBCOMPONENT_SET_BLEND2ANIMPOSESECONDS_OFFSET UNITYSDK_OFFSET(0x1FC58260)
#define UNITYENGINE_MDBCOMPONENT_SET_BLEND2SIMPOSESECONDS_OFFSET UNITYSDK_OFFSET(0x1FC58280)
#define UNITYENGINE_MDBCOMPONENT_SET_ENVIRONMENTLODVALUE_OFFSET UNITYSDK_OFFSET(0x1FC57D60)
#define UNITYENGINE_MDBCOMPONENT_SET_FORCEUSEAVATARPOSITIONENABLE_OFFSET UNITYSDK_OFFSET(0x1FC57D80)
#define UNITYENGINE_MDBCOMPONENT_SET_ISMDBUSESKELETONSCALE_OFFSET UNITYSDK_OFFSET(0x1FC57DC0)
#define UNITYENGINE_MDBCOMPONENT_SET_LAYERINDEX_OFFSET UNITYSDK_OFFSET(0x1FC58240)
#define UNITYENGINE_MDBCOMPONENT_SET_MDBCLOTHES_OFFSET UNITYSDK_OFFSET(0x1FC57D00)
#define UNITYENGINE_MDBCOMPONENT_SET_MDBCLOTHFLAGS_OFFSET UNITYSDK_OFFSET(0x1FC57D40)
#define UNITYENGINE_MDBCOMPONENT_SET_MDBHUMAN_OFFSET UNITYSDK_OFFSET(0x1FC57CE0)
#define UNITYENGINE_MDBCOMPONENT_SET_MDBTIMESCALEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1FC57E90)
#define UNITYENGINE_MDBCOMPONENT_SET_SIMBYREFPOSESETUNITSCALE_OFFSET UNITYSDK_OFFSET(0x1FC57DA0)
#define UNITYENGINE_MDBCOMPONENT_SET_STATEHASHBLENDANIM_OFFSET UNITYSDK_OFFSET(0x1FC582C0)
#define UNITYENGINE_MDBCOMPONENT_SET_STATEHASHTRANSITEPARAM_OFFSET UNITYSDK_OFFSET(0x1FC58320)
#define UNITYENGINE_MDBCOMPONENT_SET_STATELISTBLENDANIM_OFFSET UNITYSDK_OFFSET(0x1FC582A0)
#define UNITYENGINE_MDBCOMPONENT_SET_STATELISTTRANSITEPARAM_OFFSET UNITYSDK_OFFSET(0x1FC58300)
#define UNITYENGINE_MDBCOMPONENT_SET_TRANSITEPARAMSECONDS_OFFSET UNITYSDK_OFFSET(0x1FC582E0)
#define UNITYENGINE_MDBCOMPONENT_SET_USESCALEDDELTATIME_OFFSET UNITYSDK_OFFSET(0x1FC57E70)
#define UNITYENGINE_MDBCOMPONENT_TELEPORT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FC58070)
#define UNITYENGINE_MDBCOMPONENT_TELEPORT_OFFSET UNITYSDK_OFFSET(0x1FC58060)
#define UNITYENGINE_MDBCOMPONENT_TRANSITECLOTHSTATESECONDS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1FC58000)
#define UNITYENGINE_MDBCOMPONENT_TRANSITECLOTHSTATESECONDS_OFFSET UNITYSDK_OFFSET(0x1FC58010)
#define UNITYENGINE_MDBCOMPONENT_UNITYBONESTEP_OFFSET UNITYSDK_OFFSET(0x1FC57EC0)
#define UNITYENGINE_MDBCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC58340)

namespace UnityEngine
{
	inline static constexpr unsigned int MdbComponent_TypeDefinitionIndex = 39957;

	class MdbComponent : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT__CTOR_OFFSET))(this);
		}

		::UnityEngine::TextAsset* get_mdbHuman()
		{
			return ((::UnityEngine::TextAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_GET_MDBHUMAN_OFFSET))(this);
		}

		::System::Void set_mdbHuman(::UnityEngine::TextAsset* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SET_MDBHUMAN_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::TextAsset*>* get_mdbClothes()
		{
			return ((::Il2CppArray<::UnityEngine::TextAsset*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_GET_MDBCLOTHES_OFFSET))(this);
		}

		::System::Void set_mdbClothes(::Il2CppArray<::UnityEngine::TextAsset*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::TextAsset*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SET_MDBCLOTHES_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::TextAsset*>* GetMdbClothes()
		{
			return ((::Il2CppArray<::UnityEngine::TextAsset*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_GETMDBCLOTHES_OFFSET))(this);
		}

		::System::Void SetMdbClothes(::Il2CppArray<::UnityEngine::TextAsset*>* textAssets)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::TextAsset*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SETMDBCLOTHES_OFFSET))(this, textAssets);
		}

		::Il2CppArray<::System::Int32>* get_mdbClothFlags()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_GET_MDBCLOTHFLAGS_OFFSET))(this);
		}

		::System::Void set_mdbClothFlags(::Il2CppArray<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SET_MDBCLOTHFLAGS_OFFSET))(this, value);
		}

		::System::Int32 get_environmentLODValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_GET_ENVIRONMENTLODVALUE_OFFSET))(this);
		}

		::System::Void set_environmentLODValue(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SET_ENVIRONMENTLODVALUE_OFFSET))(this, value);
		}

		::System::Boolean get_ForceUseAvatarPositionEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_GET_FORCEUSEAVATARPOSITIONENABLE_OFFSET))(this);
		}

		::System::Void set_ForceUseAvatarPositionEnable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SET_FORCEUSEAVATARPOSITIONENABLE_OFFSET))(this, value);
		}

		::System::Boolean get_SimByRefPoseSetUnitScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_GET_SIMBYREFPOSESETUNITSCALE_OFFSET))(this);
		}

		::System::Void set_SimByRefPoseSetUnitScale(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SET_SIMBYREFPOSESETUNITSCALE_OFFSET))(this, value);
		}

		::System::Boolean get_IsMdbUseSkeletonScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_GET_ISMDBUSESKELETONSCALE_OFFSET))(this);
		}

		::System::Void set_IsMdbUseSkeletonScale(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SET_ISMDBUSESKELETONSCALE_OFFSET))(this, value);
		}

		::System::Int32 GetClothNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_GETCLOTHNUM_OFFSET))(this);
		}

		::System::Void RebindMdb()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_REBINDMDB_OFFSET))(this);
		}

		::System::Void ReloadHumanData(::UnityEngine::TextAsset* textAsset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_RELOADHUMANDATA_OFFSET))(this, textAsset);
		}

		::System::Void ReloadSingleClothData(::UnityEngine::TextAsset* textAsset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_RELOADSINGLECLOTHDATA_OFFSET))(this, textAsset);
		}

		::System::Void SetMdbEnable(::System::Boolean inEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SETMDBENABLE_OFFSET))(this, inEnable);
		}

		::System::Boolean GetMdbEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_GETMDBENABLE_OFFSET))(this);
		}

		::System::Void SetManualStepEnable(::System::Boolean inManualStepEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SETMANUALSTEPENABLE_OFFSET))(this, inManualStepEnable);
		}

		::System::Boolean GetManualStepEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_GETMANUALSTEPENABLE_OFFSET))(this);
		}

		::System::Void ManualStep(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_MANUALSTEP_OFFSET))(this, deltaTime);
		}

		::System::Boolean get_UseScaledDeltaTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_GET_USESCALEDDELTATIME_OFFSET))(this);
		}

		::System::Void set_UseScaledDeltaTime(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SET_USESCALEDDELTATIME_OFFSET))(this, value);
		}

		::System::Single get_MdbTimeScaleMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_GET_MDBTIMESCALEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_MdbTimeScaleMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SET_MDBTIMESCALEMULTIPLIER_OFFSET))(this, value);
		}

		::System::Void SetStepUnityBoneEnable(::System::Boolean inStepUnityBoneEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SETSTEPUNITYBONEENABLE_OFFSET))(this, inStepUnityBoneEnable);
		}

		::System::Boolean GetStepUnityBoneEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_GETSTEPUNITYBONEENABLE_OFFSET))(this);
		}

		::System::Void UnityBoneStep(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_UNITYBONESTEP_OFFSET))(this, deltaTime);
		}

		static ::System::Void SetMdbLogEnabled(::System::Boolean inEnable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SETMDBLOGENABLED_OFFSET))(inEnable);
		}

		static ::System::Void CreateMvdActorServer()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_CREATEMVDACTORSERVER_OFFSET))();
		}

		static ::System::Void SetMdbLodDists(::System::Single Dist_0, ::System::Single Dist_1, ::System::Single Dist_2, ::System::Single Dist_3)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SETMDBLODDISTS_OFFSET))(Dist_0, Dist_1, Dist_2, Dist_3);
		}

		::System::Void SetTimeSlowRate(::System::Single inRate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SETTIMESLOWRATE_OFFSET))(this, inRate);
		}

		::System::Single GetTimeSlowRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_GETTIMESLOWRATE_OFFSET))(this);
		}

		::System::Void SetStiffExponentRate(::System::Single inRate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SETSTIFFEXPONENTRATE_OFFSET))(this, inRate);
		}

		::System::Single GetStiffExponentRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_GETSTIFFEXPONENTRATE_OFFSET))(this);
		}

		::System::Void SetBlendRate(::System::Single inRate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SETBLENDRATE_OFFSET))(this, inRate);
		}

		::System::Single GetClothBlendRate(::System::Int32 ClothIndex)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_GETCLOTHBLENDRATE_OFFSET))(this, ClothIndex);
		}

		::System::Void BlendToAnimPoseSeconds(::System::Single blendToPoseSeconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_BLENDTOANIMPOSESECONDS_OFFSET))(this, blendToPoseSeconds);
		}

		::System::Void BlendToSimPoseSeconds(::System::Single blendToPoseSeconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_BLENDTOSIMPOSESECONDS_OFFSET))(this, blendToPoseSeconds);
		}

		::System::Void BlendToAnimPosePerCloth(::System::Int32 clothIndex, ::System::Single blendToPoseSeconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_BLENDTOANIMPOSEPERCLOTH_OFFSET))(this, clothIndex, blendToPoseSeconds);
		}

		::System::Void BlendToSimPosePerCloth(::System::Int32 clothIndex, ::System::Single blendToPoseSeconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_BLENDTOSIMPOSEPERCLOTH_OFFSET))(this, clothIndex, blendToPoseSeconds);
		}

		::System::Int32 GetClothInitState_Internal(::System::Int32 ClothIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_GETCLOTHINITSTATE_INTERNAL_OFFSET))(this, ClothIndex);
		}

		::UnityEngine::MDB_StateType GetClothInitState(::System::Int32 ClothIndex)
		{
			return ((::UnityEngine::MDB_StateType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_GETCLOTHINITSTATE_OFFSET))(this, ClothIndex);
		}

		::System::Boolean SetClothState_Internal(::System::Int32 ClothIndex, ::System::Int32 StateType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SETCLOTHSTATE_INTERNAL_OFFSET))(this, ClothIndex, StateType);
		}

		::System::Boolean SetClothState(::System::Int32 ClothIndex, ::UnityEngine::MDB_StateType StateType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::MDB_StateType))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SETCLOTHSTATE_OFFSET))(this, ClothIndex, StateType);
		}

		::System::Int32 GetClothState_Internal(::System::Int32 ClothIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_GETCLOTHSTATE_INTERNAL_OFFSET))(this, ClothIndex);
		}

		::UnityEngine::MDB_StateType GetClothState(::System::Int32 ClothIndex)
		{
			return ((::UnityEngine::MDB_StateType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_GETCLOTHSTATE_OFFSET))(this, ClothIndex);
		}

		::System::Boolean TransiteClothStateSeconds_Internal(::System::Int32 ClothIndex, ::System::Int32 StateType, ::System::Single TransiteTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_TRANSITECLOTHSTATESECONDS_INTERNAL_OFFSET))(this, ClothIndex, StateType, TransiteTime);
		}

		::System::Boolean TransiteClothStateSeconds(::System::Int32 ClothIndex, ::UnityEngine::MDB_StateType StateType, ::System::Single TransiteTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::MDB_StateType, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_TRANSITECLOTHSTATESECONDS_OFFSET))(this, ClothIndex, StateType, TransiteTime);
		}

		::System::Void SetClothLayer_Internal(::System::Int32 ClothIndex, ::System::Int32 Layer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SETCLOTHLAYER_INTERNAL_OFFSET))(this, ClothIndex, Layer);
		}

		::System::Void SetClothLayer(::System::Int32 ClothIndex, ::UnityEngine::MDB_ClothLayerType Layer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::MDB_ClothLayerType))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SETCLOTHLAYER_OFFSET))(this, ClothIndex, Layer);
		}

		::System::Void SetClothSupplyAnim_Internal(::System::Int32 ClothIndex, ::System::Int32 SupplyAnimType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SETCLOTHSUPPLYANIM_INTERNAL_OFFSET))(this, ClothIndex, SupplyAnimType);
		}

		::System::Void SetClothSupplyAnim(::System::Int32 ClothIndex, ::UnityEngine::MDB_SupplyAnimType SupplyAnimType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::MDB_SupplyAnimType))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SETCLOTHSUPPLYANIM_OFFSET))(this, ClothIndex, SupplyAnimType);
		}

		::System::Void Teleport(::UnityEngine::Vector3 tpos, ::UnityEngine::Quaternion trot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_TELEPORT_OFFSET))(this, tpos, trot);
		}

		::System::Void SetTeleportUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SETTELEPORTUP_OFFSET))(this);
		}

		::System::Void SetTransport(::UnityEngine::Vector3 tpos, ::UnityEngine::Quaternion trot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SETTRANSPORT_OFFSET))(this, tpos, trot);
		}

		::System::Void SetColWithScene(::System::Int32 ClothIndex, ::System::Boolean inEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SETCOLWITHSCENE_OFFSET))(this, ClothIndex, inEnable);
		}

		::System::Boolean IsColWithScene()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_ISCOLWITHSCENE_OFFSET))(this);
		}

		::System::Void SetQueryScene_Internal(::System::Int32 QuerySceneType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SETQUERYSCENE_INTERNAL_OFFSET))(this, QuerySceneType);
		}

		::System::Void SetQueryScene(::UnityEngine::MDB_QuerySceneType QuerySceneType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MDB_QuerySceneType))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SETQUERYSCENE_OFFSET))(this, QuerySceneType);
		}

		::Il2CppArray<::System::String*>* DownloadCtxParticlesBoneName(::System::Int32 ClothIndex)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_DOWNLOADCTXPARTICLESBONENAME_OFFSET))(this, ClothIndex);
		}

		::Il2CppArray<::UnityEngine::Vector3>* DownloadSimParticlesSimPoseNorm(::System::Int32 ClothIndex)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_DOWNLOADSIMPARTICLESSIMPOSENORM_OFFSET))(this, ClothIndex);
		}

		::Il2CppArray<::UnityEngine::Vector3>* DownloadSimParticlesSimPosePos(::System::Int32 ClothIndex)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_DOWNLOADSIMPARTICLESSIMPOSEPOS_OFFSET))(this, ClothIndex);
		}

		::Il2CppArray<::UnityEngine::Quaternion>* DownloadSimParticlesSimPoseRot(::System::Int32 ClothIndex)
		{
			return ((::Il2CppArray<::UnityEngine::Quaternion>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_DOWNLOADSIMPARTICLESSIMPOSEROT_OFFSET))(this, ClothIndex);
		}

		::Il2CppArray<::UnityEngine::Vector3>* DownloadSimParticlesAnimPosePos(::System::Int32 ClothIndex)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_DOWNLOADSIMPARTICLESANIMPOSEPOS_OFFSET))(this, ClothIndex);
		}

		::Il2CppArray<::UnityEngine::Quaternion>* DownloadSimParticlesAnimPoseRot(::System::Int32 ClothIndex)
		{
			return ((::Il2CppArray<::UnityEngine::Quaternion>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_DOWNLOADSIMPARTICLESANIMPOSEROT_OFFSET))(this, ClothIndex);
		}

		::Il2CppArray<::UnityEngine::Vector3>* DownloadSimClothSkinColliderSpherePos(::System::Int32 ClothIndex)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_DOWNLOADSIMCLOTHSKINCOLLIDERSPHEREPOS_OFFSET))(this, ClothIndex);
		}

		::Il2CppArray<::System::Single>* DownloadSimClothSkinColliderSphereRadius(::System::Int32 ClothIndex)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_DOWNLOADSIMCLOTHSKINCOLLIDERSPHERERADIUS_OFFSET))(this, ClothIndex);
		}

		::UnityEngine::MdbSimWindData DownloadSimWindData(::System::Int32 ClothIndex)
		{
			return ((::UnityEngine::MdbSimWindData(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_DOWNLOADSIMWINDDATA_OFFSET))(this, ClothIndex);
		}

		::Il2CppArray<::System::String*>* DownloadBoneNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_DOWNLOADBONENAMES_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* DownloadBoneParents()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_DOWNLOADBONEPARENTS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* DownloadBonePositions()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_DOWNLOADBONEPOSITIONS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Quaternion>* DownloadBoneRotations()
		{
			return ((::Il2CppArray<::UnityEngine::Quaternion>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_DOWNLOADBONEROTATIONS_OFFSET))(this);
		}

		::System::String* GetByteDataVer()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_GETBYTEDATAVER_OFFSET))(this);
		}

		::System::Int32 get_layerIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_GET_LAYERINDEX_OFFSET))(this);
		}

		::System::Void set_layerIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SET_LAYERINDEX_OFFSET))(this, value);
		}

		::System::Single get_blend2AnimPoseSeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_GET_BLEND2ANIMPOSESECONDS_OFFSET))(this);
		}

		::System::Void set_blend2AnimPoseSeconds(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SET_BLEND2ANIMPOSESECONDS_OFFSET))(this, value);
		}

		::System::Single get_blend2SimPoseSeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_GET_BLEND2SIMPOSESECONDS_OFFSET))(this);
		}

		::System::Void set_blend2SimPoseSeconds(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SET_BLEND2SIMPOSESECONDS_OFFSET))(this, value);
		}

		::Il2CppArray<::System::String*>* get_stateListBlendAnim()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_GET_STATELISTBLENDANIM_OFFSET))(this);
		}

		::System::Void set_stateListBlendAnim(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SET_STATELISTBLENDANIM_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Int32>* get_stateHashBlendAnim()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_GET_STATEHASHBLENDANIM_OFFSET))(this);
		}

		::System::Void set_stateHashBlendAnim(::Il2CppArray<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SET_STATEHASHBLENDANIM_OFFSET))(this, value);
		}

		::System::Single get_transiteParamSeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_GET_TRANSITEPARAMSECONDS_OFFSET))(this);
		}

		::System::Void set_transiteParamSeconds(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SET_TRANSITEPARAMSECONDS_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::MdbComponent_TransiteParam>* get_stateListTransiteParam()
		{
			return ((::Il2CppArray<::UnityEngine::MdbComponent_TransiteParam>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_GET_STATELISTTRANSITEPARAM_OFFSET))(this);
		}

		::System::Void set_stateListTransiteParam(::Il2CppArray<::UnityEngine::MdbComponent_TransiteParam>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::MdbComponent_TransiteParam>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SET_STATELISTTRANSITEPARAM_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Int32>* get_stateHashTransiteParam()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_GET_STATEHASHTRANSITEPARAM_OFFSET))(this);
		}

		::System::Void set_stateHashTransiteParam(::Il2CppArray<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SET_STATEHASHTRANSITEPARAM_OFFSET))(this, value);
		}

		::System::Void RefreshStateHash()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_REFRESHSTATEHASH_OFFSET))(this);
		}

		::System::Void Teleport_Injected(::UnityEngine::Vector3& tpos, ::UnityEngine::Quaternion& trot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_TELEPORT_INJECTED_OFFSET))(this, tpos, trot);
		}

		::System::Void SetTransport_Injected(::UnityEngine::Vector3& tpos, ::UnityEngine::Quaternion& trot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_SETTRANSPORT_INJECTED_OFFSET))(this, tpos, trot);
		}

		::System::Void DownloadSimWindData_Injected(::System::Int32 ClothIndex, ::UnityEngine::MdbSimWindData& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::MdbSimWindData&))((::PBYTE)hIl2Cpp + UNITYENGINE_MDBCOMPONENT_DOWNLOADSIMWINDDATA_INJECTED_OFFSET))(this, ClothIndex, ret);
		}
	};
}
