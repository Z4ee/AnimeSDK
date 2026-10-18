#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/XLua/TemplateEngine/TokenType.h"

namespace System { class String; }

#define XLUA_TEMPLATEENGINE_CHUNK_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x153B1B30)
#define XLUA_TEMPLATEENGINE_CHUNK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x153B1B10)
#define XLUA_TEMPLATEENGINE_CHUNK_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x153B1B40)
#define XLUA_TEMPLATEENGINE_CHUNK_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x153B1B20)
#define XLUA_TEMPLATEENGINE_CHUNK__CTOR_OFFSET UNITYSDK_OFFSET(0x153B1B50)

namespace XLua::TemplateEngine
{
	inline static constexpr unsigned int Chunk_TypeDefinitionIndex = 50286;

	class Chunk : public ::System::Object
	{
	public:
		::System::String* _Text_k__BackingField; // 0x10
		::XLua::TemplateEngine::TokenType _Type_k__BackingField; // 0x18

		::System::Void _ctor(::XLua::TemplateEngine::TokenType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::TemplateEngine::TokenType, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_CHUNK__CTOR_OFFSET))(this, a1, a2);
		}

		::XLua::TemplateEngine::TokenType get_Type()
		{
			return ((::XLua::TemplateEngine::TokenType(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_CHUNK_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::XLua::TemplateEngine::TokenType a1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::TemplateEngine::TokenType))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_CHUNK_SET_TYPE_OFFSET))(this, a1);
		}

		::System::String* get_Text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_CHUNK_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_Text(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_CHUNK_SET_TEXT_OFFSET))(this, a1);
		}
	};
}
