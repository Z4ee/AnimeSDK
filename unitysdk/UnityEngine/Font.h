#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/CharacterInfo.h"
#include "unitysdk/UnityEngine/FontStyle.h"
#include "unitysdk/UnityEngine/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Font_FontTextureRebuildCallback; }
namespace UnityEngine { class Material; }

#define UNITYENGINE_FONT_ADD_M_FONTTEXTUREREBUILDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1FAAEBC0)
#define UNITYENGINE_FONT_ADD_TEXTUREREBUILT_OFFSET UNITYSDK_OFFSET(0x1FAAEAA0)
#define UNITYENGINE_FONT_CREATEDYNAMICFONTFROMOSFONT_1_OFFSET UNITYSDK_OFFSET(0x1FAAF000)
#define UNITYENGINE_FONT_CREATEDYNAMICFONTFROMOSFONT_OFFSET UNITYSDK_OFFSET(0x1FAAEF30)
#define UNITYENGINE_FONT_GETCHARACTERINFO_1_OFFSET UNITYSDK_OFFSET(0x1FAAF450)
#define UNITYENGINE_FONT_GETCHARACTERINFO_2_OFFSET UNITYSDK_OFFSET(0x1FAAF470)
#define UNITYENGINE_FONT_GETCHARACTERINFO_OFFSET UNITYSDK_OFFSET(0x1FAAF440)
#define UNITYENGINE_FONT_GETDEFAULT_OFFSET UNITYSDK_OFFSET(0x1FAAF3D0)
#define UNITYENGINE_FONT_GETMAXVERTSFORSTRING_OFFSET UNITYSDK_OFFSET(0x1FAAF3B0)
#define UNITYENGINE_FONT_GETOSINSTALLEDFONTNAMES_OFFSET UNITYSDK_OFFSET(0x1FAAF400)
#define UNITYENGINE_FONT_GETPATHSTOOSFONTS_OFFSET UNITYSDK_OFFSET(0x1FAAF410)
#define UNITYENGINE_FONT_GET_ASCENT_OFFSET UNITYSDK_OFFSET(0x1FAAED10)
#define UNITYENGINE_FONT_GET_CHARACTERINFO_OFFSET UNITYSDK_OFFSET(0x1FAAED30)
#define UNITYENGINE_FONT_GET_DYNAMIC_OFFSET UNITYSDK_OFFSET(0x1FAAED00)
#define UNITYENGINE_FONT_GET_FONTNAMES_OFFSET UNITYSDK_OFFSET(0x1FAAECE0)
#define UNITYENGINE_FONT_GET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0x1FAAED20)
#define UNITYENGINE_FONT_GET_LINEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1FAAED50)
#define UNITYENGINE_FONT_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1FAAECC0)
#define UNITYENGINE_FONT_GET_TEXTUREREBUILDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1FAAED60)
#define UNITYENGINE_FONT_GET_USEMMAPFONTDATA_OFFSET UNITYSDK_OFFSET(0x1FAAF420)
#define UNITYENGINE_FONT_HASCHARACTER_1_OFFSET UNITYSDK_OFFSET(0x1FAAF3F0)
#define UNITYENGINE_FONT_HASCHARACTER_OFFSET UNITYSDK_OFFSET(0x1FAAF3E0)
#define UNITYENGINE_FONT_INTERNAL_CREATEDYNAMICFONT_OFFSET UNITYSDK_OFFSET(0x1FAAEF20)
#define UNITYENGINE_FONT_INTERNAL_CREATEFONTFROMPATH_OFFSET UNITYSDK_OFFSET(0x1FAAEEA0)
#define UNITYENGINE_FONT_INTERNAL_CREATEFONT_OFFSET UNITYSDK_OFFSET(0x1FAAEDE0)
#define UNITYENGINE_FONT_INVOKETEXTUREREBUILT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1FAAF0A0)
#define UNITYENGINE_FONT_REMOVE_M_FONTTEXTUREREBUILDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1FAAEC40)
#define UNITYENGINE_FONT_REMOVE_TEXTUREREBUILT_OFFSET UNITYSDK_OFFSET(0x1FAAEB30)
#define UNITYENGINE_FONT_REQUESTCHARACTERSINTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1FAAF4A0)
#define UNITYENGINE_FONT_REQUESTCHARACTERSINTEXTURE_2_OFFSET UNITYSDK_OFFSET(0x1FAAF4B0)
#define UNITYENGINE_FONT_REQUESTCHARACTERSINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FAAF490)
#define UNITYENGINE_FONT_SET_CHARACTERINFO_OFFSET UNITYSDK_OFFSET(0x1FAAED40)
#define UNITYENGINE_FONT_SET_FONTNAMES_OFFSET UNITYSDK_OFFSET(0x1FAAECF0)
#define UNITYENGINE_FONT_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x1FAAECD0)
#define UNITYENGINE_FONT_SET_TEXTUREREBUILDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1FAAED70)
#define UNITYENGINE_FONT_SET_USEMMAPFONTDATA_OFFSET UNITYSDK_OFFSET(0x1FAAF430)
#define UNITYENGINE_FONT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FAAEDF0)
#define UNITYENGINE_FONT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1FAAEEB0)
#define UNITYENGINE_FONT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAAED80)

