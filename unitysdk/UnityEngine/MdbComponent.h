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

#define UNITYENGINE_MDBCOMPONENT_BLENDTOANIMPOSEPERCLOTH_OFFSET UNITYSDK_OFFSET(0x1E87A9D0)
#define UNITYENGINE_MDBCOMPONENT_BLENDTOANIMPOSESECONDS_OFFSET UNITYSDK_OFFSET(0x1E87A9B0)
#define UNITYENGINE_MDBCOMPONENT_BLENDTOSIMPOSEPERCLOTH_OFFSET UNITYSDK_OFFSET(0x1E87A9E0)
#define UNITYENGINE_MDBCOMPONENT_BLENDTOSIMPOSESECONDS_OFFSET UNITYSDK_OFFSET(0x1E87A9C0)
#define UNITYENGINE_MDBCOMPONENT_CREATEMVDACTORSERVER_OFFSET UNITYSDK_OFFSET(0x1E87A930)
#define UNITYENGINE_MDBCOMPONENT_DOWNLOADBONENAMES_OFFSET UNITYSDK_OFFSET(0x1E87AC30)
#define UNITYENGINE_MDBCOMPONENT_DOWNLOADBONEPARENTS_OFFSET UNITYSDK_OFFSET(0x1E87AC40)
#define UNITYENGINE_MDBCOMPONENT_DOWNLOADBONEPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1E87AC50)
#define UNITYENGINE_MDBCOMPONENT_DOWNLOADBONEROTATIONS_OFFSET UNITYSDK_OFFSET(0x1E87AC60)
#define UNITYENGINE_MDBCOMPONENT_DOWNLOADCTXPARTICLESBONENAME_OFFSET UNITYSDK_OFFSET(0x1E87AB40)
#define UNITYENGINE_MDBCOMPONENT_DOWNLOADSIMCLOTHSKINCOLLIDERSPHEREPOS_OFFSET UNITYSDK_OFFSET(0x1E87ABA0)
#define UNITYENGINE_MDBCOMPONENT_DOWNLOADSIMCLOTHSKINCOLLIDERSPHERERADIUS_OFFSET UNITYSDK_OFFSET(0x1E87ABB0)
#define UNITYENGINE_MDBCOMPONENT_DOWNLOADSIMPARTICLESANIMPOSEPOS_OFFSET UNITYSDK_OFFSET(0x1E87AB80)
#define UNITYENGINE_MDBCOMPONENT_DOWNLOADSIMPARTICLESANIMPOSEROT_OFFSET UNITYSDK_OFFSET(0x1E87AB90)
#define UNITYENGINE_MDBCOMPONENT_DOWNLOADSIMPARTICLESSIMPOSENORM_OFFSET UNITYSDK_OFFSET(0x1E87AB50)
#define UNITYENGINE_MDBCOMPONENT_DOWNLOADSIMPARTICLESSIMPOSEPOS_OFFSET UNITYSDK_OFFSET(0x1E87AB60)
#define UNITYENGINE_MDBCOMPONENT_DOWNLOADSIMPARTICLESSIMPOSEROT_OFFSET UNITYSDK_OFFSET(0x1E87AB70)
#define UNITYENGINE_MDBCOMPONENT_DOWNLOADSIMWINDDATA_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E87AC20)
#define UNITYENGINE_MDBCOMPONENT_DOWNLOADSIMWINDDATA_OFFSET UNITYSDK_OFFSET(0x1E87ABC0)
#define UNITYENGINE_MDBCOMPONENT_GETBYTEDATAVER_OFFSET UNITYSDK_OFFSET(0x1E87AC70)
#define UNITYENGINE_MDBCOMPONENT_GETCLOTHBLENDRATE_OFFSET UNITYSDK_OFFSET(0x1E87A9A0)
#define UNITYENGINE_MDBCOMPONENT_GETCLOTHINITSTATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E87A9F0)
#define UNITYENGINE_MDBCOMPONENT_GETCLOTHINITSTATE_OFFSET UNITYSDK_OFFSET(0x1E87AA00)
#define UNITYENGINE_MDBCOMPONENT_GETCLOTHNUM_OFFSET UNITYSDK_OFFSET(0x1E87A860)
#define UNITYENGINE_MDBCOMPONENT_GETCLOTHSTATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E87AA30)
#define UNITYENGINE_MDBCOMPONENT_GETCLOTHSTATE_OFFSET UNITYSDK_OFFSET(0x1E87AA40)
#define UNITYENGINE_MDBCOMPONENT_GETMANUALSTEPENABLE_OFFSET UNITYSDK_OFFSET(0x1E87A8D0)
#define UNITYENGINE_MDBCOMPONENT_GETMDBCLOTHES_OFFSET UNITYSDK_OFFSET(0x1E87A7A0)
#define UNITYENGINE_MDBCOMPONENT_GETMDBENABLE_OFFSET UNITYSDK_OFFSET(0x1E87A8B0)
#define UNITYENGINE_MDBCOMPONENT_GETSTEPUNITYBONEENABLE_OFFSET UNITYSDK_OFFSET(0x1E87A900)
#define UNITYENGINE_MDBCOMPONENT_GETSTIFFEXPONENTRATE_OFFSET UNITYSDK_OFFSET(0x1E87A980)
#define UNITYENGINE_MDBCOMPONENT_GETTIMESLOWRATE_OFFSET UNITYSDK_OFFSET(0x1E87A960)
#define UNITYENGINE_MDBCOMPONENT_GET_BLEND2ANIMPOSESECONDS_OFFSET UNITYSDK_OFFSET(0x1E87ACA0)
#define UNITYENGINE_MDBCOMPONENT_GET_BLEND2SIMPOSESECONDS_OFFSET UNITYSDK_OFFSET(0x1E87ACC0)
#define UNITYENGINE_MDBCOMPONENT_GET_ENVIRONMENTLODVALUE_OFFSET UNITYSDK_OFFSET(0x1E87A7E0)
#define UNITYENGINE_MDBCOMPONENT_GET_FORCEUSEAVATARPOSITIONENABLE_OFFSET UNITYSDK_OFFSET(0x1E87A800)
#define UNITYENGINE_MDBCOMPONENT_GET_ISMDBUSESKELETONSCALE_OFFSET UNITYSDK_OFFSET(0x1E87A840)
#define UNITYENGINE_MDBCOMPONENT_GET_LAYERINDEX_OFFSET UNITYSDK_OFFSET(0x1E87AC80)
#define UNITYENGINE_MDBCOMPONENT_GET_MDBCLOTHES_OFFSET UNITYSDK_OFFSET(0x1E87A780)
#define UNITYENGINE_MDBCOMPONENT_GET_MDBCLOTHFLAGS_OFFSET UNITYSDK_OFFSET(0x1E87A7C0)
#define UNITYENGINE_MDBCOMPONENT_GET_MDBHUMAN_OFFSET UNITYSDK_OFFSET(0x1E87A760)
#define UNITYENGINE_MDBCOMPONENT_GET_SIMBYREFPOSESETUNITSCALE_OFFSET UNITYSDK_OFFSET(0x1E87A820)
#define UNITYENGINE_MDBCOMPONENT_GET_STATEHASHBLENDANIM_OFFSET UNITYSDK_OFFSET(0x1E87AD00)
#define UNITYENGINE_MDBCOMPONENT_GET_STATEHASHTRANSITEPARAM_OFFSET UNITYSDK_OFFSET(0x1E87AD60)
#define UNITYENGINE_MDBCOMPONENT_GET_STATELISTBLENDANIM_OFFSET UNITYSDK_OFFSET(0x1E87ACE0)
#define UNITYENGINE_MDBCOMPONENT_GET_STATELISTTRANSITEPARAM_OFFSET UNITYSDK_OFFSET(0x1E87AD40)
#define UNITYENGINE_MDBCOMPONENT_GET_TRANSITEPARAMSECONDS_OFFSET UNITYSDK_OFFSET(0x1E87AD20)
#define UNITYENGINE_MDBCOMPONENT_ISCOLWITHSCENE_OFFSET UNITYSDK_OFFSET(0x1E87AB10)
#define UNITYENGINE_MDBCOMPONENT_MANUALSTEP_OFFSET UNITYSDK_OFFSET(0x1E87A8E0)
#define UNITYENGINE_MDBCOMPONENT_REBINDMDB_OFFSET UNITYSDK_OFFSET(0x1E87A870)
#define UNITYENGINE_MDBCOMPONENT_REFRESHSTATEHASH_OFFSET UNITYSDK_OFFSET(0x1E87AD80)
#define UNITYENGINE_MDBCOMPONENT_RELOADHUMANDATA_OFFSET UNITYSDK_OFFSET(0x1E87A880)
#define UNITYENGINE_MDBCOMPONENT_RELOADSINGLECLOTHDATA_OFFSET UNITYSDK_OFFSET(0x1E87A890)
#define UNITYENGINE_MDBCOMPONENT_SETBLENDRATE_OFFSET UNITYSDK_OFFSET(0x1E87A990)
#define UNITYENGINE_MDBCOMPONENT_SETCLOTHLAYER_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E87AA70)
#define UNITYENGINE_MDBCOMPONENT_SETCLOTHLAYER_OFFSET UNITYSDK_OFFSET(0x1E87AA80)
#define UNITYENGINE_MDBCOMPONENT_SETCLOTHSTATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E87AA10)
#define UNITYENGINE_MDBCOMPONENT_SETCLOTHSTATE_OFFSET UNITYSDK_OFFSET(0x1E87AA20)
#define UNITYENGINE_MDBCOMPONENT_SETCLOTHSUPPLYANIM_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E87AA90)
#define UNITYENGINE_MDBCOMPONENT_SETCLOTHSUPPLYANIM_OFFSET UNITYSDK_OFFSET(0x1E87AAA0)
#define UNITYENGINE_MDBCOMPONENT_SETCOLWITHSCENE_OFFSET UNITYSDK_OFFSET(0x1E87AB00)
#define UNITYENGINE_MDBCOMPONENT_SETMANUALSTEPENABLE_OFFSET UNITYSDK_OFFSET(0x1E87A8C0)
#define UNITYENGINE_MDBCOMPONENT_SETMDBCLOTHES_OFFSET UNITYSDK_OFFSET(0x1E87A7B0)
#define UNITYENGINE_MDBCOMPONENT_SETMDBENABLE_OFFSET UNITYSDK_OFFSET(0x1E87A8A0)
#define UNITYENGINE_MDBCOMPONENT_SETMDBLODDISTS_OFFSET UNITYSDK_OFFSET(0x1E87A940)
#define UNITYENGINE_MDBCOMPONENT_SETMDBLOGENABLED_OFFSET UNITYSDK_OFFSET(0x1E87A920)
#define UNITYENGINE_MDBCOMPONENT_SETQUERYSCENE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E87AB20)
#define UNITYENGINE_MDBCOMPONENT_SETQUERYSCENE_OFFSET UNITYSDK_OFFSET(0x1E87AB30)
#define UNITYENGINE_MDBCOMPONENT_SETSTEPUNITYBONEENABLE_OFFSET UNITYSDK_OFFSET(0x1E87A8F0)
#define UNITYENGINE_MDBCOMPONENT_SETSTIFFEXPONENTRATE_OFFSET UNITYSDK_OFFSET(0x1E87A970)
#define UNITYENGINE_MDBCOMPONENT_SETTELEPORTUP_OFFSET UNITYSDK_OFFSET(0x1E87AAD0)
#define UNITYENGINE_MDBCOMPONENT_SETTIMESLOWRATE_OFFSET UNITYSDK_OFFSET(0x1E87A950)
#define UNITYENGINE_MDBCOMPONENT_SETTRANSPORT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E87AAF0)
#define UNITYENGINE_MDBCOMPONENT_SETTRANSPORT_OFFSET UNITYSDK_OFFSET(0x1E87AAE0)
#define UNITYENGINE_MDBCOMPONENT_SET_BLEND2ANIMPOSESECONDS_OFFSET UNITYSDK_OFFSET(0x1E87ACB0)
#define UNITYENGINE_MDBCOMPONENT_SET_BLEND2SIMPOSESECONDS_OFFSET UNITYSDK_OFFSET(0x1E87ACD0)
#define UNITYENGINE_MDBCOMPONENT_SET_ENVIRONMENTLODVALUE_OFFSET UNITYSDK_OFFSET(0x1E87A7F0)
#define UNITYENGINE_MDBCOMPONENT_SET_FORCEUSEAVATARPOSITIONENABLE_OFFSET UNITYSDK_OFFSET(0x1E87A810)
#define UNITYENGINE_MDBCOMPONENT_SET_ISMDBUSESKELETONSCALE_OFFSET UNITYSDK_OFFSET(0x1E87A850)
#define UNITYENGINE_MDBCOMPONENT_SET_LAYERINDEX_OFFSET UNITYSDK_OFFSET(0x1E87AC90)
#define UNITYENGINE_MDBCOMPONENT_SET_MDBCLOTHES_OFFSET UNITYSDK_OFFSET(0x1E87A790)
#define UNITYENGINE_MDBCOMPONENT_SET_MDBCLOTHFLAGS_OFFSET UNITYSDK_OFFSET(0x1E87A7D0)
#define UNITYENGINE_MDBCOMPONENT_SET_MDBHUMAN_OFFSET UNITYSDK_OFFSET(0x1E87A770)
#define UNITYENGINE_MDBCOMPONENT_SET_SIMBYREFPOSESETUNITSCALE_OFFSET UNITYSDK_OFFSET(0x1E87A830)
#define UNITYENGINE_MDBCOMPONENT_SET_STATEHASHBLENDANIM_OFFSET UNITYSDK_OFFSET(0x1E87AD10)
#define UNITYENGINE_MDBCOMPONENT_SET_STATEHASHTRANSITEPARAM_OFFSET UNITYSDK_OFFSET(0x1E87AD70)
#define UNITYENGINE_MDBCOMPONENT_SET_STATELISTBLENDANIM_OFFSET UNITYSDK_OFFSET(0x1E87ACF0)
#define UNITYENGINE_MDBCOMPONENT_SET_STATELISTTRANSITEPARAM_OFFSET UNITYSDK_OFFSET(0x1E87AD50)
#define UNITYENGINE_MDBCOMPONENT_SET_TRANSITEPARAMSECONDS_OFFSET UNITYSDK_OFFSET(0x1E87AD30)
#define UNITYENGINE_MDBCOMPONENT_TELEPORT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E87AAC0)
#define UNITYENGINE_MDBCOMPONENT_TELEPORT_OFFSET UNITYSDK_OFFSET(0x1E87AAB0)
#define UNITYENGINE_MDBCOMPONENT_TRANSITECLOTHSTATESECONDS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E87AA50)
#define UNITYENGINE_MDBCOMPONENT_TRANSITECLOTHSTATESECONDS_OFFSET UNITYSDK_OFFSET(0x1E87AA60)
#define UNITYENGINE_MDBCOMPONENT_UNITYBONESTEP_OFFSET UNITYSDK_OFFSET(0x1E87A910)
#define UNITYENGINE_MDBCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E87AD90)

namespace UnityEngine
{
	inline static constexpr unsigned int MdbComponent_TypeDefinitionIndex = 39291;

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
