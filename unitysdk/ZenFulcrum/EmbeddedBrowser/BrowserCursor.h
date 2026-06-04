#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_CursorType.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Texture2D; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserCursor_CursorInfo; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR_ADD_CURSORCHANGE_OFFSET UNITYSDK_OFFSET(0x1B4E77D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR_GET_HASMOUSE_OFFSET UNITYSDK_OFFSET(0x1B4E8060)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR_GET_HOTSPOT_OFFSET UNITYSDK_OFFSET(0x1B4E8040)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1B4E8020)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR_LOAD_OFFSET UNITYSDK_OFFSET(0x1B4E7890)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR_REMOVE_CURSORCHANGE_OFFSET UNITYSDK_OFFSET(0x1B4E7830)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR_SETACTIVECURSOR_OFFSET UNITYSDK_OFFSET(0x1B4E82C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR_SETCUSTOMCURSOR_OFFSET UNITYSDK_OFFSET(0x1B4E86A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR_SET_HASMOUSE_OFFSET UNITYSDK_OFFSET(0x1B4E8070)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR_SET_HOTSPOT_OFFSET UNITYSDK_OFFSET(0x1B4E8050)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR_SET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1B4E8030)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4E8940)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERCURSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4E80A0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserCursor_TypeDefinitionIndex = 36428;

	class BrowserCursor : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::ZenFulcrum::EmbeddedBrowser::BrowserNative_CursorType, ::ZenFulcrum::EmbeddedBrowser::BrowserCursor_CursorInfo*>** StaticGet_mapping()
		{
			return (::System::Collections::Generic::Dictionary_2<::ZenFulcrum::EmbeddedBrowser::BrowserNative_CursorType, ::ZenFulcrum::EmbeddedBrowser::BrowserCursor_CursorInfo*>**)Il2CppClass::FromTypeDefinitionIndex(BrowserCursor_TypeDefinitionIndex)->GetStaticField(0x651C0);
		}
		static ::UnityEngine::Texture2D** StaticGet_allCursors()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(BrowserCursor_TypeDefinitionIndex)->GetStaticField(0x651C8);
		}
		static ::System::Boolean* StaticGet_loaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BrowserCursor_TypeDefinitionIndex)->GetStaticField(0x13BA0);
		}
		static ::System::Int32* StaticGet_size()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BrowserCursor_TypeDefinitionIndex)->GetStaticField(0x13BA4);
		}
		::UnityEngine::Texture2D* customTexture; // 0x10
		::System::Action* cursorChange; // 0x18
		::UnityEngine::Texture2D* _Texture_k__BackingField; // 0x20
		::UnityEngine::Texture2D* normalTexture; // 0x28
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
