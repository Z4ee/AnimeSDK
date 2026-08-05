#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/miHoYoEmotion/ClipEmoTrack_ClipCell.h"
#include "unitysdk/miHoYoEmotion/EmoTrack.h"
#include "unitysdk/miHoYoEmotion/TransitionType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace miHoYoEmotion { class BaseShape; }
namespace miHoYoEmotion { class ClipShapeCurveCell; }
namespace miHoYoEmotion { class ClipShapeManager; }
namespace miHoYoEmotion { class ClipShapeManager_CurveBinding; }
namespace miHoYoEmotion { class ElementManager; }
namespace miHoYoEmotion { class SequenceBakeData_BakeData; }
namespace miHoYoEmotion { class SequenceClipBakeData_BakeData; }

#define MIHOYOEMOTION_CLIPEMOTRACK_ADDCURVE_OFFSET UNITYSDK_OFFSET(0x1D02DCE0)
#define MIHOYOEMOTION_CLIPEMOTRACK_ADDINDEX_OFFSET UNITYSDK_OFFSET(0x1D027F10)
#define MIHOYOEMOTION_CLIPEMOTRACK_ADDSTOPCURVEBINDING_OFFSET UNITYSDK_OFFSET(0x1D031310)
#define MIHOYOEMOTION_CLIPEMOTRACK_APPLY_OFFSET UNITYSDK_OFFSET(0x1D032D50)
#define MIHOYOEMOTION_CLIPEMOTRACK_BUILDPRECURVE_OFFSET UNITYSDK_OFFSET(0x1D028720)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLEARCURVE_OFFSET UNITYSDK_OFFSET(0x1D02CAB0)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLEARINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D02C9C0)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLEARSHAPEONLY_OFFSET UNITYSDK_OFFSET(0x1D02CC10)
#define MIHOYOEMOTION_CLIPEMOTRACK_CLEARSHAPE_OFFSET UNITYSDK_OFFSET(0x1D02C7C0)
#define MIHOYOEMOTION_CLIPEMOTRACK_ENABLESHAPE_OFFSET UNITYSDK_OFFSET(0x1D029CD0)
#define MIHOYOEMOTION_CLIPEMOTRACK_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1D032CE0)
#define MIHOYOEMOTION_CLIPEMOTRACK_GETCELLBYSHAPE_OFFSET UNITYSDK_OFFSET(0x1D027F80)
#define MIHOYOEMOTION_CLIPEMOTRACK_GETCELL_OFFSET UNITYSDK_OFFSET(0x1D028010)
#define MIHOYOEMOTION_CLIPEMOTRACK_GETINDEX_OFFSET UNITYSDK_OFFSET(0x1D027E70)
#define MIHOYOEMOTION_CLIPEMOTRACK_HIGHMOODADDCURVE_OFFSET UNITYSDK_OFFSET(0x1D030A60)
#define MIHOYOEMOTION_CLIPEMOTRACK_INIT_OFFSET UNITYSDK_OFFSET(0x1D027D80)
#define MIHOYOEMOTION_CLIPEMOTRACK_ISMATCHBLENDNAME_OFFSET UNITYSDK_OFFSET(0x1D02DB90)
#define MIHOYOEMOTION_CLIPEMOTRACK_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1D032360)
#define MIHOYOEMOTION_CLIPEMOTRACK_ISPOST_OFFSET UNITYSDK_OFFSET(0x1D0280E0)
#define MIHOYOEMOTION_CLIPEMOTRACK_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x1D032300)
#define MIHOYOEMOTION_CLIPEMOTRACK_ISTOFINAL_OFFSET UNITYSDK_OFFSET(0x1D0282D0)
#define MIHOYOEMOTION_CLIPEMOTRACK_LOWMOODADDCURVE_OFFSET UNITYSDK_OFFSET(0x1D02FB20)
#define MIHOYOEMOTION_CLIPEMOTRACK_MERGECURCURVE_OFFSET UNITYSDK_OFFSET(0x1D029EE0)
#define MIHOYOEMOTION_CLIPEMOTRACK_MERGECURVE_OFFSET UNITYSDK_OFFSET(0x1D029460)
#define MIHOYOEMOTION_CLIPEMOTRACK_PLAYBAKEDSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1D02CCF0)
#define MIHOYOEMOTION_CLIPEMOTRACK_PLAYDEFAULT_OFFSET UNITYSDK_OFFSET(0x1D028470)
#define MIHOYOEMOTION_CLIPEMOTRACK_PRECLEARINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D032290)
#define MIHOYOEMOTION_CLIPEMOTRACK_REFRESHSTOPSHAPEVALUES_OFFSET UNITYSDK_OFFSET(0x1D0247A0)
#define MIHOYOEMOTION_CLIPEMOTRACK_SMOOTHCURVESBEGINNING_OFFSET UNITYSDK_OFFSET(0x1D02EF30)
#define MIHOYOEMOTION_CLIPEMOTRACK_STOPSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1D0321E0)
#define MIHOYOEMOTION_CLIPEMOTRACK_UPDATECURVEVALUE_OFFSET UNITYSDK_OFFSET(0x1D0323B0)
#define MIHOYOEMOTION_CLIPEMOTRACK_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D032B20)
#define MIHOYOEMOTION_CLIPEMOTRACK__ADDSTOPCURVEBINDING_B__34_1_OFFSET UNITYSDK_OFFSET(0x1D033400)
#define MIHOYOEMOTION_CLIPEMOTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0268E0)
#define MIHOYOEMOTION_CLIPEMOTRACK___BASE_APPLY_OFFSET UNITYSDK_OFFSET(0x1D033440)
#define MIHOYOEMOTION_CLIPEMOTRACK___BASE_CLEARSHAPEONLY_OFFSET UNITYSDK_OFFSET(0x1D033570)
#define MIHOYOEMOTION_CLIPEMOTRACK___BASE_CLEARSHAPE_OFFSET UNITYSDK_OFFSET(0x1D0334D0)
#define MIHOYOEMOTION_CLIPEMOTRACK___BASE_ENABLESHAPE_OFFSET UNITYSDK_OFFSET(0x1D033610)
#define MIHOYOEMOTION_CLIPEMOTRACK___BASE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1D033730)
#define MIHOYOEMOTION_CLIPEMOTRACK___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x1D033830)
#define MIHOYOEMOTION_CLIPEMOTRACK___BASE_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1D0338D0)
#define MIHOYOEMOTION_CLIPEMOTRACK___BASE_PLAYBAKEDSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1D0339A0)
#define MIHOYOEMOTION_CLIPEMOTRACK___BASE_PLAYDEFAULT_OFFSET UNITYSDK_OFFSET(0x1D033A80)
#define MIHOYOEMOTION_CLIPEMOTRACK___BASE_STOPSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1D033B30)
#define MIHOYOEMOTION_CLIPEMOTRACK___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D033BC0)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int ClipEmoTrack_TypeDefinitionIndex = 40056;

	class ClipEmoTrack : public ::miHoYoEmotion::EmoTrack
	{
	public:
		::System::Collections::Generic::SortedList_2<::System::Int32, ::UnityEngine::AnimationCurve*>* _curveDict; // 0x58
		::System::Collections::Generic::List_1<::miHoYoEmotion::ClipShapeManager_CurveBinding*>* _stopCurveBindings; // 0x60
		::System::Collections::Generic::List_1<::System::Single>* _stopCurveValues; // 0x68
		::System::Collections::Generic::List_1<::miHoYoEmotion::ClipShapeManager_CurveBinding*>* _curveBindings; // 0x70
		::System::Collections::Generic::IEnumerable_1<::System::Int32>* _stopCurrIndexList; // 0x78
		::System::Collections::Generic::List_1<::UnityEngine::AnimationCurve*>* _animCurves; // 0x80
		::miHoYoEmotion::SequenceClipBakeData_BakeData* _lastBakeData; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* _stopShapeValues; // 0x90
		::miHoYoEmotion::ClipShapeManager* _clipManager; // 0x98
		::System::Collections::Generic::List_1<::System::Single>* _curveValues; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _indexRes2IndexCurveDict; // 0xA8
		::System::Single _clipLength; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK__CTOR_OFFSET))(this);
		}

		::System::Void Init(::miHoYoEmotion::ElementManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::ElementManager*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_INIT_OFFSET))(this, manager);
		}

		::System::Int32 GetIndex(::System::Int32 indexRes)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_GETINDEX_OFFSET))(this, indexRes);
		}

		::System::Void AddIndex(::System::Int32 indexRes, ::System::Int32 indexCurve)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_ADDINDEX_OFFSET))(this, indexRes, indexCurve);
		}

		::miHoYoEmotion::ClipEmoTrack_ClipCell GetCellByShape(::miHoYoEmotion::BaseShape* shape)
		{
			return ((::miHoYoEmotion::ClipEmoTrack_ClipCell(*)(::PVOID, ::miHoYoEmotion::BaseShape*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_GETCELLBYSHAPE_OFFSET))(this, shape);
		}

		::miHoYoEmotion::ClipEmoTrack_ClipCell GetCell(::System::String* name)
		{
			return ((::miHoYoEmotion::ClipEmoTrack_ClipCell(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_GETCELL_OFFSET))(this, name);
		}

		::System::Boolean IsPost(::miHoYoEmotion::ClipEmoTrack_ClipCell& fromCell, ::miHoYoEmotion::ClipEmoTrack_ClipCell& toCell)
		{
			return ((::System::Boolean(*)(::PVOID, ::miHoYoEmotion::ClipEmoTrack_ClipCell&, ::miHoYoEmotion::ClipEmoTrack_ClipCell&))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_ISPOST_OFFSET))(this, fromCell, toCell);
		}

		::System::Boolean IsToFinal(::miHoYoEmotion::ClipEmoTrack_ClipCell& fromCell, ::miHoYoEmotion::ClipEmoTrack_ClipCell& toCell)
		{
			return ((::System::Boolean(*)(::PVOID, ::miHoYoEmotion::ClipEmoTrack_ClipCell&, ::miHoYoEmotion::ClipEmoTrack_ClipCell&))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_ISTOFINAL_OFFSET))(this, fromCell, toCell);
		}

		::System::Void PlayDefault(::miHoYoEmotion::BaseShape* shape, ::System::String* postToPlay)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::BaseShape*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_PLAYDEFAULT_OFFSET))(this, shape, postToPlay);
		}

		::System::Void EnableShape(::miHoYoEmotion::BaseShape* shape, ::System::Single startTime)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::BaseShape*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_ENABLESHAPE_OFFSET))(this, shape, startTime);
		}

		::System::Void BuildPreCurve(::miHoYoEmotion::ClipEmoTrack_ClipCell& preCell, ::miHoYoEmotion::ClipEmoTrack_ClipCell& curCell, ::System::Single& postTime, ::System::Single defaultPostTime)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::ClipEmoTrack_ClipCell&, ::miHoYoEmotion::ClipEmoTrack_ClipCell&, ::System::Single&, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_BUILDPRECURVE_OFFSET))(this, preCell, curCell, postTime, defaultPostTime);
		}

		::System::Void MergeCurCurve(::miHoYoEmotion::ClipEmoTrack_ClipCell& preCell, ::miHoYoEmotion::ClipEmoTrack_ClipCell& curCell, ::System::Single postTime)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::ClipEmoTrack_ClipCell&, ::miHoYoEmotion::ClipEmoTrack_ClipCell&, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_MERGECURCURVE_OFFSET))(this, preCell, curCell, postTime);
		}

		::System::Void MergeCurve(::miHoYoEmotion::ClipShapeCurveCell* curveCell, ::miHoYoEmotion::ClipShapeManager_CurveBinding* binding, ::System::Single postTime, ::System::Boolean isToFinal, ::System::Boolean clearPrecurve)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::ClipShapeCurveCell*, ::miHoYoEmotion::ClipShapeManager_CurveBinding*, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_MERGECURVE_OFFSET))(this, curveCell, binding, postTime, isToFinal, clearPrecurve);
		}

		::System::Void ClearShape()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLEARSHAPE_OFFSET))(this);
		}

		::System::Void ClearInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLEARINTERNAL_OFFSET))(this);
		}

		::System::Void ClearCurve()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLEARCURVE_OFFSET))(this);
		}

		::System::Void ClearShapeOnly()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_CLEARSHAPEONLY_OFFSET))(this);
		}

		::System::Void PlayBakedSequence(::miHoYoEmotion::SequenceBakeData_BakeData* bakeData)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::SequenceBakeData_BakeData*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_PLAYBAKEDSEQUENCE_OFFSET))(this, bakeData);
		}

		::System::Void AddCurve(::System::Collections::Generic::IEnumerable_1<::miHoYoEmotion::ClipShapeCurveCell*>* bakeCurves, ::System::Single length, ::System::Boolean matchBlendName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::miHoYoEmotion::ClipShapeCurveCell*>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_ADDCURVE_OFFSET))(this, bakeCurves, length, matchBlendName);
		}

		::System::Void LowMoodAddCurve(::System::Collections::Generic::IEnumerable_1<::miHoYoEmotion::ClipShapeCurveCell*>* bakeCurves, ::System::Single length, ::System::Boolean matchBlendName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::miHoYoEmotion::ClipShapeCurveCell*>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_LOWMOODADDCURVE_OFFSET))(this, bakeCurves, length, matchBlendName);
		}

		::System::Void HighMoodAddCurve(::System::Collections::Generic::IEnumerable_1<::miHoYoEmotion::ClipShapeCurveCell*>* bakeCurves, ::System::Boolean matchBlendName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::miHoYoEmotion::ClipShapeCurveCell*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_HIGHMOODADDCURVE_OFFSET))(this, bakeCurves, matchBlendName);
		}

		::System::Boolean IsMatchBlendName(::System::Collections::Generic::IEnumerable_1<::miHoYoEmotion::ClipShapeCurveCell*>* bakeCurves)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::miHoYoEmotion::ClipShapeCurveCell*>*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_ISMATCHBLENDNAME_OFFSET))(this, bakeCurves);
		}

		::System::Void RefreshStopShapeValues(::miHoYoEmotion::SequenceClipBakeData_BakeData* clipBakeData, ::System::Boolean matchBlendName)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::SequenceClipBakeData_BakeData*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_REFRESHSTOPSHAPEVALUES_OFFSET))(this, clipBakeData, matchBlendName);
		}

		::System::Void AddStopCurveBinding(::miHoYoEmotion::SequenceClipBakeData_BakeData* clipBakeData, ::System::String* emotionKey, ::System::Boolean matchBlendName)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::SequenceClipBakeData_BakeData*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_ADDSTOPCURVEBINDING_OFFSET))(this, clipBakeData, emotionKey, matchBlendName);
		}

		::System::Void SmoothCurvesBeginning(::miHoYoEmotion::TransitionType transitionType, ::System::Collections::Generic::List_1<::UnityEngine::AnimationCurve*>* curves, ::System::Collections::Generic::List_1<::miHoYoEmotion::ClipShapeManager_CurveBinding*>* bindings)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::TransitionType, ::System::Collections::Generic::List_1<::UnityEngine::AnimationCurve*>*, ::System::Collections::Generic::List_1<::miHoYoEmotion::ClipShapeManager_CurveBinding*>*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_SMOOTHCURVESBEGINNING_OFFSET))(this, transitionType, curves, bindings);
		}

		::System::Void StopSequence()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_STOPSEQUENCE_OFFSET))(this);
		}

		::System::Void PreClearInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_PRECLEARINTERNAL_OFFSET))(this);
		}

		::System::Boolean IsRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_ISRUNNING_OFFSET))(this);
		}

		::System::Boolean IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_ISPLAYING_OFFSET))(this);
		}

		::System::Void UpdateCurveValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_UPDATECURVEVALUE_OFFSET))(this);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void Evaluate(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_EVALUATE_OFFSET))(this, time);
		}

		::System::Void Apply()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK_APPLY_OFFSET))(this);
		}

		::System::Boolean _AddStopCurveBinding_b__34_1(::System::Int32 k)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK__ADDSTOPCURVEBINDING_B__34_1_OFFSET))(this, k);
		}

		::System::Void __base_Apply()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK___BASE_APPLY_OFFSET))(this);
		}

		::System::Void __base_ClearShape()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK___BASE_CLEARSHAPE_OFFSET))(this);
		}

		::System::Void __base_ClearShapeOnly()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK___BASE_CLEARSHAPEONLY_OFFSET))(this);
		}

		::System::Void __base_EnableShape(::miHoYoEmotion::BaseShape* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::BaseShape*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK___BASE_ENABLESHAPE_OFFSET))(this, P0, P1);
		}

		::System::Void __base_Evaluate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK___BASE_EVALUATE_OFFSET))(this, P0);
		}

		::System::Void __base_Init(::miHoYoEmotion::ElementManager* P0)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::ElementManager*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK___BASE_INIT_OFFSET))(this, P0);
		}

		::System::Boolean __base_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK___BASE_ISPLAYING_OFFSET))(this);
		}

		::System::Void __base_PlayBakedSequence(::miHoYoEmotion::SequenceBakeData_BakeData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::SequenceBakeData_BakeData*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK___BASE_PLAYBAKEDSEQUENCE_OFFSET))(this, P0);
		}

		::System::Void __base_PlayDefault(::miHoYoEmotion::BaseShape* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::BaseShape*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK___BASE_PLAYDEFAULT_OFFSET))(this, P0, P1);
		}

		::System::Void __base_StopSequence()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK___BASE_STOPSEQUENCE_OFFSET))(this);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOTRACK___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
