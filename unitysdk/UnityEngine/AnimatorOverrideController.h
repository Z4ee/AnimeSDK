#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/UnityEngine/RuntimeAnimatorController.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AnimationClipPair; }
namespace UnityEngine { class AnimatorOverrideController_OnOverrideControllerDirtyCallback; }

#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_APPLYOVERRIDES_OFFSET UNITYSDK_OFFSET(0x1C53ED80)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GETCLIP_OFFSET UNITYSDK_OFFSET(0x1C53EBE0)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GETORIGINALCLIP_OFFSET UNITYSDK_OFFSET(0x1C53EC20)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GETOVERRIDECLIP_OFFSET UNITYSDK_OFFSET(0x1C53EC30)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GETOVERRIDES_OFFSET UNITYSDK_OFFSET(0x1C53EC50)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GET_CLIPS_OFFSET UNITYSDK_OFFSET(0x1C53F000)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1C53EBD0)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1C53EB90)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GET_OVERRIDESCOUNT_OFFSET UNITYSDK_OFFSET(0x1C53EC40)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GET_RUNTIMEANIMATORCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1C53EB70)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1C53EAF0)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_INTERNAL_GETCLIPBYNAME_OFFSET UNITYSDK_OFFSET(0x1C53EBA0)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_INTERNAL_SETCLIPBYNAME_OFFSET UNITYSDK_OFFSET(0x1C53EBC0)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_ONINVALIDATEOVERRIDECONTROLLER_OFFSET UNITYSDK_OFFSET(0x1C53F210)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_PERFORMOVERRIDECLIPLISTCLEANUP_OFFSET UNITYSDK_OFFSET(0x1C53F200)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SENDNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1C53EC10)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SETCLIP_OFFSET UNITYSDK_OFFSET(0x1C53EC00)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SET_CLIPS_OFFSET UNITYSDK_OFFSET(0x1C53F180)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1C53EBF0)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1C53EBB0)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SET_RUNTIMEANIMATORCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1C53EB80)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C53EB00)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C53EA80)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimatorOverrideController_TypeDefinitionIndex = 6550;

	class AnimatorOverrideController : public ::UnityEngine::RuntimeAnimatorController
	{
	public:
		::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback* OnOverrideControllerDirty; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::RuntimeAnimatorController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RuntimeAnimatorController*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER__CTOR_1_OFFSET))(this, controller);
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

		::UnityEngine::AnimationClip* get_Item(::System::String* name)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GET_ITEM_OFFSET))(this, name);
		}

		::System::Void set_Item(::System::String* name, ::UnityEngine::AnimationClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SET_ITEM_OFFSET))(this, name, value);
		}

		::UnityEngine::AnimationClip* Internal_GetClipByName(::System::String* name, ::System::Boolean returnEffectiveClip)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_INTERNAL_GETCLIPBYNAME_OFFSET))(this, name, returnEffectiveClip);
		}

		::System::Void Internal_SetClipByName(::System::String* name, ::UnityEngine::AnimationClip* clip)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_INTERNAL_SETCLIPBYNAME_OFFSET))(this, name, clip);
		}

		::UnityEngine::AnimationClip* get_Item_1(::UnityEngine::AnimationClip* clip)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GET_ITEM_1_OFFSET))(this, clip);
		}

		::System::Void set_Item_1(::UnityEngine::AnimationClip* clip, ::UnityEngine::AnimationClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SET_ITEM_1_OFFSET))(this, clip, value);
		}

		::UnityEngine::AnimationClip* GetClip(::UnityEngine::AnimationClip* originalClip, ::System::Boolean returnEffectiveClip)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::UnityEngine::AnimationClip*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GETCLIP_OFFSET))(this, originalClip, returnEffectiveClip);
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

		::Il2CppArray<::UnityEngine::AnimationClipPair*>* get_clips()
		{
			return ((::Il2CppArray<::UnityEngine::AnimationClipPair*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GET_CLIPS_OFFSET))(this);
		}

		::System::Void set_clips(::Il2CppArray<::UnityEngine::AnimationClipPair*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::AnimationClipPair*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SET_CLIPS_OFFSET))(this, value);
		}

		::System::Void PerformOverrideClipListCleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_PERFORMOVERRIDECLIPLISTCLEANUP_OFFSET))(this);
		}

		static ::System::Void OnInvalidateOverrideController(::UnityEngine::AnimatorOverrideController* controller)
		{
			return ((::System::Void(*)(::UnityEngine::AnimatorOverrideController*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_ONINVALIDATEOVERRIDECONTROLLER_OFFSET))(controller);
		}
	};
}
