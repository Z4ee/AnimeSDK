#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/CharacterInfo.h"
#include "unitysdk/UnityEngine/FontStyle.h"
#include "unitysdk/UnityEngine/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Font_FontTextureRebuildCallback; }
namespace UnityEngine { class Material; }

#define UNITYENGINE_FONT_ADD_TEXTUREREBUILT_OFFSET UNITYSDK_OFFSET(0x1A4FDB50)
#define UNITYENGINE_FONT_GETCHARACTERINFO_1_OFFSET UNITYSDK_OFFSET(0x1A4FE000)
#define UNITYENGINE_FONT_GETCHARACTERINFO_2_OFFSET UNITYSDK_OFFSET(0x1A4FE020)
#define UNITYENGINE_FONT_GETCHARACTERINFO_OFFSET UNITYSDK_OFFSET(0x1A4FDFF0)
#define UNITYENGINE_FONT_GET_DYNAMIC_OFFSET UNITYSDK_OFFSET(0x1A4FDC90)
#define UNITYENGINE_FONT_GET_FONTNAMES_OFFSET UNITYSDK_OFFSET(0x1A4FDC80)
#define UNITYENGINE_FONT_GET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0x1A4FDCA0)
#define UNITYENGINE_FONT_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1A4FDC70)
#define UNITYENGINE_FONT_HASCHARACTER_1_OFFSET UNITYSDK_OFFSET(0x1A4FDFE0)
#define UNITYENGINE_FONT_HASCHARACTER_OFFSET UNITYSDK_OFFSET(0x1A4FDFD0)
#define UNITYENGINE_FONT_INTERNAL_CREATEFONT_OFFSET UNITYSDK_OFFSET(0x1A4FDCD0)
#define UNITYENGINE_FONT_INVOKETEXTUREREBUILT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4FDCE0)
#define UNITYENGINE_FONT_REMOVE_TEXTUREREBUILT_OFFSET UNITYSDK_OFFSET(0x1A4FDBE0)
#define UNITYENGINE_FONT_REQUESTCHARACTERSINTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1A4FE050)
#define UNITYENGINE_FONT_REQUESTCHARACTERSINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1A4FE040)
#define UNITYENGINE_FONT_SET_TEXTUREGROWSIZE_OFFSET UNITYSDK_OFFSET(0x1A4FDCB0)
#define UNITYENGINE_FONT_UPDATEFONTTEXTURE_OFFSET UNITYSDK_OFFSET(0x1A4FE060)
#define UNITYENGINE_FONT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4FDCC0)

namespace UnityEngine
{
	inline static constexpr unsigned int Font_TypeDefinitionIndex = 4959;

	class Font : public ::UnityEngine::Object
	{
	public:
		static ::System::Action_1<::UnityEngine::Font*>** StaticGet_textureRebuilt()
		{
			return (::System::Action_1<::UnityEngine::Font*>**)Il2CppClass::FromTypeDefinitionIndex(Font_TypeDefinitionIndex)->GetStaticField(0x1D0);
		}
		::UnityEngine::Font_FontTextureRebuildCallback* m_FontTextureRebuildCallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT__CTOR_OFFSET))(this);
		}

		static ::System::Void add_textureRebuilt(::System::Action_1<::UnityEngine::Font*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::Font*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_ADD_TEXTUREREBUILT_OFFSET))(value);
		}

		static ::System::Void remove_textureRebuilt(::System::Action_1<::UnityEngine::Font*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::Font*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_REMOVE_TEXTUREREBUILT_OFFSET))(value);
		}

		::UnityEngine::Material* get_material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_GET_MATERIAL_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_fontNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_GET_FONTNAMES_OFFSET))(this);
		}

		::System::Boolean get_dynamic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_GET_DYNAMIC_OFFSET))(this);
		}

		::System::Int32 get_fontSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_GET_FONTSIZE_OFFSET))(this);
		}

		::System::Void set_textureGrowSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_SET_TEXTUREGROWSIZE_OFFSET))(this, value);
		}

		static ::System::Void InvokeTextureRebuilt_Internal(::UnityEngine::Font* font)
		{
			return ((::System::Void(*)(::UnityEngine::Font*))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_INVOKETEXTUREREBUILT_INTERNAL_OFFSET))(font);
		}

		::System::Boolean HasCharacter(::System::Char c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_HASCHARACTER_OFFSET))(this, c);
		}

		::System::Boolean HasCharacter_1(::System::Int32 c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_HASCHARACTER_1_OFFSET))(this, c);
		}

		static ::System::Void Internal_CreateFont(::UnityEngine::Font* self, ::System::String* name)
		{
			return ((::System::Void(*)(::UnityEngine::Font*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_INTERNAL_CREATEFONT_OFFSET))(self, name);
		}

		::System::Boolean GetCharacterInfo(::System::Char ch, ::UnityEngine::CharacterInfo& info, ::System::Int32 size, ::UnityEngine::FontStyle style)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::UnityEngine::CharacterInfo&, ::System::Int32, ::UnityEngine::FontStyle))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_GETCHARACTERINFO_OFFSET))(this, ch, info, size, style);
		}

		::System::Boolean GetCharacterInfo_1(::System::Char ch, ::UnityEngine::CharacterInfo& info, ::System::Int32 size)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::UnityEngine::CharacterInfo&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_GETCHARACTERINFO_1_OFFSET))(this, ch, info, size);
		}

		::System::Boolean GetCharacterInfo_2(::System::Char ch, ::UnityEngine::CharacterInfo& info)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::UnityEngine::CharacterInfo&))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_GETCHARACTERINFO_2_OFFSET))(this, ch, info);
		}

		::System::Void RequestCharactersInTexture(::System::String* characters, ::System::Int32 size, ::UnityEngine::FontStyle style)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::UnityEngine::FontStyle))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_REQUESTCHARACTERSINTEXTURE_OFFSET))(this, characters, size, style);
		}

		::System::Void RequestCharactersInTexture_1(::System::String* characters)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_REQUESTCHARACTERSINTEXTURE_1_OFFSET))(this, characters);
		}

		::System::Void UpdateFontTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_UPDATEFONTTEXTURE_OFFSET))(this);
		}
	};
}
