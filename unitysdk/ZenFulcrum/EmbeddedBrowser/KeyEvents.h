#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/KeyCode.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Event; }

#define ZENFULCRUM_EMBEDDEDBROWSER_KEYEVENTS_FEED_OFFSET UNITYSDK_OFFSET(0x1C2C8560)
#define ZENFULCRUM_EMBEDDEDBROWSER_KEYEVENTS_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0x1C2C8060)
#define ZENFULCRUM_EMBEDDEDBROWSER_KEYEVENTS_INPUTUPDATE_OFFSET UNITYSDK_OFFSET(0x1C2C8070)
#define ZENFULCRUM_EMBEDDEDBROWSER_KEYEVENTS_PRESS_OFFSET UNITYSDK_OFFSET(0x1C2C8630)
#define ZENFULCRUM_EMBEDDEDBROWSER_KEYEVENTS_RELEASE_OFFSET UNITYSDK_OFFSET(0x1C2C86C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_KEYEVENTS_TYPE_OFFSET UNITYSDK_OFFSET(0x1C2C8750)
#define ZENFULCRUM_EMBEDDEDBROWSER_KEYEVENTS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2C8970)
#define ZENFULCRUM_EMBEDDEDBROWSER_KEYEVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C88A0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int KeyEvents_TypeDefinitionIndex = 31105;

	class KeyEvents : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::KeyCode>** StaticGet_keysToCheck()
		{
			return (::Il2CppArray<::UnityEngine::KeyCode>**)Il2CppClass::FromTypeDefinitionIndex(KeyEvents_TypeDefinitionIndex)->GetStaticField(0x254E0);
		}
		::System::Collections::Generic::List_1<::UnityEngine::Event*>* keyEvents; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Event*>* keyEventsLast; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_KEYEVENTS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_KEYEVENTS__CCTOR_OFFSET))();
		}

		::System::Collections::Generic::List_1<::UnityEngine::Event*>* get_Events()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Event*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_KEYEVENTS_GET_EVENTS_OFFSET))(this);
		}

		::System::Void InputUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_KEYEVENTS_INPUTUPDATE_OFFSET))(this);
		}

		::System::Void Feed(::UnityEngine::Event* ev)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Event*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_KEYEVENTS_FEED_OFFSET))(this, ev);
		}

		::System::Void Press(::UnityEngine::KeyCode key)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_KEYEVENTS_PRESS_OFFSET))(this, key);
		}

		::System::Void Release(::UnityEngine::KeyCode key)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_KEYEVENTS_RELEASE_OFFSET))(this, key);
		}

		::System::Void Type(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_KEYEVENTS_TYPE_OFFSET))(this, text);
		}
	};
}
