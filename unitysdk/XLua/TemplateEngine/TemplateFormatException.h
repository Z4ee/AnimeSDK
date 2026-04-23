#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define XLUA_TEMPLATEENGINE_TEMPLATEFORMATEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x11745F10)

namespace XLua::TemplateEngine
{
	inline static constexpr unsigned int TemplateFormatException_TypeDefinitionIndex = 46471;

	class TemplateFormatException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_TEMPLATEFORMATEXCEPTION__CTOR_OFFSET))(this, message);
		}
	};
}
