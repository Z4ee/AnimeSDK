#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/XLua/OverloadMethodWrap.h"

namespace System { class Type; }
namespace System::Reflection { class MethodBase; }
namespace XLua { class ObjectTranslator; }

namespace XLua
{
	inline static constexpr unsigned int DictionaryWrap_EnumeratorMoveNext_2_TypeDefinitionIndex = 47969;

	template <typename TKey, typename TValue>
	class DictionaryWrap_EnumeratorMoveNext_2 : public ::XLua::OverloadMethodWrap
	{
	public:
	};
}
