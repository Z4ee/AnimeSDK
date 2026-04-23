#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/UnityEngine/RuntimeAnimatorController.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AnimatorOverrideController_OnOverrideControllerDirtyCallback; }

#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_APPLYOVERRIDES_OFFSET UNITYSDK_OFFSET(0x1A417070)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GETORIGINALCLIP_OFFSET UNITYSDK_OFFSET(0x1A416F10)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GETOVERRIDECLIP_OFFSET UNITYSDK_OFFSET(0x1A416F20)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GETOVERRIDES_OFFSET UNITYSDK_OFFSET(0x1A416F40)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GET_OVERRIDESCOUNT_OFFSET UNITYSDK_OFFSET(0x1A416F30)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GET_RUNTIMEANIMATORCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1A416EB0)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1A416EA0)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_INTERNAL_SETCLIPBYNAME_OFFSET UNITYSDK_OFFSET(0x1A416EE0)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_ONINVALIDATEOVERRIDECONTROLLER_OFFSET UNITYSDK_OFFSET(0x1A4172D0)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SENDNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1A416F00)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SETCLIP_OFFSET UNITYSDK_OFFSET(0x1A416EF0)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A416ED0)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SET_RUNTIMEANIMATORCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1A416EC0)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A416E70)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimatorOverrideController_TypeDefinitionIndex = 5046;

	class AnimatorOverrideController : public ::UnityEngine::RuntimeAnimatorController
	{
	public:
		::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback* OnOverrideControllerDirty; // 0x18

		::System::Void _ctor(::UnityEngine::RuntimeAnimatorController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RuntimeAnimatorController*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER__CTOR_OFFSET))(this, controller);
		}

		static ::System::Void Internal_Create(::UnityEngine::AnimatorOverrideController* self, ::UnityEngine::RuntimeAnimatorController* controller)
		{
			return ((::System::Void(*)(::UnityEngine::AnimatorOverrideController*, ::UnityEngine::RuntimeAnimatorController*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_INTERNAL_CREATE_OFFSET))(self, controller);
		}

		::UnityEngine::RuntimeAnimatorController* get_runtimeAnimatorController()
		{
			return ((::UnityEngine::RuntimeAnimatorController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GET_RUNTIMEANIMATORCONTROLLER_OFFSET))(this);
		}

		::System::Void set_runtimeAnimatorController(::UnityEngine::RuntimeAnimatorController* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RuntimeAnimatorController*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SET_RUNTIMEANIMATORCONTROLLER_OFFSET))(this, value);
		}

		::System::Void set_Item(::System::String* name, ::UnityEngine::AnimationClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SET_ITEM_OFFSET))(this, name, value);
		}

		::System::Void Internal_SetClipByName(::System::String* name, ::UnityEngine::AnimationClip* clip)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_INTERNAL_SETCLIPBYNAME_OFFSET))(this, name, clip);
		}

		::System::Void SetClip(::UnityEngine::AnimationClip* originalClip, ::UnityEngine::AnimationClip* overrideClip, ::System::Boolean notify)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SETCLIP_OFFSET))(this, originalClip, overrideClip, notify);
		}

		::System::Void SendNotification()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SENDNOTIFICATION_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* GetOriginalClip(::System::Int32 index)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GETORIGINALCLIP_OFFSET))(this, index);
		}

		::UnityEngine::AnimationClip* GetOverrideClip(::UnityEngine::AnimationClip* originalClip)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GETOVERRIDECLIP_OFFSET))(this, originalClip);
		}

		::System::Int32 get_overridesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GET_OVERRIDESCOUNT_OFFSET))(this);
		}

		::System::Void GetOverrides(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*>>* overrides)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*>>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GETOVERRIDES_OFFSET))(this, overrides);
		}

		::System::Void ApplyOverrides(::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*>>* overrides)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*>>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_APPLYOVERRIDES_OFFSET))(this, overrides);
		}

		static ::System::Void OnInvalidateOverrideController(::UnityEngine::AnimatorOverrideController* controller)
		{
			return ((::System::Void(*)(::UnityEngine::AnimatorOverrideController*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_ONINVALIDATEOVERRIDECONTROLLER_OFFSET))(controller);
		}
	};
}
