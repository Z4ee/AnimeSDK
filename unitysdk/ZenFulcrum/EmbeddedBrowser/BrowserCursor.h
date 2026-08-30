#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_CursorType.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Texture2D; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserCursor_CursorInfo; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR_ADD_CURSORCHANGE_OFFSET UNITYSDK_OFFSET(0x1C7D8E50)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR_GET_HASMOUSE_OFFSET UNITYSDK_OFFSET(0x1C7D97D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR_GET_HOTSPOT_OFFSET UNITYSDK_OFFSET(0x1C7D97B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1C7D9790)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR_LOAD_OFFSET UNITYSDK_OFFSET(0x1C7D8F10)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR_REMOVE_CURSORCHANGE_OFFSET UNITYSDK_OFFSET(0x1C7D8EB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR_SETACTIVECURSOR_OFFSET UNITYSDK_OFFSET(0x1C7D9A90)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR_SETCUSTOMCURSOR_OFFSET UNITYSDK_OFFSET(0x1C7D9FA0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR_SET_HASMOUSE_OFFSET UNITYSDK_OFFSET(0x1C7D97E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR_SET_HOTSPOT_OFFSET UNITYSDK_OFFSET(0x1C7D97C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR_SET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1C7D97A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C7DA380)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7D9810)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserCursor_TypeDefinitionIndex = 38069;

	class BrowserCursor : public ::System::Object
	{
	public:
		static ::UnityEngine::Texture2D** StaticGet_allCursors()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(BrowserCursor_TypeDefinitionIndex)->GetStaticField(0x47F50);
		}
		static ::System::Collections::Generic::Dictionary_2<::ZenFulcrum::EmbeddedBrowser::BrowserNative_CursorType, ::ZenFulcrum::EmbeddedBrowser::BrowserCursor_CursorInfo*>** StaticGet_mapping()
		{
			return (::System::Collections::Generic::Dictionary_2<::ZenFulcrum::EmbeddedBrowser::BrowserNative_CursorType, ::ZenFulcrum::EmbeddedBrowser::BrowserCursor_CursorInfo*>**)Il2CppClass::FromTypeDefinitionIndex(BrowserCursor_TypeDefinitionIndex)->GetStaticField(0x47F58);
		}
		static ::System::Int32* StaticGet_size()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BrowserCursor_TypeDefinitionIndex)->GetStaticField(0x10A00);
		}
		static ::System::Boolean* StaticGet_loaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BrowserCursor_TypeDefinitionIndex)->GetStaticField(0x10A04);
		}
		::UnityEngine::Texture2D* customTexture; // 0x10
		::UnityEngine::Texture2D* normalTexture; // 0x18
		::System::Action* cursorChange; // 0x20
		::UnityEngine::Texture2D* _Texture_k__BackingField; // 0x28
		::System::Boolean _hasMouse; // 0x30
		::UnityEngine::Vector2 _Hotspot_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR__CCTOR_OFFSET))();
		}

		::System::Void add_cursorChange(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR_ADD_CURSORCHANGE_OFFSET))(this, a1);
		}

		::System::Void remove_cursorChange(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR_REMOVE_CURSORCHANGE_OFFSET))(this, a1);
		}

		static ::System::Void Load()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR_LOAD_OFFSET))();
		}

		::UnityEngine::Texture2D* get_Texture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR_GET_TEXTURE_OFFSET))(this);
		}

		::System::Void set_Texture(::UnityEngine::Texture2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR_SET_TEXTURE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_Hotspot()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR_GET_HOTSPOT_OFFSET))(this);
		}

		::System::Void set_Hotspot(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR_SET_HOTSPOT_OFFSET))(this, a1);
		}

		::System::Boolean get_HasMouse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR_GET_HASMOUSE_OFFSET))(this);
		}

		::System::Void set_HasMouse(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR_SET_HASMOUSE_OFFSET))(this, a1);
		}

		::System::Void SetActiveCursor(::ZenFulcrum::EmbeddedBrowser::BrowserNative_CursorType a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_CursorType))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR_SETACTIVECURSOR_OFFSET))(this, a1);
		}

		::System::Void SetCustomCursor(::UnityEngine::Texture2D* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR_SETCUSTOMCURSOR_OFFSET))(this, a1, a2);
		}
	};
}
