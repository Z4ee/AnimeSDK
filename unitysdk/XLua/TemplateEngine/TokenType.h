#pragma once
#include "unitysdk/unitysdk.h"

namespace XLua::TemplateEngine
{
	inline static constexpr unsigned int TokenType_TypeDefinitionIndex = 40556;

	enum class TokenType : ::System::Int32
	{
		Code = 0,
		Eval = 1,
		Text = 2,
	};
}
