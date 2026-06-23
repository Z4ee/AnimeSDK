#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace miHoYoEmotion { class BaseShape; }
namespace miHoYoEmotion { class ElementManager; }
namespace miHoYoEmotion { class EmoTrack; }
namespace miHoYoEmotion { class EmoTrack_EmoVoidHandler; }
namespace miHoYoEmotion { class SequenceBakeData; }
namespace miHoYoEmotion { class SequenceBakeData_BakeData; }

#define MIHOYOEMOTION_BASEEMOANIMATION_ADDTRACK_OFFSET UNITYSDK_OFFSET(0x1BAE0D30)
#define MIHOYOEMOTION_BASEEMOANIMATION_APPENDSHAPE_OFFSET UNITYSDK_OFFSET(0x1BAE1950)
#define MIHOYOEMOTION_BASEEMOANIMATION_APPLY_OFFSET UNITYSDK_OFFSET(0x1BAE10A0)
#define MIHOYOEMOTION_BASEEMOANIMATION_CALLALLFINISHHANDLER_OFFSET UNITYSDK_OFFSET(0x1BAE1650)
#define MIHOYOEMOTION_BASEEMOANIMATION_CALLFINISHHANDLER_OFFSET UNITYSDK_OFFSET(0x1BAE15E0)
#define MIHOYOEMOTION_BASEEMOANIMATION_CLEARSHAPEONLY_OFFSET UNITYSDK_OFFSET(0x1BAE1A50)
#define MIHOYOEMOTION_BASEEMOANIMATION_CLEARSHAPE_OFFSET UNITYSDK_OFFSET(0x1BAE19E0)
#define MIHOYOEMOTION_BASEEMOANIMATION_ENABLESHAPE_OFFSET UNITYSDK_OFFSET(0x1BAE1830)
#define MIHOYOEMOTION_BASEEMOANIMATION_GETCURSHAPE_OFFSET UNITYSDK_OFFSET(0x1BAE16E0)
#define MIHOYOEMOTION_BASEEMOANIMATION_GETTRACK_OFFSET UNITYSDK_OFFSET(0x1BAE0E40)
#define MIHOYOEMOTION_BASEEMOANIMATION_GET_MANAGER_OFFSET UNITYSDK_OFFSET(0x1BAE0D20)
#define MIHOYOEMOTION_BASEEMOANIMATION_INIT_OFFSET UNITYSDK_OFFSET(0x1BAE0EE0)
#define MIHOYOEMOTION_BASEEMOANIMATION_INTERRUPTBLINK_OFFSET UNITYSDK_OFFSET(0x1BAE1EA0)
#define MIHOYOEMOTION_BASEEMOANIMATION_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x1BAE2200)
#define MIHOYOEMOTION_BASEEMOANIMATION_ISTRACKPLAYING_OFFSET UNITYSDK_OFFSET(0x1BAE1AC0)
#define MIHOYOEMOTION_BASEEMOANIMATION_PLAYATTIME_OFFSET UNITYSDK_OFFSET(0x1BAE1F30)
#define MIHOYOEMOTION_BASEEMOANIMATION_PLAYBAKEDSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1BAE1B30)
#define MIHOYOEMOTION_BASEEMOANIMATION_PLAYDEFAULT_OFFSET UNITYSDK_OFFSET(0x1BAE18C0)
#define MIHOYOEMOTION_BASEEMOANIMATION_PLAYTRACKATTIME_OFFSET UNITYSDK_OFFSET(0x1BAE20D0)
#define MIHOYOEMOTION_BASEEMOANIMATION_REFRESHSTOPSHAPEVALUES_OFFSET UNITYSDK_OFFSET(0x1BAE11F0)
#define MIHOYOEMOTION_BASEEMOANIMATION_REGISTERFINISHHANDLER_OFFSET UNITYSDK_OFFSET(0x1BAE14E0)
#define MIHOYOEMOTION_BASEEMOANIMATION_SETCURSHAPE_OFFSET UNITYSDK_OFFSET(0x1BAE17B0)
#define MIHOYOEMOTION_BASEEMOANIMATION_SETEMOTIONSTOPPED_OFFSET UNITYSDK_OFFSET(0x1BAE1E00)
#define MIHOYOEMOTION_BASEEMOANIMATION_SETFACIALKEY_OFFSET UNITYSDK_OFFSET(0x1BAE1CA0)
#define MIHOYOEMOTION_BASEEMOANIMATION_SETPOSEKEY_OFFSET UNITYSDK_OFFSET(0x1BAE1C30)
#define MIHOYOEMOTION_BASEEMOANIMATION_STOPSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1BAE2170)
#define MIHOYOEMOTION_BASEEMOANIMATION_TOGGLEEYECTRL_OFFSET UNITYSDK_OFFSET(0x1BAE1D10)
#define MIHOYOEMOTION_BASEEMOANIMATION_TOGGLEPAUSEBLINK_OFFSET UNITYSDK_OFFSET(0x1BAE1D90)
#define MIHOYOEMOTION_BASEEMOANIMATION_TOGGLEPAUSE_OFFSET UNITYSDK_OFFSET(0x1BAE1BC0)
#define MIHOYOEMOTION_BASEEMOANIMATION_UNREGISTERFINISHHANDLER_OFFSET UNITYSDK_OFFSET(0x1BAE1560)
#define MIHOYOEMOTION_BASEEMOANIMATION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BAE0F30)
#define MIHOYOEMOTION_BASEEMOANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAE2290)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int BaseEmoAnimation_TypeDefinitionIndex = 39400;

	class BaseEmoAnimation : public ::System::Object
	{
	public:
		::miHoYoEmotion::ElementManager* _manager; // 0x10
		::System::Collections::Generic::List_1<::miHoYoEmotion::EmoTrack*>* _trackList; // 0x18
		::System::Boolean paused; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEEMOANIMATION__CTOR_OFFSET))(this);
		}

		::miHoYoEmotion::ElementManager* get_manager()
		{
			return ((::miHoYoEmotion::ElementManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEEMOANIMATION_GET_MANAGER_OFFSET))(this);
		}

		::System::Void AddTrack(::System::Int32 trackIndex, ::miHoYoEmotion::EmoTrack* track)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::miHoYoEmotion::EmoTrack*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEEMOANIMATION_ADDTRACK_OFFSET))(this, trackIndex, track);
		}

		::miHoYoEmotion::EmoTrack* GetTrack(::System::Int32 trackIndex)
		{
			return ((::miHoYoEmotion::EmoTrack*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEEMOANIMATION_GETTRACK_OFFSET))(this, trackIndex);
		}

		::System::Void Init(::miHoYoEmotion::ElementManager* elemManager)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::ElementManager*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEEMOANIMATION_INIT_OFFSET))(this, elemManager);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEEMOANIMATION_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void Apply()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEEMOANIMATION_APPLY_OFFSET))(this);
		}

		::System::Void RefreshStopShapeValues()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEEMOANIMATION_REFRESHSTOPSHAPEVALUES_OFFSET))(this);
		}

		::System::Void RegisterFinishHandler(::miHoYoEmotion::EmoTrack_EmoVoidHandler* handler, ::System::Int32 trackIndex)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::EmoTrack_EmoVoidHandler*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEEMOANIMATION_REGISTERFINISHHANDLER_OFFSET))(this, handler, trackIndex);
		}

		::System::Void UnregisterFinishHandler(::miHoYoEmotion::EmoTrack_EmoVoidHandler* handler, ::System::Int32 trackIndex)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::EmoTrack_EmoVoidHandler*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEEMOANIMATION_UNREGISTERFINISHHANDLER_OFFSET))(this, handler, trackIndex);
		}

		::System::Void CallFinishHandler(::System::Int32 trackIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEEMOANIMATION_CALLFINISHHANDLER_OFFSET))(this, trackIndex);
		}

		::System::Void CallAllFinishHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEEMOANIMATION_CALLALLFINISHHANDLER_OFFSET))(this);
		}

		::miHoYoEmotion::BaseShape* GetCurShape(::System::Int32 trackIndex)
		{
			return ((::miHoYoEmotion::BaseShape*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEEMOANIMATION_GETCURSHAPE_OFFSET))(this, trackIndex);
		}

		::System::Void SetCurShape(::miHoYoEmotion::BaseShape* shape, ::System::Int32 trackIndex)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::BaseShape*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEEMOANIMATION_SETCURSHAPE_OFFSET))(this, shape, trackIndex);
		}

		::System::Void EnableShape(::miHoYoEmotion::BaseShape* shape, ::System::Single startTime, ::System::Int32 trackIndex)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::BaseShape*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEEMOANIMATION_ENABLESHAPE_OFFSET))(this, shape, startTime, trackIndex);
		}

		::System::Void PlayDefault(::miHoYoEmotion::BaseShape* shape, ::System::Int32 trackIndex, ::System::String* postToPlay)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::BaseShape*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEEMOANIMATION_PLAYDEFAULT_OFFSET))(this, shape, trackIndex, postToPlay);
		}

		::System::Void AppendShape(::miHoYoEmotion::BaseShape* shape, ::System::Single startTime, ::System::Int32 trackIndex)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::BaseShape*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEEMOANIMATION_APPENDSHAPE_OFFSET))(this, shape, startTime, trackIndex);
		}

		::System::Void ClearShape(::System::Int32 trackIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEEMOANIMATION_CLEARSHAPE_OFFSET))(this, trackIndex);
		}

		::System::Void ClearShapeOnly(::System::Int32 trackIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEEMOANIMATION_CLEARSHAPEONLY_OFFSET))(this, trackIndex);
		}

		::System::Boolean IsTrackPlaying(::System::Int32 trackIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEEMOANIMATION_ISTRACKPLAYING_OFFSET))(this, trackIndex);
		}

		::System::Void PlayBakedSequence(::miHoYoEmotion::SequenceBakeData* bakeData)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::SequenceBakeData*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEEMOANIMATION_PLAYBAKEDSEQUENCE_OFFSET))(this, bakeData);
		}

		::System::Void TogglePause(::System::Boolean toggle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEEMOANIMATION_TOGGLEPAUSE_OFFSET))(this, toggle);
		}

		::System::Void SetPoseKey(::System::String* poseKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEEMOANIMATION_SETPOSEKEY_OFFSET))(this, poseKey);
		}

		::System::Void SetFacialKey(::System::String* facialKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEEMOANIMATION_SETFACIALKEY_OFFSET))(this, facialKey);
		}

		::System::Void ToggleEyeCtrl(::System::Boolean toggle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEEMOANIMATION_TOGGLEEYECTRL_OFFSET))(this, toggle);
		}

		::System::Void TogglePauseBlink(::System::Boolean toggle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEEMOANIMATION_TOGGLEPAUSEBLINK_OFFSET))(this, toggle);
		}

		::System::Void SetEmotionStopped(::System::Boolean stopped, ::System::Boolean interrupted, ::System::Single stopTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEEMOANIMATION_SETEMOTIONSTOPPED_OFFSET))(this, stopped, interrupted, stopTime);
		}

		::System::Void InterruptBlink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEEMOANIMATION_INTERRUPTBLINK_OFFSET))(this);
		}

		::System::Void PlayAtTime(::miHoYoEmotion::SequenceBakeData* bakeData, ::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::SequenceBakeData*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEEMOANIMATION_PLAYATTIME_OFFSET))(this, bakeData, time);
		}

		static ::System::Void PlayTrackAtTime(::miHoYoEmotion::SequenceBakeData_BakeData* bakeData, ::miHoYoEmotion::EmoTrack* track, ::System::Single time)
		{
			return ((::System::Void(*)(::miHoYoEmotion::SequenceBakeData_BakeData*, ::miHoYoEmotion::EmoTrack*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEEMOANIMATION_PLAYTRACKATTIME_OFFSET))(bakeData, track, time);
		}

		::System::Void StopSequence()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEEMOANIMATION_STOPSEQUENCE_OFFSET))(this);
		}

		::System::Void Interrupt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BASEEMOANIMATION_INTERRUPT_OFFSET))(this);
		}
	};
}
