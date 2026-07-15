#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/XLua/OverloadMethodWrap.h"

namespace System { class Type; }
namespace System::Reflection { class MethodBase; }
namespace XLua { class ObjectTranslator; }

namespace XLua
{
	inline static constexpr unsigned int DictionaryWrap_GetCount_2_TypeDefinitionIndex = 47973;

	template <typename TKey, typename Tvalue>
	class DictionaryWrap_GetCount_2 : public ::XLua::OverloadMethodWrap
	{
	public:
	};
}
