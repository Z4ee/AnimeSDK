#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Sprite; }

#define UNITYENGINE_UI_DROPDOWN_OPTIONDATA_GET_IMAGE_OFFSET UNITYSDK_OFFSET(0x18B0FB80)
#define UNITYENGINE_UI_DROPDOWN_OPTIONDATA_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x18B0FBA0)
#define UNITYENGINE_UI_DROPDOWN_OPTIONDATA_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x18B0FB60)
#define UNITYENGINE_UI_DROPDOWN_OPTIONDATA_SET_IMAGE_OFFSET UNITYSDK_OFFSET(0x18B0FB90)
#define UNITYENGINE_UI_DROPDOWN_OPTIONDATA_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x18B0FBB0)
#define UNITYENGINE_UI_DROPDOWN_OPTIONDATA_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x18B0FB70)
#define UNITYENGINE_UI_DROPDOWN_OPTIONDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18B0C8E0)
#define UNITYENGINE_UI_DROPDOWN_OPTIONDATA__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18B0C9D0)
#define UNITYENGINE_UI_DROPDOWN_OPTIONDATA__CTOR_3_OFFSET UNITYSDK_OFFSET(0x18B0FBC0)
#define UNITYENGINE_UI_DROPDOWN_OPTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18B0AE80)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Dropdown_OptionData_TypeDefinitionIndex = 5576;

	class Dropdown_OptionData : public ::System::Object
	{
	public:
		::System::String* m_Text; // 0x10
		::UnityEngine::Sprite* m_Image; // 0x18
		::System::Int32 _Index_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATA__CTOR_1_OFFSET))(this, text);
		}

		::System::Void _ctor_2(::UnityEngine::Sprite* image)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATA__CTOR_2_OFFSET))(this, image);
		}

		::System::Void _ctor_3(::System::String* text, ::UnityEngine::Sprite* image)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATA__CTOR_3_OFFSET))(this, text, image);
		}

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATA_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_text(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATA_SET_TEXT_OFFSET))(this, value);
		}

		::UnityEngine::Sprite* get_image()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATA_GET_IMAGE_OFFSET))(this);
		}

		::System::Void set_image(::UnityEngine::Sprite* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATA_SET_IMAGE_OFFSET))(this, value);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATA_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATA_SET_INDEX_OFFSET))(this, value);
		}
	};
}
