#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/XLua/OverloadMethodWrap.h"

namespace System { class Type; }
namespace System::Reflection { class MethodBase; }
namespace XLua { class ObjectTranslator; }

namespace XLua
{
	inline static constexpr unsigned int KeyValuePairWrap_GetValue_2_TypeDefinitionIndex = 47972;

	template <typename TKey, typename TValue>
	class KeyValuePairWrap_GetValue_2 : public ::XLua::OverloadMethodWrap
	{
	public:
	};
}
