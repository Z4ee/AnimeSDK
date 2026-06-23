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

#define UNITYENGINE_UI_MASKUTILITIES_FINDROOTSORTOVERRIDECANVAS_OFFSET UNITYSDK_OFFSET(0x1DCE1AF0)
#define UNITYENGINE_UI_MASKUTILITIES_GETRECTMASKFORCLIPPABLE_OFFSET UNITYSDK_OFFSET(0x1DCE3550)
#define UNITYENGINE_UI_MASKUTILITIES_GETRECTMASKSFORCLIP_OFFSET UNITYSDK_OFFSET(0x1DCE39C0)
#define UNITYENGINE_UI_MASKUTILITIES_GETSMOOTHMASK_OFFSET UNITYSDK_OFFSET(0x1DCE2BE0)
#define UNITYENGINE_UI_MASKUTILITIES_GETSTENCILDEPTH_OFFSET UNITYSDK_OFFSET(0x1DCE1D50)
#define UNITYENGINE_UI_MASKUTILITIES_ISDESCENDANTORSELF_OFFSET UNITYSDK_OFFSET(0x1DCE3170)
#define UNITYENGINE_UI_MASKUTILITIES_NOTIFY2DMASKSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1DCE2580)
#define UNITYENGINE_UI_MASKUTILITIES_NOTIFYSMOOTHMASKCHANGED_OFFSET UNITYSDK_OFFSET(0x1DCE2920)
#define UNITYENGINE_UI_MASKUTILITIES_NOTIFYSTENCILSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1DCE0510)
#define UNITYENGINE_UI_MASKUTILITIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCE3D80)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int MaskUtilities_TypeDefinitionIndex = 18925;

	class MaskUtilities : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKUTILITIES__CTOR_OFFSET))(this);
		}

		static ::System::Void Notify2DMaskStateChanged(::UnityEngine::Component* mask)
		{
			return ((::System::Void(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKUTILITIES_NOTIFY2DMASKSTATECHANGED_OFFSET))(mask);
		}

		static ::System::Void NotifyStencilStateChanged(::UnityEngine::Component* mask)
		{
			return ((::System::Void(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKUTILITIES_NOTIFYSTENCILSTATECHANGED_OFFSET))(mask);
		}

		static ::System::Void NotifySmoothMaskChanged(::UnityEngine::Component* mask)
		{
			return ((::System::Void(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKUTILITIES_NOTIFYSMOOTHMASKCHANGED_OFFSET))(mask);
		}

		static ::UnityEngine::Transform* FindRootSortOverrideCanvas(::UnityEngine::Transform* start)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKUTILITIES_FINDROOTSORTOVERRIDECANVAS_OFFSET))(start);
		}

		static ::System::Int32 GetStencilDepth(::UnityEngine::Transform* transform, ::UnityEngine::Transform* stopAfter)
		{
			return ((::System::Int32(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKUTILITIES_GETSTENCILDEPTH_OFFSET))(transform, stopAfter);
		}

		static ::UnityEngine::UI::SmoothMask* GetSmoothMask(::UnityEngine::RectTransform* transform, ::UnityEngine::RectTransform* stopAfter)
		{
			return ((::UnityEngine::UI::SmoothMask*(*)(::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKUTILITIES_GETSMOOTHMASK_OFFSET))(transform, stopAfter);
		}

		static ::System::Boolean IsDescendantOrSelf(::UnityEngine::Transform* father, ::UnityEngine::Transform* child)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKUTILITIES_ISDESCENDANTORSELF_OFFSET))(father, child);
		}

		static ::UnityEngine::UI::RectMask2D* GetRectMaskForClippable(::UnityEngine::UI::IClippable* clippable)
		{
			return ((::UnityEngine::UI::RectMask2D*(*)(::UnityEngine::UI::IClippable*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKUTILITIES_GETRECTMASKFORCLIPPABLE_OFFSET))(clippable);
		}

		static ::System::Void GetRectMasksForClip(::UnityEngine::UI::RectMask2D* clipper, ::System::Collections::Generic::List_1<::UnityEngine::UI::RectMask2D*>* masks)
		{
			return ((::System::Void(*)(::UnityEngine::UI::RectMask2D*, ::System::Collections::Generic::List_1<::UnityEngine::UI::RectMask2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MASKUTILITIES_GETRECTMASKSFORCLIP_OFFSET))(clipper, masks);
		}
	};
}
