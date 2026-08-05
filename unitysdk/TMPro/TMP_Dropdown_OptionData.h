#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Sprite; }

#define TMPRO_TMP_DROPDOWN_OPTIONDATA_GET_IMAGE_OFFSET UNITYSDK_OFFSET(0x1F6A2D30)
#define TMPRO_TMP_DROPDOWN_OPTIONDATA_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1F6A2D10)
#define TMPRO_TMP_DROPDOWN_OPTIONDATA_SET_IMAGE_OFFSET UNITYSDK_OFFSET(0x1F6A2D40)
#define TMPRO_TMP_DROPDOWN_OPTIONDATA_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x1F6A2D20)
#define TMPRO_TMP_DROPDOWN_OPTIONDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F6A2D60)
#define TMPRO_TMP_DROPDOWN_OPTIONDATA__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F6A2D70)
#define TMPRO_TMP_DROPDOWN_OPTIONDATA__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1F6A2D80)
#define TMPRO_TMP_DROPDOWN_OPTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6A2D50)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Dropdown_OptionData_TypeDefinitionIndex = 39788;

	class TMP_Dropdown_OptionData : public ::System::Object
	{
	public:
		::System::String* m_Text; // 0x10
		::UnityEngine::Sprite* m_Image; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_OPTIONDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_OPTIONDATA__CTOR_1_OFFSET))(this, text);
		}

		::System::Void _ctor_2(::UnityEngine::Sprite* image)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_OPTIONDATA__CTOR_2_OFFSET))(this, image);
		}

		::System::Void _ctor_3(::System::String* text, ::UnityEngine::Sprite* image)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_OPTIONDATA__CTOR_3_OFFSET))(this, text, image);
		}

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_OPTIONDATA_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_text(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_OPTIONDATA_SET_TEXT_OFFSET))(this, value);
		}

		::UnityEngine::Sprite* get_image()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_OPTIONDATA_GET_IMAGE_OFFSET))(this);
		}

		::System::Void set_image(::UnityEngine::Sprite* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_OPTIONDATA_SET_IMAGE_OFFSET))(this, value);
		}
	};
}
