#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace XLua { class LuaTable; }
namespace XLua { class ObjectTranslator; }

namespace XLua
{
	inline static constexpr unsigned int LuaTable__GetKeys_d__16_1_TypeDefinitionIndex = 47961;

	template <typename T>
	class LuaTable__GetKeys_d__16_1 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::XLua::LuaTable* __4__this; // 0x0
		::System::IntPtr _L_5__2; // 0x0
		::XLua::ObjectTranslator* _translator_5__3; // 0x0
		::System::Int32 _oldTop_5__4; // 0x0
	};
}
