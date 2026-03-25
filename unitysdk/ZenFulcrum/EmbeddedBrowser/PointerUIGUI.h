#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/PointerUIBase.h"

namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class BaseRaycaster; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class RawImage; }

#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_AWAKE_OFFSET UNITYSDK_OFFSET(0x18C8C850)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_GETCURRENTHITLOCATION_OFFSET UNITYSDK_OFFSET(0x18C8CE50)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_GET_KEYBOARDHASFOCUS_OFFSET UNITYSDK_OFFSET(0x18C8CEA0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_GET_MOUSEHASFOCUS_OFFSET UNITYSDK_OFFSET(0x18C8CE70)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_MAPPOINTERTOBROWSER_OFFSET UNITYSDK_OFFSET(0x18C8CB50)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_MAPRAYTOBROWSER_OFFSET UNITYSDK_OFFSET(0x18C8CE20)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x18C8CF50)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18C8C9F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x18C8CFE0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x18C8CFC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x18C8CFD0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_ONSELECT_OFFSET UNITYSDK_OFFSET(0x18C8CEC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_SET_MOUSEHASFOCUS_OFFSET UNITYSDK_OFFSET(0x18C8CE90)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_UPDATETEXTURE_OFFSET UNITYSDK_OFFSET(0x18C8CAB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_WATCHRESIZE_OFFSET UNITYSDK_OFFSET(0x18C8CA50)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI__CTOR_OFFSET UNITYSDK_OFFSET(0x18C8D050)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int PointerUIGUI_TypeDefinitionIndex = 30526;

	class PointerUIGUI : public ::ZenFulcrum::EmbeddedBrowser::PointerUIBase
	{
	public:
		::UnityEngine::UI::RawImage* myImage; // 0xB8
		::System::Boolean enableInput; // 0xC0
		::System::Boolean automaticResize; // 0xC1
		::UnityEngine::EventSystems::BaseRaycaster* raycaster; // 0xC8
		::UnityEngine::RectTransform* rTransform; // 0xD0
		::System::Boolean _mouseHasFocus; // 0xD8
		::System::Boolean _keyboardHasFocus; // 0xD9

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_ONENABLE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* WatchResize()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_WATCHRESIZE_OFFSET))(this);
		}

		::System::Void UpdateTexture(::UnityEngine::Texture2D* texture)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_UPDATETEXTURE_OFFSET))(this, texture);
		}

		::UnityEngine::Vector2 MapPointerToBrowser(::UnityEngine::Vector2 screenPosition, ::System::Int32 pointerId)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_MAPPOINTERTOBROWSER_OFFSET))(this, screenPosition, pointerId);
		}

		::UnityEngine::Vector2 MapRayToBrowser(::UnityEngine::Ray worldRay, ::System::Int32 pointerId)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Ray, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_MAPRAYTOBROWSER_OFFSET))(this, worldRay, pointerId);
		}

		::System::Void GetCurrentHitLocation(::UnityEngine::Vector3& pos, ::UnityEngine::Quaternion& rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_GETCURRENTHITLOCATION_OFFSET))(this, pos, rot);
		}

		::System::Boolean get_MouseHasFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_GET_MOUSEHASFOCUS_OFFSET))(this);
		}

		::System::Void set_MouseHasFocus(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_SET_MOUSEHASFOCUS_OFFSET))(this, value);
		}

		::System::Boolean get_KeyboardHasFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_GET_KEYBOARDHASFOCUS_OFFSET))(this);
		}

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_ONSELECT_OFFSET))(this, eventData);
		}

		::System::Void OnDeselect(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_ONDESELECT_OFFSET))(this, eventData);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_ONPOINTERENTER_OFFSET))(this, eventData);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_ONPOINTEREXIT_OFFSET))(this, eventData);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIGUI_ONPOINTERDOWN_OFFSET))(this, eventData);
		}
	};
}
