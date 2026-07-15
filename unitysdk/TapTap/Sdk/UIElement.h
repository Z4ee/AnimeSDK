#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TapTap/Sdk/UIBase.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace TapTap::Sdk { class UIManager; }

#define TAPTAP_SDK_UIELEMENT_ADD_CALLBACK_OFFSET UNITYSDK_OFFSET(0x1D1DE250)
#define TAPTAP_SDK_UIELEMENT_CLEARCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D1DE390)
#define TAPTAP_SDK_UIELEMENT_DOENTERANIMATION_OFFSET UNITYSDK_OFFSET(0x1D1DE450)
#define TAPTAP_SDK_UIELEMENT_DOEXITANIMATION_OFFSET UNITYSDK_OFFSET(0x1D1DE3C0)
#define TAPTAP_SDK_UIELEMENT_DOPAUSEANIMATION_OFFSET UNITYSDK_OFFSET(0x1D1DE3A0)
#define TAPTAP_SDK_UIELEMENT_DORESUMEANIMATION_OFFSET UNITYSDK_OFFSET(0x1D1DE3B0)
#define TAPTAP_SDK_UIELEMENT_GETUIMANAGER_OFFSET UNITYSDK_OFFSET(0x1D1D8F40)
#define TAPTAP_SDK_UIELEMENT_GET_EXTRA_OFFSET UNITYSDK_OFFSET(0x1D1DE350)
#define TAPTAP_SDK_UIELEMENT_GET_MANAGER_OFFSET UNITYSDK_OFFSET(0x1D1DE380)
#define TAPTAP_SDK_UIELEMENT_ONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D1D8F20)
#define TAPTAP_SDK_UIELEMENT_PLAYENTER_OFFSET UNITYSDK_OFFSET(0x1D1DE540)
#define TAPTAP_SDK_UIELEMENT_PLAYEXIT_OFFSET UNITYSDK_OFFSET(0x1D1DE4E0)
#define TAPTAP_SDK_UIELEMENT_REMOVE_CALLBACK_OFFSET UNITYSDK_OFFSET(0x1D1DE2D0)
#define TAPTAP_SDK_UIELEMENT_SET_EXTRA_OFFSET UNITYSDK_OFFSET(0x1D1DE360)
#define TAPTAP_SDK_UIELEMENT_SET_MANAGER_OFFSET UNITYSDK_OFFSET(0x1D1DE370)
#define TAPTAP_SDK_UIELEMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1DE5A0)
#define TAPTAP_SDK_UIELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D37E0)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int UIElement_TypeDefinitionIndex = 7072;

	class UIElement : public ::TapTap::Sdk::UIBase
	{
	public:
		static ::System::Int32* StaticGet_animType()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIElement_TypeDefinitionIndex)->GetStaticField(0x550);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* extra; // 0x18
		::System::Action_2<::System::Int32, ::System::Object*>* Callback; // 0x20
		::System::Boolean animationLaunched; // 0x28
		::System::Single transitionDurationTime; // 0x2C
		::TapTap::Sdk::UIManager* _Manager_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT__CCTOR_OFFSET))();
		}

		::System::Void add_Callback(::System::Action_2<::System::Int32, ::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::Object*>*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_ADD_CALLBACK_OFFSET))(this, a1);
		}

		::System::Void remove_Callback(::System::Action_2<::System::Int32, ::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::Object*>*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_REMOVE_CALLBACK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* get_Extra()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_GET_EXTRA_OFFSET))(this);
		}

		::System::Void set_Extra(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_SET_EXTRA_OFFSET))(this, a1);
		}

		::System::Void set_Manager(::TapTap::Sdk::UIManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::TapTap::Sdk::UIManager*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_SET_MANAGER_OFFSET))(this, a1);
		}

		::TapTap::Sdk::UIManager* get_Manager()
		{
			return ((::TapTap::Sdk::UIManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_GET_MANAGER_OFFSET))(this);
		}

		::System::Void ClearCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_CLEARCALLBACK_OFFSET))(this);
		}

		::System::Void OnCallback(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_ONCALLBACK_OFFSET))(this, a1, a2);
		}

		::TapTap::Sdk::UIManager* GetUIManager()
		{
			return ((::TapTap::Sdk::UIManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_GETUIMANAGER_OFFSET))(this);
		}

		::System::Single DoPauseAnimation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_DOPAUSEANIMATION_OFFSET))(this);
		}

		::System::Single DoResumeAnimation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_DORESUMEANIMATION_OFFSET))(this);
		}

		::System::Single DoExitAnimation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_DOEXITANIMATION_OFFSET))(this);
		}

		::System::Single DoEnterAnimation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_DOENTERANIMATION_OFFSET))(this);
		}

		::System::Collections::IEnumerator* PlayExit()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_PLAYEXIT_OFFSET))(this);
		}

		::System::Collections::IEnumerator* PlayEnter()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_PLAYENTER_OFFSET))(this);
		}
	};
}
