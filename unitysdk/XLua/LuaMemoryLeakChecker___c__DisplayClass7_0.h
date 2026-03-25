#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/XLua/LuaDLL/RelationshipType.h"
#include "unitysdk/XLua/LuaMemoryLeakChecker_RefInfo.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define XLUA_LUAMEMORYLEAKCHECKER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xFF6D3A0)
#define XLUA_LUAMEMORYLEAKCHECKER___C__DISPLAYCLASS7_0__GETRELATIONSHIP_B__0_OFFSET UNITYSDK_OFFSET(0xFF6E8F0)

namespace XLua
{
	inline static constexpr unsigned int LuaMemoryLeakChecker___c__DisplayClass7_0_TypeDefinitionIndex = 40388;

	class LuaMemoryLeakChecker___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::IntPtr, ::System::Collections::Generic::List_1<::XLua::LuaMemoryLeakChecker_RefInfo>*>* result; // 0x10
		::System::IntPtr globalPointer; // 0x18
		::System::IntPtr registryPointer; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _getRelationship_b__0(::System::IntPtr parent, ::System::IntPtr child, ::XLua::LuaDLL::RelationshipType type, ::System::String* key, ::System::Double d, ::System::String* key2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::XLua::LuaDLL::RelationshipType, ::System::String*, ::System::Double, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER___C__DISPLAYCLASS7_0__GETRELATIONSHIP_B__0_OFFSET))(this, parent, child, type, key, d, key2);
		}
	};
}
