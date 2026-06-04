#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_GUICONTENT_CLEARSTATICCACHE_OFFSET UNITYSDK_OFFSET(0x1B2F9C50)
#define UNITYENGINE_GUICONTENT_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1B2F1D80)
#define UNITYENGINE_GUICONTENT_GET_TOOLTIP_OFFSET UNITYSDK_OFFSET(0x1B2F55D0)
#define UNITYENGINE_GUICONTENT_SET_IMAGE_OFFSET UNITYSDK_OFFSET(0x1B2F9BA0)
#define UNITYENGINE_GUICONTENT_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x1B2F1D90)
#define UNITYENGINE_GUICONTENT_SET_TOOLTIP_OFFSET UNITYSDK_OFFSET(0x1B2F9BB0)
#define UNITYENGINE_GUICONTENT_TEMP_1_OFFSET UNITYSDK_OFFSET(0x1B2F15B0)
#define UNITYENGINE_GUICONTENT_TEMP_2_OFFSET UNITYSDK_OFFSET(0x1B2F9D70)
#define UNITYENGINE_GUICONTENT_TEMP_OFFSET UNITYSDK_OFFSET(0x1B2EE9E0)
#define UNITYENGINE_GUICONTENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2F9EC0)
#define UNITYENGINE_GUICONTENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B2F9BE0)
#define UNITYENGINE_GUICONTENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B2F9C00)
#define UNITYENGINE_GUICONTENT__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B2F9C10)
#define UNITYENGINE_GUICONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2F9BC0)

namespace UnityEngine
{
	inline static constexpr unsigned int GUIContent_TypeDefinitionIndex = 5213;

	class GUIContent : public ::System::Object
	{
	public:
		static ::UnityEngine::GUIContent** StaticGet_s_TextImage()
		{
			return (::UnityEngine::GUIContent**)Il2CppClass::FromTypeDefinitionIndex(GUIContent_TypeDefinitionIndex)->GetStaticField(0x36C70);
		}
		static ::UnityEngine::GUIContent** StaticGet_none()
		{
			return (::UnityEngine::GUIContent**)Il2CppClass::FromTypeDefinitionIndex(GUIContent_TypeDefinitionIndex)->GetStaticField(0x36C78);
		}
		static ::UnityEngine::GUIContent** StaticGet_s_Text()
		{
			return (::UnityEngine::GUIContent**)Il2CppClass::FromTypeDefinitionIndex(GUIContent_TypeDefinitionIndex)->GetStaticField(0x36C80);
		}
		static ::UnityEngine::GUIContent** StaticGet_s_Image()
		{
			return (::UnityEngine::GUIContent**)Il2CppClass::FromTypeDefinitionIndex(GUIContent_TypeDefinitionIndex)->GetStaticField(0x36C88);
		}
		::System::String* m_Text; // 0x10
		::UnityEngine::Texture* m_Image; // 0x18
		::System::String* m_Tooltip; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1, ::UnityEngine::Texture* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Texture*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT__CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_3(::UnityEngine::GUIContent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIContent*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT__CTOR_3_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT__CCTOR_OFFSET))();
		}

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_text(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_SET_TEXT_OFFSET))(this, a1);
		}

		::System::Void set_image(::UnityEngine::Texture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_SET_IMAGE_OFFSET))(this, a1);
		}

		::System::String* get_tooltip()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_GET_TOOLTIP_OFFSET))(this);
		}

		::System::Void set_tooltip(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_SET_TOOLTIP_OFFSET))(this, a1);
		}

		static ::UnityEngine::GUIContent* Temp(::System::String* a1)
		{
			return ((::UnityEngine::GUIContent*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_TEMP_OFFSET))(a1);
		}

		static ::UnityEngine::GUIContent* Temp_1(::UnityEngine::Texture* a1)
		{
			return ((::UnityEngine::GUIContent*(*)(::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_TEMP_1_OFFSET))(a1);
		}

		static ::System::Void ClearStaticCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_CLEARSTATICCACHE_OFFSET))();
		}

		static ::Il2CppArray<::UnityEngine::GUIContent*>* Temp_2(::Il2CppArray<::System::String*>* a1)
		{
			return ((::Il2CppArray<::UnityEngine::GUIContent*>*(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUICONTENT_TEMP_2_OFFSET))(a1);
		}
	};
}
