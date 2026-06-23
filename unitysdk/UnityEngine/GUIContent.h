#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_GUICONTENT_CLEARSTATICCACHE_OFFSET UNITYSDK_OFFSET(0x1D0EC550)
#define UNITYENGINE_GUICONTENT_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1D0EC3E0)
#define UNITYENGINE_GUICONTENT_GET_TOOLTIP_OFFSET UNITYSDK_OFFSET(0x1D0E7990)
#define UNITYENGINE_GUICONTENT_SET_IMAGE_OFFSET UNITYSDK_OFFSET(0x1D0EC400)
#define UNITYENGINE_GUICONTENT_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x1D0EC3F0)
#define UNITYENGINE_GUICONTENT_SET_TOOLTIP_OFFSET UNITYSDK_OFFSET(0x1D0EC410)
#define UNITYENGINE_GUICONTENT_TEMP_1_OFFSET UNITYSDK_OFFSET(0x1D0EC4B0)
#define UNITYENGINE_GUICONTENT_TEMP_OFFSET UNITYSDK_OFFSET(0x1D0E4900)
#define UNITYENGINE_GUICONTENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0EC670)
#define UNITYENGINE_GUICONTENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D0EC440)
#define UNITYENGINE_GUICONTENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D0EC460)
#define UNITYENGINE_GUICONTENT__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D0EC470)
#define UNITYENGINE_GUICONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0EC420)

namespace UnityEngine
{
	inline static constexpr unsigned int GUIContent_TypeDefinitionIndex = 6404;

	class GUIContent : public ::System::Object
	{
	public:
		static ::UnityEngine::GUIContent** StaticGet_s_TextImage()
		{
			return (::UnityEngine::GUIContent**)Il2CppClass::FromTypeDefinitionIndex(GUIContent_TypeDefinitionIndex)->GetStaticField(0x5910);
		}
		static ::UnityEngine::GUIContent** StaticGet_none()
		{
			return (::UnityEngine::GUIContent**)Il2CppClass::FromTypeDefinitionIndex(GUIContent_TypeDefinitionIndex)->GetStaticField(0x5918);
		}
		static ::UnityEngine::GUIContent** StaticGet_s_Image()
		{
			return (::UnityEngine::GUIContent**)Il2CppClass::FromTypeDefinitionIndex(GUIContent_TypeDefinitionIndex)->GetStaticField(0x5920);
		}
		static ::UnityEngine::GUIContent** StaticGet_s_Text()
		{
			return (::UnityEngine::GUIContent**)Il2CppClass::FromTypeDefinitionIndex(GUIContent_TypeDefinitionIndex)->GetStaticField(0x5928);
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
