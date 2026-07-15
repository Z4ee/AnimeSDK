#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/UnityEngine/RuntimeAnimatorController.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AnimatorOverrideController_OnOverrideControllerDirtyCallback; }

#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_APPLYOVERRIDES_OFFSET UNITYSDK_OFFSET(0x1D1B64B0)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GETORIGINALCLIP_OFFSET UNITYSDK_OFFSET(0x1D1B62F0)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GETOVERRIDECLIP_OFFSET UNITYSDK_OFFSET(0x1D1B6300)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GETOVERRIDES_OFFSET UNITYSDK_OFFSET(0x1D1B6320)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GET_OVERRIDESCOUNT_OFFSET UNITYSDK_OFFSET(0x1D1B6310)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GET_RUNTIMEANIMATORCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1D1B6290)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1D1B6280)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_INTERNAL_SETCLIPBYNAME_OFFSET UNITYSDK_OFFSET(0x1D1B62C0)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_ONINVALIDATEOVERRIDECONTROLLER_OFFSET UNITYSDK_OFFSET(0x1D1B6850)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SENDNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1D1B62E0)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SETCLIP_OFFSET UNITYSDK_OFFSET(0x1D1B62D0)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D1B62B0)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SET_RUNTIMEANIMATORCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1D1B62A0)
#define UNITYENGINE_ANIMATOROVERRIDECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1B6250)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimatorOverrideController_TypeDefinitionIndex = 5145;

	class AnimatorOverrideController : public ::UnityEngine::RuntimeAnimatorController
	{
	public:
		::UnityEngine::AnimatorOverrideController_OnOverrideControllerDirtyCallback* OnOverrideControllerDirty; // 0x18

		::System::Void _ctor(::UnityEngine::RuntimeAnimatorController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RuntimeAnimatorController*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void Internal_Create(::UnityEngine::AnimatorOverrideController* a1, ::UnityEngine::RuntimeAnimatorController* a2)
		{
			return ((::System::Void(*)(::UnityEngine::AnimatorOverrideController*, ::UnityEngine::RuntimeAnimatorController*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_INTERNAL_CREATE_OFFSET))(a1, a2);
		}

		::UnityEngine::RuntimeAnimatorController* get_runtimeAnimatorController()
		{
			return ((::UnityEngine::RuntimeAnimatorController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GET_RUNTIMEANIMATORCONTROLLER_OFFSET))(this);
		}

		::System::Void set_runtimeAnimatorController(::UnityEngine::RuntimeAnimatorController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RuntimeAnimatorController*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SET_RUNTIMEANIMATORCONTROLLER_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::String* a1, ::UnityEngine::AnimationClip* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Void Internal_SetClipByName(::System::String* a1, ::UnityEngine::AnimationClip* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_INTERNAL_SETCLIPBYNAME_OFFSET))(this, a1, a2);
		}

		::System::Void SetClip(::UnityEngine::AnimationClip* a1, ::UnityEngine::AnimationClip* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SETCLIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SendNotification()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_SENDNOTIFICATION_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* GetOriginalClip(::System::Int32 a1)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GETORIGINALCLIP_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationClip* GetOverrideClip(::UnityEngine::AnimationClip* a1)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GETOVERRIDECLIP_OFFSET))(this, a1);
		}

		::System::Int32 get_overridesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GET_OVERRIDESCOUNT_OFFSET))(this);
		}

		::System::Void GetOverrides(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*>>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*>>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_GETOVERRIDES_OFFSET))(this, a1);
		}

		::System::Void ApplyOverrides(::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*>>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*>>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_APPLYOVERRIDES_OFFSET))(this, a1);
		}

		static ::System::Void OnInvalidateOverrideController(::UnityEngine::AnimatorOverrideController* a1)
		{
			return ((::System::Void(*)(::UnityEngine::AnimatorOverrideController*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATOROVERRIDECONTROLLER_ONINVALIDATEOVERRIDECONTROLLER_OFFSET))(a1);
		}
	};
}
