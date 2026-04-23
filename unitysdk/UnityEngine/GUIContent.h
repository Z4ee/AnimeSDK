#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_GUICONTENT_CLEARSTATICCACHE_OFFSET UNITYSDK_OFFSET(0x1A4AB470)
#define UNITYENGINE_GUICONTENT_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1A4A31D0)
#define UNITYENGINE_GUICONTENT_GET_TOOLTIP_OFFSET UNITYSDK_OFFSET(0x1A4A6A40)
#define UNITYENGINE_GUICONTENT_SET_IMAGE_OFFSET UNITYSDK_OFFSET(0x1A4AB3C0)
#define UNITYENGINE_GUICONTENT_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x1A4A31E0)
#define UNITYENGINE_GUICONTENT_SET_TOOLTIP_OFFSET UNITYSDK_OFFSET(0x1A4AB3D0)
#define UNITYENGINE_GUICONTENT_TEMP_1_OFFSET UNITYSDK_OFFSET(0x1A4A29E0)
#define UNITYENGINE_GUICONTENT_TEMP_2_OFFSET UNITYSDK_OFFSET(0x1A4AB590)
#define UNITYENGINE_GUICONTENT_TEMP_OFFSET UNITYSDK_OFFSET(0x1A49FDA0)
#define UNITYENGINE_GUICONTENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4AB700)
#define UNITYENGINE_GUICONTENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A4AB400)
#define UNITYENGINE_GUICONTENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A4AB420)
#define UNITYENGINE_GUICONTENT__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1A4AB430)
#define UNITYENGINE_GUICONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4AB3E0)

namespace UnityEngine
{
	inline static constexpr unsigned int GUIContent_TypeDefinitionIndex = 5119;

	class GUIContent : public ::System::Object
	{
	public:
		static ::UnityEngine::GUIContent** StaticGet_s_TextImage()
		{
			return (::UnityEngine::GUIContent**)Il2CppClass::FromTypeDefinitionIndex(GUIContent_TypeDefinitionIndex)->GetStaticField(0x15FC0);
		}
		static ::UnityEngine::GUIContent** StaticGet_none()
		{
			return (::UnityEngine::GUIContent**)Il2CppClass::FromTypeDefinitionIndex(GUIContent_TypeDefinitionIndex)->GetStaticField(0x15FC8);
		}
		static ::UnityEngine::GUIContent** StaticGet_s_Text()
		{
			return (::UnityEngine::GUIContent**)Il2CppClass::FromTypeDefinitionIndex(GUIContent_TypeDefinitionIndex)->GetStaticField(0x15FD0);
		}
		static ::UnityEngine::GUIContent** StaticGet_s_Image()
		{
			return (::UnityEngine::GUIContent**)Il2CppClass::FromTypeDefinitionIndex(GUIContent_TypeDefinitionIndex)->GetStaticField(0x15FD8);
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

		static ::Il2CppArray<::UnityEngine::GUIContent*>* Temp_2(::Il2CppArray<::System::String*>* texts)
		{
			return ((::Il2CppArray<::UnityEngine::GUIContent*>*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_TEMP_2_OFFSET))(texts);
		}
	};
}