namespace UnityEngine
{
	inline static constexpr unsigned int Font_TypeDefinitionIndex = 6376;

	class Font : public ::UnityEngine::Object
	{
	public:
		static ::System::Action_1<::UnityEngine::Font*>** StaticGet_textureRebuilt()
		{
			return (::System::Action_1<::UnityEngine::Font*>**)Il2CppClass::FromTypeDefinitionIndex(Font_TypeDefinitionIndex)->GetStaticField(0x5840);
		}
		::UnityEngine::Font_FontTextureRebuildCallback* m_FontTextureRebuildCallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT__CTOR_1_OFFSET))(this, name);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::String*>* names, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT__CTOR_2_OFFSET))(this, names, size);
		}

		static ::System::Void add_textureRebuilt(::System::Action_1<::UnityEngine::Font*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::Font*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_ADD_TEXTUREREBUILT_OFFSET))(value);
		}

		static ::System::Void remove_textureRebuilt(::System::Action_1<::UnityEngine::Font*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::Font*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_REMOVE_TEXTUREREBUILT_OFFSET))(value);
		}

		::System::Void add_m_FontTextureRebuildCallback(::UnityEngine::Font_FontTextureRebuildCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font_FontTextureRebuildCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_ADD_M_FONTTEXTUREREBUILDCALLBACK_OFFSET))(this, value);
		}

		::System::Void remove_m_FontTextureRebuildCallback(::UnityEngine::Font_FontTextureRebuildCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font_FontTextureRebuildCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_REMOVE_M_FONTTEXTUREREBUILDCALLBACK_OFFSET))(this, value);
		}

		::UnityEngine::Material* get_material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_GET_MATERIAL_OFFSET))(this);
		}

		::System::Void set_material(::UnityEngine::Material* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_SET_MATERIAL_OFFSET))(this, value);
		}

		::Il2CppArray<::System::String*>* get_fontNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_GET_FONTNAMES_OFFSET))(this);
		}

		::System::Void set_fontNames(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_SET_FONTNAMES_OFFSET))(this, value);
		}

		::System::Boolean get_dynamic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_GET_DYNAMIC_OFFSET))(this);
		}

		::System::Int32 get_ascent()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_GET_ASCENT_OFFSET))(this);
		}

		::System::Int32 get_fontSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_GET_FONTSIZE_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::CharacterInfo>* get_characterInfo()
		{
			return ((::Il2CppArray<::UnityEngine::CharacterInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_GET_CHARACTERINFO_OFFSET))(this);
		}

		::System::Void set_characterInfo(::Il2CppArray<::UnityEngine::CharacterInfo>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::CharacterInfo>*))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_SET_CHARACTERINFO_OFFSET))(this, value);
		}

		::System::Int32 get_lineHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_GET_LINEHEIGHT_OFFSET))(this);
		}

		::UnityEngine::Font_FontTextureRebuildCallback* get_textureRebuildCallback()
		{
			return ((::UnityEngine::Font_FontTextureRebuildCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_GET_TEXTUREREBUILDCALLBACK_OFFSET))(this);
		}

		::System::Void set_textureRebuildCallback(::UnityEngine::Font_FontTextureRebuildCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font_FontTextureRebuildCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_SET_TEXTUREREBUILDCALLBACK_OFFSET))(this, value);
		}

		static ::UnityEngine::Font* CreateDynamicFontFromOSFont(::System::String* fontname, ::System::Int32 size)
		{
			return ((::UnityEngine::Font*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_CREATEDYNAMICFONTFROMOSFONT_OFFSET))(fontname, size);
		}

		static ::UnityEngine::Font* CreateDynamicFontFromOSFont_1(::Il2CppArray<::System::String*>* fontnames, ::System::Int32 size)
		{
			return ((::UnityEngine::Font*(*)(::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_CREATEDYNAMICFONTFROMOSFONT_1_OFFSET))(fontnames, size);
		}

		static ::System::Void InvokeTextureRebuilt_Internal(::UnityEngine::Font* font)
		{
			return ((::System::Void(*)(::UnityEngine::Font*))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_INVOKETEXTUREREBUILT_INTERNAL_OFFSET))(font);
		}

		static ::System::Int32 GetMaxVertsForString(::System::String* str)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_GETMAXVERTSFORSTRING_OFFSET))(str);
		}

		static ::UnityEngine::Font* GetDefault()
		{
			return ((::UnityEngine::Font*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_GETDEFAULT_OFFSET))();
		}

		::System::Boolean HasCharacter(::System::Char c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_HASCHARACTER_OFFSET))(this, c);
		}

		::System::Boolean HasCharacter_1(::System::Int32 c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_HASCHARACTER_1_OFFSET))(this, c);
		}

		static ::Il2CppArray<::System::String*>* GetOSInstalledFontNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_GETOSINSTALLEDFONTNAMES_OFFSET))();
		}

		static ::Il2CppArray<::System::String*>* GetPathsToOSFonts()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_GETPATHSTOOSFONTS_OFFSET))();
		}

		static ::System::Boolean get_useMmapFontData()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_GET_USEMMAPFONTDATA_OFFSET))();
		}

		static ::System::Void set_useMmapFontData(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_SET_USEMMAPFONTDATA_OFFSET))(value);
		}

		static ::System::Void Internal_CreateFont(::UnityEngine::Font* self, ::System::String* name)
		{
			return ((::System::Void(*)(::UnityEngine::Font*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_INTERNAL_CREATEFONT_OFFSET))(self, name);
		}

		static ::System::Void Internal_CreateFontFromPath(::UnityEngine::Font* self, ::System::String* fontPath)
		{
			return ((::System::Void(*)(::UnityEngine::Font*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_INTERNAL_CREATEFONTFROMPATH_OFFSET))(self, fontPath);
		}

		static ::System::Void Internal_CreateDynamicFont(::UnityEngine::Font* self, ::Il2CppArray<::System::String*>* _names, ::System::Int32 size)
		{
			return ((::System::Void(*)(::UnityEngine::Font*, ::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_INTERNAL_CREATEDYNAMICFONT_OFFSET))(self, _names, size);
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

		::System::Void RequestCharactersInTexture_1(::System::String* characters, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_REQUESTCHARACTERSINTEXTURE_1_OFFSET))(this, characters, size);
		}

		::System::Void RequestCharactersInTexture_2(::System::String* characters)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_REQUESTCHARACTERSINTEXTURE_2_OFFSET))(this, characters);
		}
	};
}
