#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class IClippable; }
namespace UnityEngine::UI { class RectMask2D; }
namespace UnityEngine::UI { class SmoothMask; }

#define UNITYENGINE_UI_MASKUTILITIES_FINDROOTSORTOVERRIDECANVAS_OFFSET UNITYSDK_OFFSET(0x15DB7D40)
#define UNITYENGINE_UI_MASKUTILITIES_GETRECTMASKFORCLIPPABLE_OFFSET UNITYSDK_OFFSET(0x15DB8FD0)
#define UNITYENGINE_UI_MASKUTILITIES_GETRECTMASKSFORCLIP_OFFSET UNITYSDK_OFFSET(0x15DB9440)
#define UNITYENGINE_UI_MASKUTILITIES_GETSMOOTHMASK_OFFSET UNITYSDK_OFFSET(0x15DB8AF0)
#define UNITYENGINE_UI_MASKUTILITIES_GETSTENCILDEPTH_OFFSET UNITYSDK_OFFSET(0x15DB7EA0)
#define UNITYENGINE_UI_MASKUTILITIES_ISDESCENDANTORSELF_OFFSET UNITYSDK_OFFSET(0x15DB8F30)
#define UNITYENGINE_UI_MASKUTILITIES_NOTIFY2DMASKSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x15DB84A0)
#define UNITYENGINE_UI_MASKUTILITIES_NOTIFYSMOOTHMASKCHANGED_OFFSET UNITYSDK_OFFSET(0x15DB8860)
#define UNITYENGINE_UI_MASKUTILITIES_NOTIFYSTENCILSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x15DB6D70)
#define UNITYENGINE_UI_MASKUTILITIES__CTOR_OFFSET UNITYSDK_OFFSET(0x15DB9CE0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int MaskUtilities_TypeDefinitionIndex = 5954;

	class MaskUtilities : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKUTILITIES__CTOR_OFFSET))(this);
		}

		static ::System::Void Notify2DMaskStateChanged(::UnityEngine::Component* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKUTILITIES_NOTIFY2DMASKSTATECHANGED_OFFSET))(a1);
		}

		static ::System::Void NotifyStencilStateChanged(::UnityEngine::Component* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKUTILITIES_NOTIFYSTENCILSTATECHANGED_OFFSET))(a1);
		}

		static ::System::Void NotifySmoothMaskChanged(::UnityEngine::Component* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKUTILITIES_NOTIFYSMOOTHMASKCHANGED_OFFSET))(a1);
		}

		static ::UnityEngine::Transform* FindRootSortOverrideCanvas(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKUTILITIES_FINDROOTSORTOVERRIDECANVAS_OFFSET))(a1);
		}

		static ::UnityEngine::UI::SmoothMask* GetSmoothMask(::UnityEngine::RectTransform* a1, ::UnityEngine::RectTransform* a2)
		{
			return ((::UnityEngine::UI::SmoothMask*(*)(::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKUTILITIES_GETSMOOTHMASK_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetStencilDepth(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Int32(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKUTILITIES_GETSTENCILDEPTH_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDescendantOrSelf(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKUTILITIES_ISDESCENDANTORSELF_OFFSET))(a1, a2);
		}

		static ::UnityEngine::UI::RectMask2D* GetRectMaskForClippable(::UnityEngine::UI::IClippable* a1)
		{
			return ((::UnityEngine::UI::RectMask2D*(*)(::UnityEngine::UI::IClippable*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKUTILITIES_GETRECTMASKFORCLIPPABLE_OFFSET))(a1);
		}

		static ::System::Void GetRectMasksForClip(::UnityEngine::UI::RectMask2D* a1, ::System::Collections::Generic::List_1<::UnityEngine::UI::RectMask2D*>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::UI::RectMask2D*, ::System::Collections::Generic::List_1<::UnityEngine::UI::RectMask2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKUTILITIES_GETRECTMASKSFORCLIP_OFFSET))(a1, a2);
		}
	};
}
