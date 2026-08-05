#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/miHoYoEmotion/EmoStateManager_EmoState.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace miHoYoEmotion { class EmoTrack_EmoVoidHandler; }

#define MIHOYOEMOTION_EMOSTATEMANAGER_CALLSTATECLEARHANDLER_OFFSET UNITYSDK_OFFSET(0x1D03C410)
#define MIHOYOEMOTION_EMOSTATEMANAGER_CLEARSTATECLEARHANDLER_OFFSET UNITYSDK_OFFSET(0x1D03C6D0)
#define MIHOYOEMOTION_EMOSTATEMANAGER_CLEARSTATE_OFFSET UNITYSDK_OFFSET(0x1D03C180)
#define MIHOYOEMOTION_EMOSTATEMANAGER_INSTATE_OFFSET UNITYSDK_OFFSET(0x1D03C310)
#define MIHOYOEMOTION_EMOSTATEMANAGER_SETSTATECLEARHANDLER_OFFSET UNITYSDK_OFFSET(0x1D03C510)
#define MIHOYOEMOTION_EMOSTATEMANAGER_SETSTATE_OFFSET UNITYSDK_OFFSET(0x1D03C090)
#define MIHOYOEMOTION_EMOSTATEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D03B420)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int EmoStateManager_TypeDefinitionIndex = 40061;

	class EmoStateManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* _stateDic; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::miHoYoEmotion::EmoTrack_EmoVoidHandler*>* _stateClearHandlerDic; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSTATEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void SetState(::miHoYoEmotion::EmoStateManager_EmoState state)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::EmoStateManager_EmoState))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSTATEMANAGER_SETSTATE_OFFSET))(this, state);
		}

		::System::Void ClearState(::miHoYoEmotion::EmoStateManager_EmoState state)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::EmoStateManager_EmoState))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSTATEMANAGER_CLEARSTATE_OFFSET))(this, state);
		}

		::System::Boolean InState(::miHoYoEmotion::EmoStateManager_EmoState state)
		{
			return ((::System::Boolean(*)(::PVOID, ::miHoYoEmotion::EmoStateManager_EmoState))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSTATEMANAGER_INSTATE_OFFSET))(this, state);
		}

		::System::Void SetStateClearHandler(::miHoYoEmotion::EmoStateManager_EmoState state, ::miHoYoEmotion::EmoTrack_EmoVoidHandler* handler)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::EmoStateManager_EmoState, ::miHoYoEmotion::EmoTrack_EmoVoidHandler*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSTATEMANAGER_SETSTATECLEARHANDLER_OFFSET))(this, state, handler);
		}

		::System::Void ClearStateClearHandler(::miHoYoEmotion::EmoStateManager_EmoState state, ::miHoYoEmotion::EmoTrack_EmoVoidHandler* handler)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::EmoStateManager_EmoState, ::miHoYoEmotion::EmoTrack_EmoVoidHandler*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSTATEMANAGER_CLEARSTATECLEARHANDLER_OFFSET))(this, state, handler);
		}

		::System::Void CallStateClearHandler(::miHoYoEmotion::EmoStateManager_EmoState state)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::EmoStateManager_EmoState))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOSTATEMANAGER_CALLSTATECLEARHANDLER_OFFSET))(this, state);
		}
	};
}
