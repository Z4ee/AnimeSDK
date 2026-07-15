#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/XLua/LuaMemoryLeakChecker_RefInfo.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define XLUA_LUAMEMORYLEAKCHECKER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10BED0A0)
#define XLUA_LUAMEMORYLEAKCHECKER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10BED0E0)
#define XLUA_LUAMEMORYLEAKCHECKER___C__MEMORYLEAKREPORT_B__11_0_OFFSET UNITYSDK_OFFSET(0x10BED120)
#define XLUA_LUAMEMORYLEAKCHECKER___C__MEMORYLEAKREPORT_B__11_1_OFFSET UNITYSDK_OFFSET(0x10BED130)
#define XLUA_LUAMEMORYLEAKCHECKER___C__MEMORYLEAKREPORT_B__11_2_OFFSET UNITYSDK_OFFSET(0x10BED0F0)
#define XLUA_LUAMEMORYLEAKCHECKER___C__MEMORYLEAKREPORT_B__11_3_OFFSET UNITYSDK_OFFSET(0x10BED100)
#define XLUA_LUAMEMORYLEAKCHECKER___C__MEMORYLEAKREPORT_B__11_4_OFFSET UNITYSDK_OFFSET(0x10BED110)

namespace XLua
{
	inline static constexpr unsigned int LuaMemoryLeakChecker___c_TypeDefinitionIndex = 47848;

	class LuaMemoryLeakChecker___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::XLua::LuaMemoryLeakChecker_RefInfo, ::System::String*>** StaticGet___9__11_1()
		{
			return (::System::Func_2<::XLua::LuaMemoryLeakChecker_RefInfo, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(LuaMemoryLeakChecker___c_TypeDefinitionIndex)->GetStaticField(0x6C220);
		}
		static ::System::Func_2<::XLua::LuaMemoryLeakChecker_RefInfo, ::System::Boolean>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::XLua::LuaMemoryLeakChecker_RefInfo, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LuaMemoryLeakChecker___c_TypeDefinitionIndex)->GetStaticField(0x6C228);
		}
		static ::XLua::LuaMemoryLeakChecker___c** StaticGet___9()
		{
			return (::XLua::LuaMemoryLeakChecker___c**)Il2CppClass::FromTypeDefinitionIndex(LuaMemoryLeakChecker___c_TypeDefinitionIndex)->GetStaticField(0x6C230);
		}
		static ::System::Func_2<::XLua::LuaMemoryLeakChecker_RefInfo, ::System::String*>** StaticGet___9__11_3()
		{
			return (::System::Func_2<::XLua::LuaMemoryLeakChecker_RefInfo, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(LuaMemoryLeakChecker___c_TypeDefinitionIndex)->GetStaticField(0x6C238);
		}
		static ::System::Func_2<::XLua::LuaMemoryLeakChecker_RefInfo, ::System::Boolean>** StaticGet___9__11_4()
		{
			return (::System::Func_2<::XLua::LuaMemoryLeakChecker_RefInfo, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LuaMemoryLeakChecker___c_TypeDefinitionIndex)->GetStaticField(0x6C240);
		}
		static ::System::Func_2<::XLua::LuaMemoryLeakChecker_RefInfo, ::System::Boolean>** StaticGet___9__11_2()
		{
			return (::System::Func_2<::XLua::LuaMemoryLeakChecker_RefInfo, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LuaMemoryLeakChecker___c_TypeDefinitionIndex)->GetStaticField(0x6C248);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _MemoryLeakReport_b__11_2(::XLua::LuaMemoryLeakChecker_RefInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::XLua::LuaMemoryLeakChecker_RefInfo))((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER___C__MEMORYLEAKREPORT_B__11_2_OFFSET))(this, a1);
		}

		::System::String* _MemoryLeakReport_b__11_3(::XLua::LuaMemoryLeakChecker_RefInfo a1)
		{
			return ((::System::String*(*)(::PVOID, ::XLua::LuaMemoryLeakChecker_RefInfo))((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER___C__MEMORYLEAKREPORT_B__11_3_OFFSET))(this, a1);
		}

		::System::Boolean _MemoryLeakReport_b__11_4(::XLua::LuaMemoryLeakChecker_RefInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::XLua::LuaMemoryLeakChecker_RefInfo))((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER___C__MEMORYLEAKREPORT_B__11_4_OFFSET))(this, a1);
		}

		::System::Boolean _MemoryLeakReport_b__11_0(::XLua::LuaMemoryLeakChecker_RefInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::XLua::LuaMemoryLeakChecker_RefInfo))((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER___C__MEMORYLEAKREPORT_B__11_0_OFFSET))(this, a1);
		}

		::System::String* _MemoryLeakReport_b__11_1(::XLua::LuaMemoryLeakChecker_RefInfo a1)
		{
			return ((::System::String*(*)(::PVOID, ::XLua::LuaMemoryLeakChecker_RefInfo))((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER___C__MEMORYLEAKREPORT_B__11_1_OFFSET))(this, a1);
		}
	};
}
