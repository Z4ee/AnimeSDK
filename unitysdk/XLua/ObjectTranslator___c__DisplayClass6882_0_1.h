#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace XLua { template <typename T> class ObjectTranslator_GetFunc_1; }
namespace XLua { template <typename T> class ObjectTranslator_PushAction_1; }
namespace XLua { template <typename T> class ObjectTranslator_UpdateAction_1; }

namespace XLua
{
	inline static constexpr unsigned int ObjectTranslator___c__DisplayClass6882_0_1_TypeDefinitionIndex = 47875;

	template <typename T>
	class ObjectTranslator___c__DisplayClass6882_0_1 : public ::System::Object
	{
	public:
		::XLua::ObjectTranslator_GetFunc_1<T>* get; // 0x0
		::XLua::ObjectTranslator_PushAction_1<T>* push; // 0x0
		::XLua::ObjectTranslator_UpdateAction_1<T>* update; // 0x0
	};
}
