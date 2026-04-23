#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/XLua/TemplateEngine/TokenType.h"

namespace System { class String; }

#define XLUA_TEMPLATEENGINE_CHUNK_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x11744450)
#define XLUA_TEMPLATEENGINE_CHUNK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x11744430)
#define XLUA_TEMPLATEENGINE_CHUNK_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x11744460)
#define XLUA_TEMPLATEENGINE_CHUNK_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x11744440)
#define XLUA_TEMPLATEENGINE_CHUNK__CTOR_OFFSET UNITYSDK_OFFSET(0x11744470)

namespace XLua::TemplateEngine
{
	inline static constexpr unsigned int Chunk_TypeDefinitionIndex = 46470;

	class Chunk : public ::System::Object
	{
	public:
		::System::String* _Text_k__BackingField; // 0x10
		::XLua::TemplateEngine::TokenType _Type_k__BackingField; // 0x18

		::System::Void _ctor(::XLua::TemplateEngine::TokenType type, ::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::TemplateEngine::TokenType, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_CHUNK__CTOR_OFFSET))(this, type, text);
		}

		::XLua::TemplateEngine::TokenType get_Type()
		{
			return ((::XLua::TemplateEngine::TokenType(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_CHUNK_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::XLua::TemplateEngine::TokenType value)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::TemplateEngine::TokenType))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_CHUNK_SET_TYPE_OFFSET))(this, value);
		}

		::System::String* get_Text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_CHUNK_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_Text(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_CHUNK_SET_TEXT_OFFSET))(this, value);
		}
	};
}
