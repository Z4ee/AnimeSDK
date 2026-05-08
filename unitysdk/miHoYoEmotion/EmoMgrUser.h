#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/miHoYoEmotion/ElementManager_Type.h"
#include "unitysdk/miHoYoEmotion/EmoStateManager_EmoState.h"

namespace miHoYoEmotion { class BaseEmoAnimation; }
namespace miHoYoEmotion { class ElementManager; }
namespace miHoYoEmotion { class EmoStateManager; }

#define MIHOYOEMOTION_EMOMGRUSER_CLEARSTATE_OFFSET UNITYSDK_OFFSET(0x1978CFE0)
#define MIHOYOEMOTION_EMOMGRUSER_GET_EMOANIM_OFFSET UNITYSDK_OFFSET(0x1978C710)
#define MIHOYOEMOTION_EMOMGRUSER_GET_EMOSTATE_OFFSET UNITYSDK_OFFSET(0x1978C740)
#define MIHOYOEMOTION_EMOMGRUSER_GET_MANAGER_OFFSET UNITYSDK_OFFSET(0x1978C720)
#define MIHOYOEMOTION_EMOMGRUSER_GET_TICKABLE_OFFSET UNITYSDK_OFFSET(0x1978C750)
#define MIHOYOEMOTION_EMOMGRUSER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1978C6F0)
#define MIHOYOEMOTION_EMOMGRUSER_ISSTATE_OFFSET UNITYSDK_OFFSET(0x1978D120)
#define MIHOYOEMOTION_EMOMGRUSER_LATETICK_OFFSET UNITYSDK_OFFSET(0x1978CE90)
#define MIHOYOEMOTION_EMOMGRUSER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1978C5C0)
#define MIHOYOEMOTION_EMOMGRUSER_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x1978C680)
#define MIHOYOEMOTION_EMOMGRUSER_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x1978CE40)
#define MIHOYOEMOTION_EMOMGRUSER_SETSTATE_OFFSET UNITYSDK_OFFSET(0x1978CEF0)
#define MIHOYOEMOTION_EMOMGRUSER_SET_TICKABLE_OFFSET UNITYSDK_OFFSET(0x1978C760)
#define MIHOYOEMOTION_EMOMGRUSER_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1978C700)
#define MIHOYOEMOTION_EMOMGRUSER_START_OFFSET UNITYSDK_OFFSET(0x1978C900)
#define MIHOYOEMOTION_EMOMGRUSER_UPDATEMANGER_OFFSET UNITYSDK_OFFSET(0x1978C950)
#define MIHOYOEMOTION_EMOMGRUSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1978D290)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int EmoMgrUser_TypeDefinitionIndex = 37712;

	class EmoMgrUser : public ::UnityEngine::MonoBehaviour
	{
	public:
		::miHoYoEmotion::ElementManager_Type _type; // 0x18
		::miHoYoEmotion::BaseEmoAnimation* _emoAnim; // 0x20
		::miHoYoEmotion::EmoStateManager* _emoState; // 0x28
		::System::Boolean _isTickable; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOMGRUSER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOMGRUSER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnLightweightActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOMGRUSER_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
		}

		::miHoYoEmotion::ElementManager_Type get_type()
		{
			return ((::miHoYoEmotion::ElementManager_Type(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOMGRUSER_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_type(::miHoYoEmotion::ElementManager_Type value)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::ElementManager_Type))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOMGRUSER_SET_TYPE_OFFSET))(this, value);
		}

		::miHoYoEmotion::BaseEmoAnimation* get_emoAnim()
		{
			return ((::miHoYoEmotion::BaseEmoAnimation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOMGRUSER_GET_EMOANIM_OFFSET))(this);
		}

		::miHoYoEmotion::ElementManager* get_manager()
		{
			return ((::miHoYoEmotion::ElementManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOMGRUSER_GET_MANAGER_OFFSET))(this);
		}

		::miHoYoEmotion::EmoStateManager* get_emoState()
		{
			return ((::miHoYoEmotion::EmoStateManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOMGRUSER_GET_EMOSTATE_OFFSET))(this);
		}

		::System::Boolean get_tickable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOMGRUSER_GET_TICKABLE_OFFSET))(this);
		}

		::System::Void set_tickable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOMGRUSER_SET_TICKABLE_OFFSET))(this, value);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOMGRUSER_START_OFFSET))(this);
		}

		::System::Void UpdateManger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOMGRUSER_UPDATEMANGER_OFFSET))(this);
		}

		::System::Void OnRealEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOMGRUSER_ONREALENABLE_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOMGRUSER_LATETICK_OFFSET))(this, deltaTime);
		}

		::System::Void SetState(::miHoYoEmotion::EmoStateManager_EmoState state)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::EmoStateManager_EmoState))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOMGRUSER_SETSTATE_OFFSET))(this, state);
		}

		::System::Void ClearState(::miHoYoEmotion::EmoStateManager_EmoState state)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::EmoStateManager_EmoState))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOMGRUSER_CLEARSTATE_OFFSET))(this, state);
		}

		::System::Boolean IsState(::miHoYoEmotion::EmoStateManager_EmoState state)
		{
			return ((::System::Boolean(*)(::PVOID, ::miHoYoEmotion::EmoStateManager_EmoState))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EMOMGRUSER_ISSTATE_OFFSET))(this, state);
		}
	};
}
