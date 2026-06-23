#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Component.h"

namespace System { class String; }
namespace UnityEngine { class Font; }

#define UNITYENGINE_TEXTMESH_GET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0x1E6C9810)
#define UNITYENGINE_TEXTMESH_GET_FONT_OFFSET UNITYSDK_OFFSET(0x1E6C97F0)
#define UNITYENGINE_TEXTMESH_SET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E6C9840)
#define UNITYENGINE_TEXTMESH_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x1E6C9830)
#define UNITYENGINE_TEXTMESH_SET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0x1E6C9820)
#define UNITYENGINE_TEXTMESH_SET_FONT_OFFSET UNITYSDK_OFFSET(0x1E6C9800)
#define UNITYENGINE_TEXTMESH_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x1E6C97E0)
#define UNITYENGINE_TEXTMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C9850)

namespace UnityEngine
{
	inline static constexpr unsigned int TextMesh_TypeDefinitionIndex = 6367;

	class TextMesh : public ::UnityEngine::Component
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH__CTOR_OFFSET))(this);
		}

		::System::Void set_text(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH_SET_TEXT_OFFSET))(this, value);
		}

		::UnityEngine::Font* get_font()
		{
			return ((::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH_GET_FONT_OFFSET))(this);
		}

		::System::Void set_font(::UnityEngine::Font* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH_SET_FONT_OFFSET))(this, value);
		}

		::System::Int32 get_fontSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH_GET_FONTSIZE_OFFSET))(this);
		}

		::System::Void set_fontSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH_SET_FONTSIZE_OFFSET))(this, value);
		}

		::System::Void set_color(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH_SET_COLOR_OFFSET))(this, value);
		}

		::System::Void set_color_Injected(::UnityEngine::Color& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH_SET_COLOR_INJECTED_OFFSET))(this, value);
		}
	};
}
