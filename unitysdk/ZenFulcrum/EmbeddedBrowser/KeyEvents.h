#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/KeyCode.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Event; }

#define ZENFULCRUM_EMBEDDEDBROWSER_KEYEVENTS_FEED_OFFSET UNITYSDK_OFFSET(0x1FA07870)
#define ZENFULCRUM_EMBEDDEDBROWSER_KEYEVENTS_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0x1FA07370)
#define ZENFULCRUM_EMBEDDEDBROWSER_KEYEVENTS_INPUTUPDATE_OFFSET UNITYSDK_OFFSET(0x1FA07380)
#define ZENFULCRUM_EMBEDDEDBROWSER_KEYEVENTS_PRESS_OFFSET UNITYSDK_OFFSET(0x1FA07940)
#define ZENFULCRUM_EMBEDDEDBROWSER_KEYEVENTS_RELEASE_OFFSET UNITYSDK_OFFSET(0x1FA079D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_KEYEVENTS_TYPE_OFFSET UNITYSDK_OFFSET(0x1FA07A60)
#define ZENFULCRUM_EMBEDDEDBROWSER_KEYEVENTS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA07C60)
#define ZENFULCRUM_EMBEDDEDBROWSER_KEYEVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA07B90)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int KeyEvents_TypeDefinitionIndex = 33291;

	class KeyEvents : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::KeyCode>** StaticGet_keysToCheck()
		{
			return (::Il2CppArray<::UnityEngine::KeyCode>**)Il2CppClass::FromTypeDefinitionIndex(KeyEvents_TypeDefinitionIndex)->GetStaticField(0x28770);
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
