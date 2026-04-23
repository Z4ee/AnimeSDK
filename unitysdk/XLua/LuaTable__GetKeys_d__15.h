#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace XLua { class LuaTable; }
namespace XLua { class ObjectTranslator; }

#define XLUA_LUATABLE__GETKEYS_D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x112394C0)
#define XLUA_LUATABLE__GETKEYS_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x11239950)
#define XLUA_LUATABLE__GETKEYS_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x112398E0)
#define XLUA_LUATABLE__GETKEYS_D__15_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x112399D0)
#define XLUA_LUATABLE__GETKEYS_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11239940)
#define XLUA_LUATABLE__GETKEYS_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x112398F0)
#define XLUA_LUATABLE__GETKEYS_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x112394B0)
#define XLUA_LUATABLE__GETKEYS_D__15__CTOR_OFFSET UNITYSDK_OFFSET(0x11239490)

namespace XLua
{
	inline static constexpr unsigned int LuaTable__GetKeys_d__15_TypeDefinitionIndex = 46404;

	class LuaTable__GetKeys_d__15 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::XLua::LuaTable* __4__this; // 0x18
		::XLua::ObjectTranslator* _translator_5__3; // 0x20
		::System::Int32 __l__initialThreadId; // 0x28
		::System::IntPtr _L_5__2; // 0x30
		::System::Int32 _oldTop_5__4; // 0x38
		::System::Int32 __1__state; // 0x3C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUATABLE__GETKEYS_D__15__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUATABLE__GETKEYS_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUATABLE__GETKEYS_D__15_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUATABLE__GETKEYS_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUATABLE__GETKEYS_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUATABLE__GETKEYS_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_System_Object__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUATABLE__GETKEYS_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUATABLE__GETKEYS_D__15_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
