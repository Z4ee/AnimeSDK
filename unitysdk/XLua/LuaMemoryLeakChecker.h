#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/XLua/LuaDLL/RelationshipType.h"
#include "unitysdk/XLua/LuaMemoryLeakChecker_RefInfo.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace XLua { class LuaEnv; }
namespace XLua { class LuaMemoryLeakChecker_Data; }

#define XLUA_LUAMEMORYLEAKCHECKER_FINDGROWING_OFFSET UNITYSDK_OFFSET(0x11864AA0)
#define XLUA_LUAMEMORYLEAKCHECKER_GETRELATIONSHIP_OFFSET UNITYSDK_OFFSET(0x11864710)
#define XLUA_LUAMEMORYLEAKCHECKER_GETSIZEREPORT_OFFSET UNITYSDK_OFFSET(0x118641B0)
#define XLUA_LUAMEMORYLEAKCHECKER_MAKEKEY_OFFSET UNITYSDK_OFFSET(0x11864530)
#define XLUA_LUAMEMORYLEAKCHECKER_MEMORYLEAKCHECK_OFFSET UNITYSDK_OFFSET(0x11864D50)
#define XLUA_LUAMEMORYLEAKCHECKER_MEMORYLEAKREPORT_OFFSET UNITYSDK_OFFSET(0x11864E40)
#define XLUA_LUAMEMORYLEAKCHECKER_STARTMEMORYLEAKCHECK_OFFSET UNITYSDK_OFFSET(0x118649C0)

namespace XLua
{
	inline static constexpr unsigned int LuaMemoryLeakChecker_TypeDefinitionIndex = 50430;

	class LuaMemoryLeakChecker : public ::System::Object
	{
	public:
		// static const ::System::String* UNKNOW_KEY; // 0x0
		// static const ::System::String* METATABLE_KEY; // 0x0
		// static const ::System::String* KEY_OF_TABLE; // 0x0

		static ::XLua::LuaMemoryLeakChecker_Data* getSizeReport(::XLua::LuaEnv* a1)
		{
			return ((::XLua::LuaMemoryLeakChecker_Data*(*)(::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER_GETSIZEREPORT_OFFSET))(a1);
		}

		static ::System::String* makeKey(::XLua::LuaDLL::RelationshipType a1, ::System::String* a2, ::System::Double a3, ::System::String* a4)
		{
			return ((::System::String*(*)(::XLua::LuaDLL::RelationshipType, ::System::String*, ::System::Double, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER_MAKEKEY_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::IntPtr, ::System::Collections::Generic::List_1<::XLua::LuaMemoryLeakChecker_RefInfo>*>* getRelationship(::XLua::LuaEnv* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::IntPtr, ::System::Collections::Generic::List_1<::XLua::LuaMemoryLeakChecker_RefInfo>*>*(*)(::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER_GETRELATIONSHIP_OFFSET))(a1);
		}

		static ::XLua::LuaMemoryLeakChecker_Data* StartMemoryLeakCheck(::XLua::LuaEnv* a1)
		{
			return ((::XLua::LuaMemoryLeakChecker_Data*(*)(::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER_STARTMEMORYLEAKCHECK_OFFSET))(a1);
		}

		static ::XLua::LuaMemoryLeakChecker_Data* findGrowing(::XLua::LuaMemoryLeakChecker_Data* a1, ::XLua::LuaMemoryLeakChecker_Data* a2)
		{
			return ((::XLua::LuaMemoryLeakChecker_Data*(*)(::XLua::LuaMemoryLeakChecker_Data*, ::XLua::LuaMemoryLeakChecker_Data*))((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER_FINDGROWING_OFFSET))(a1, a2);
		}

		static ::XLua::LuaMemoryLeakChecker_Data* MemoryLeakCheck(::XLua::LuaEnv* a1, ::XLua::LuaMemoryLeakChecker_Data* a2)
		{
			return ((::XLua::LuaMemoryLeakChecker_Data*(*)(::XLua::LuaEnv*, ::XLua::LuaMemoryLeakChecker_Data*))((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER_MEMORYLEAKCHECK_OFFSET))(a1, a2);
		}

		static ::System::String* MemoryLeakReport(::XLua::LuaEnv* a1, ::XLua::LuaMemoryLeakChecker_Data* a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::XLua::LuaEnv*, ::XLua::LuaMemoryLeakChecker_Data*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER_MEMORYLEAKREPORT_OFFSET))(a1, a2, a3);
		}
	};
}
