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

#define XLUA_LUAMEMORYLEAKCHECKER_FINDGROWING_OFFSET UNITYSDK_OFFSET(0x112371E0)
#define XLUA_LUAMEMORYLEAKCHECKER_GETRELATIONSHIP_OFFSET UNITYSDK_OFFSET(0x11236E60)
#define XLUA_LUAMEMORYLEAKCHECKER_GETSIZEREPORT_OFFSET UNITYSDK_OFFSET(0x112369D0)
#define XLUA_LUAMEMORYLEAKCHECKER_MAKEKEY_OFFSET UNITYSDK_OFFSET(0x11236CF0)
#define XLUA_LUAMEMORYLEAKCHECKER_MEMORYLEAKCHECK_OFFSET UNITYSDK_OFFSET(0x112374A0)
#define XLUA_LUAMEMORYLEAKCHECKER_MEMORYLEAKREPORT_OFFSET UNITYSDK_OFFSET(0x11237590)
#define XLUA_LUAMEMORYLEAKCHECKER_STARTMEMORYLEAKCHECK_OFFSET UNITYSDK_OFFSET(0x11237100)

namespace XLua
{
	inline static constexpr unsigned int LuaMemoryLeakChecker_TypeDefinitionIndex = 46290;

	class LuaMemoryLeakChecker : public ::System::Object
	{
	public:
		// static const ::System::String* UNKNOW_KEY; // 0x0
		// static const ::System::String* METATABLE_KEY; // 0x0
		// static const ::System::String* KEY_OF_TABLE; // 0x0

		static ::XLua::LuaMemoryLeakChecker_Data* getSizeReport(::XLua::LuaEnv* env)
		{
			return ((::XLua::LuaMemoryLeakChecker_Data*(*)(::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER_GETSIZEREPORT_OFFSET))(env);
		}

		static ::System::String* makeKey(::XLua::LuaDLL::RelationshipType type, ::System::String* key, ::System::Double d, ::System::String* key2)
		{
			return ((::System::String*(*)(::XLua::LuaDLL::RelationshipType, ::System::String*, ::System::Double, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER_MAKEKEY_OFFSET))(type, key, d, key2);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::IntPtr, ::System::Collections::Generic::List_1<::XLua::LuaMemoryLeakChecker_RefInfo>*>* getRelationship(::XLua::LuaEnv* env)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::IntPtr, ::System::Collections::Generic::List_1<::XLua::LuaMemoryLeakChecker_RefInfo>*>*(*)(::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER_GETRELATIONSHIP_OFFSET))(env);
		}

		static ::XLua::LuaMemoryLeakChecker_Data* StartMemoryLeakCheck(::XLua::LuaEnv* env)
		{
			return ((::XLua::LuaMemoryLeakChecker_Data*(*)(::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER_STARTMEMORYLEAKCHECK_OFFSET))(env);
		}

		static ::XLua::LuaMemoryLeakChecker_Data* findGrowing(::XLua::LuaMemoryLeakChecker_Data* from, ::XLua::LuaMemoryLeakChecker_Data* to)
		{
			return ((::XLua::LuaMemoryLeakChecker_Data*(*)(::XLua::LuaMemoryLeakChecker_Data*, ::XLua::LuaMemoryLeakChecker_Data*))((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER_FINDGROWING_OFFSET))(from, to);
		}

		static ::XLua::LuaMemoryLeakChecker_Data* MemoryLeakCheck(::XLua::LuaEnv* env, ::XLua::LuaMemoryLeakChecker_Data* last)
		{
			return ((::XLua::LuaMemoryLeakChecker_Data*(*)(::XLua::LuaEnv*, ::XLua::LuaMemoryLeakChecker_Data*))((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER_MEMORYLEAKCHECK_OFFSET))(env, last);
		}

		static ::System::String* MemoryLeakReport(::XLua::LuaEnv* env, ::XLua::LuaMemoryLeakChecker_Data* data, ::System::Int32 maxLevel)
		{
			return ((::System::String*(*)(::XLua::LuaEnv*, ::XLua::LuaMemoryLeakChecker_Data*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER_MEMORYLEAKREPORT_OFFSET))(env, data, maxLevel);
		}
	};
}
