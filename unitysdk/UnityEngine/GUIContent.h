#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_GUICONTENT_CLEARSTATICCACHE_OFFSET UNITYSDK_OFFSET(0x18A72280)
#define UNITYENGINE_GUICONTENT_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x18A6B7D0)
#define UNITYENGINE_GUICONTENT_GET_TOOLTIP_OFFSET UNITYSDK_OFFSET(0x18A6DE60)
#define UNITYENGINE_GUICONTENT_SET_IMAGE_OFFSET UNITYSDK_OFFSET(0x18A721D0)
#define UNITYENGINE_GUICONTENT_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x18A6B7E0)
#define UNITYENGINE_GUICONTENT_SET_TOOLTIP_OFFSET UNITYSDK_OFFSET(0x18A721E0)
#define UNITYENGINE_GUICONTENT_TEMP_1_OFFSET UNITYSDK_OFFSET(0x18A6AFE0)
#define UNITYENGINE_GUICONTENT_TEMP_OFFSET UNITYSDK_OFFSET(0x18A68500)
#define UNITYENGINE_GUICONTENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A723A0)
#define UNITYENGINE_GUICONTENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18A72210)
#define UNITYENGINE_GUICONTENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18A72230)
#define UNITYENGINE_GUICONTENT__CTOR_3_OFFSET UNITYSDK_OFFSET(0x18A72240)
#define UNITYENGINE_GUICONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18A721F0)

namespace UnityEngine
{
	inline static constexpr unsigned int GUIContent_TypeDefinitionIndex = 5110;

	class GUIContent : public ::System::Object
	{
	public:
		static ::UnityEngine::GUIContent** StaticGet_none()
		{
			return (::UnityEngine::GUIContent**)Il2CppClass::FromTypeDefinitionIndex(GUIContent_TypeDefinitionIndex)->GetStaticField(0x15E20);
		}
		static ::UnityEngine::GUIContent** StaticGet_s_Image()
		{
			return (::UnityEngine::GUIContent**)Il2CppClass::FromTypeDefinitionIndex(GUIContent_TypeDefinitionIndex)->GetStaticField(0x15E28);
		}
		static ::UnityEngine::GUIContent** StaticGet_s_TextImage()
		{
			return (::UnityEngine::GUIContent**)Il2CppClass::FromTypeDefinitionIndex(GUIContent_TypeDefinitionIndex)->GetStaticField(0x15E30);
		}
		static ::UnityEngine::GUIContent** StaticGet_s_Text()
		{
			return (::UnityEngine::GUIContent**)Il2CppClass::FromTypeDefinitionIndex(GUIContent_TypeDefinitionIndex)->GetStaticField(0x15E38);
		}
		::System::String* m_Text; // 0x10
		::UnityEngine::Texture* m_Image; // 0x18
		::System::String* m_Tooltip; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT__CTOR_1_OFFSET))(this, text);
		}

		::System::Void _ctor_2(::System::String* text, ::UnityEngine::Texture* image, ::System::String* tooltip)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Texture*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT__CTOR_2_OFFSET))(this, text, image, tooltip);
		}

		::System::Void _ctor_3(::UnityEngine::GUIContent* src)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIContent*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT__CTOR_3_OFFSET))(this, src);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT__CCTOR_OFFSET))();
		}

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_text(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_SET_TEXT_OFFSET))(this, value);
		}

		::System::Void set_image(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_SET_IMAGE_OFFSET))(this, value);
		}

		::System::String* get_tooltip()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_GET_TOOLTIP_OFFSET))(this);
		}

		::System::Void set_tooltip(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_SET_TOOLTIP_OFFSET))(this, value);
		}

		static ::UnityEngine::GUIContent* Temp(::System::String* t)
		{
			return ((::UnityEngine::GUIContent*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_TEMP_OFFSET))(t);
		}

		static ::UnityEngine::GUIContent* Temp_1(::UnityEngine::Texture* i)
		{
			return ((::UnityEngine::GUIContent*(*)(::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_TEMP_1_OFFSET))(i);
		}

		static ::System::Void ClearStaticCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_CLEARSTATICCACHE_OFFSET))();
		}
	};
}
