#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace miHoYoEmotion { class BaseShape; }
namespace miHoYoEmotion { class ElementManager; }
namespace miHoYoEmotion { class EmoTrack_EmoVoidHandler; }
namespace miHoYoEmotion { class SequenceBakeData_BakeData; }

#define MIHOYOEMOTION_EMOTRACK_APPENDSHAPE_OFFSET UNITYSDK_OFFSET(0x1BAFE5B0)
#define MIHOYOEMOTION_EMOTRACK_APPLY_OFFSET UNITYSDK_OFFSET(0x1BAE4810)
#define MIHOYOEMOTION_EMOTRACK_CALLFINISHHANDLER_OFFSET UNITYSDK_OFFSET(0x1BAEFBC0)
#define MIHOYOEMOTION_EMOTRACK_CLEARSHAPEONLY_OFFSET UNITYSDK_OFFSET(0x1BAE9A60)
#define MIHOYOEMOTION_EMOTRACK_CLEARSHAPE_OFFSET UNITYSDK_OFFSET(0x1BAE9730)
#define MIHOYOEMOTION_EMOTRACK_ENABLESHAPE_OFFSET UNITYSDK_OFFSET(0x1BAF05E0)
#define MIHOYOEMOTION_EMOTRACK_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1BAF06F0)
#define MIHOYOEMOTION_EMOTRACK_GETCURSHAPE_OFFSET UNITYSDK_OFFSET(0x1BAE1770)
#define MIHOYOEMOTION_EMOTRACK_INIT_OFFSET UNITYSDK_OFFSET(0x1BAE3C90)
#define MIHOYOEMOTION_EMOTRACK_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x1BAFE610)
#define MIHOYOEMOTION_EMOTRACK_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1BAF0880)
#define MIHOYOEMOTION_EMOTRACK_PLAYBAKEDSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1BAF0950)
#define MIHOYOEMOTION_EMOTRACK_PLAYDEFAULT_OFFSET UNITYSDK_OFFSET(0x1BAE5350)
#define MIHOYOEMOTION_EMOTRACK_REGISTERFINISHHANDLER_OFFSET UNITYSDK_OFFSET(0x1BAFE3F0)
#define MIHOYOEMOTION_EMOTRACK_SETCURSHAPE_OFFSET UNITYSDK_OFFSET(0x1BAFE550)
#define MIHOYOEMOTION_EMOTRACK_STOPSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1BAEF180)
#define MIHOYOEMOTION_EMOTRACK_UNREGISTERFINISHHANDLER_OFFSET UNITYSDK_OFFSET(0x1BAFE4A0)
#define MIHOYOEMOTION_EMOTRACK_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BAE4990)
#define MIHOYOEMOTION_EMOTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAE46F0)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int EmoTrack_TypeDefinitionIndex = 39376;

	class EmoTrack : public ::System::Object
	{
	public:
		// static const ::System::String* POSE_IDLE; // 0x0
		// static const ::System::Single DEFAULT_POST_TIME; // 0x0
		// static const ::System::Single DEFAULT_BLEND_TIME; // 0x0
		// static const ::System::Single STOP_BLEND_TIME; // 0x0
		// static const ::System::Single INTERRUPT_BLEND_TIME; // 0x0
		// static const ::System::Int32 TRACK_EMOTION = 0x0; // 0x0
		// static const ::System::Int32 TRACK_BLINK = 0x1; // 0x0
		// static const ::System::Int32 TRACK_PHONEME = 0x2; // 0x0
		// static const ::System::Int32 TRACK_EYE_CTRL = 0x3; // 0x0
		::System::String* _curTag; // 0x10
		::miHoYoEmotion::EmoTrack_EmoVoidHandler* _finishHandler; // 0x18
		::System::String* currPose; // 0x20
		::miHoYoEmotion::BaseShape* _preShape; // 0x28
		::System::String* currFacial; // 0x30
		::miHoYoEmotion::ElementManager* _manager; // 0x38
		::miHoYoEmotion::BaseShape* _curShape; // 0x40
		::System::Boolean _isTobeFinished; // 0x48
		::System::Boolean isPaused; // 0x49
		::System::Boolean isInterrupted; // 0x4A
		::System::Boolean isStopped; // 0x4B
		::System::Single stopTime; // 0x4C
		::System::Single _timeCnt; // 0x50
		::System::Single _timeLength; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK__CTOR_OFFSET))(this);
		}

		::System::Void Init(::miHoYoEmotion::ElementManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::ElementManager*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_INIT_OFFSET))(this, manager);
		}

		::System::Boolean IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_ISPLAYING_OFFSET))(this);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void Apply()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_APPLY_OFFSET))(this);
		}

		::System::Void Evaluate(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_EVALUATE_OFFSET))(this, time);
		}

		::System::Void RegisterFinishHandler(::miHoYoEmotion::EmoTrack_EmoVoidHandler* handler)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::EmoTrack_EmoVoidHandler*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_REGISTERFINISHHANDLER_OFFSET))(this, handler);
		}

		::System::Void UnregisterFinishHandler(::miHoYoEmotion::EmoTrack_EmoVoidHandler* handler)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::EmoTrack_EmoVoidHandler*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_UNREGISTERFINISHHANDLER_OFFSET))(this, handler);
		}

		::System::Void CallFinishHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_CALLFINISHHANDLER_OFFSET))(this);
		}

		::miHoYoEmotion::BaseShape* GetCurShape()
		{
			return ((::miHoYoEmotion::BaseShape*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_GETCURSHAPE_OFFSET))(this);
		}

		::System::Void SetCurShape(::miHoYoEmotion::BaseShape* shape)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::BaseShape*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_SETCURSHAPE_OFFSET))(this, shape);
		}

		::System::Void EnableShape(::miHoYoEmotion::BaseShape* shape, ::System::Single startTime)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::BaseShape*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_ENABLESHAPE_OFFSET))(this, shape, startTime);
		}

		::System::Void PlayDefault(::miHoYoEmotion::BaseShape* shape, ::System::String* postToPlay)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::BaseShape*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_PLAYDEFAULT_OFFSET))(this, shape, postToPlay);
		}

		::System::Void AppendShape(::miHoYoEmotion::BaseShape* shape, ::System::Single startTime)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::BaseShape*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_APPENDSHAPE_OFFSET))(this, shape, startTime);
		}

		::System::Void ClearShape()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_CLEARSHAPE_OFFSET))(this);
		}

		::System::Void ClearShapeOnly()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_CLEARSHAPEONLY_OFFSET))(this);
		}

		::System::Void PlayBakedSequence(::miHoYoEmotion::SequenceBakeData_BakeData* bakeData)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::SequenceBakeData_BakeData*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_PLAYBAKEDSEQUENCE_OFFSET))(this, bakeData);
		}

		::System::Void StopSequence()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_STOPSEQUENCE_OFFSET))(this);
		}

		::System::Void Interrupt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOTRACK_INTERRUPT_OFFSET))(this);
		}
	};
}
