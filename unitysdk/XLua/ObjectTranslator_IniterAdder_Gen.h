#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace XLua { class LuaEnv; }
namespace XLua { class ObjectTranslator; }

#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_INIT_OFFSET UNITYSDK_OFFSET(0xBF8F7E0)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_00_OFFSET UNITYSDK_OFFSET(0xBF4CCC0)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_01_OFFSET UNITYSDK_OFFSET(0xBF54CE0)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_02_OFFSET UNITYSDK_OFFSET(0xBF5DE30)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_03_OFFSET UNITYSDK_OFFSET(0xBF665B0)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_04_OFFSET UNITYSDK_OFFSET(0xBF6E870)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_05_OFFSET UNITYSDK_OFFSET(0xBF76AF0)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_06_OFFSET UNITYSDK_OFFSET(0xBF7EA30)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_07_OFFSET UNITYSDK_OFFSET(0xBF87940)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_OFFSET UNITYSDK_OFFSET(0xBF4CC70)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERPUSHANDGETANDUPDATE_00_OFFSET UNITYSDK_OFFSET(0xBF8F850)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERPUSHANDGETANDUPDATE_01_OFFSET UNITYSDK_OFFSET(0xBF96E00)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERPUSHANDGETANDUPDATE_02_OFFSET UNITYSDK_OFFSET(0xBF9EDA0)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERPUSHANDGETANDUPDATE_03_OFFSET UNITYSDK_OFFSET(0xBFA6590)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERPUSHANDGETANDUPDATE_04_OFFSET UNITYSDK_OFFSET(0xBFADA30)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERPUSHANDGETANDUPDATE_05_OFFSET UNITYSDK_OFFSET(0xBFB4D90)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERPUSHANDGETANDUPDATE_06_OFFSET UNITYSDK_OFFSET(0xBFBC050)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERPUSHANDGETANDUPDATE_07_OFFSET UNITYSDK_OFFSET(0xBFC4330)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN__CCTOR_OFFSET UNITYSDK_OFFSET(0xBF4CC00)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN__CTOR_OFFSET UNITYSDK_OFFSET(0xBF4C490)

namespace XLua
{
	inline static constexpr unsigned int ObjectTranslator_IniterAdder_Gen_TypeDefinitionIndex = 50449;

	class ObjectTranslator_IniterAdder_Gen : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN__CTOR_OFFSET))(this);
		}

		static ::System::Void RegisterCast()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_OFFSET))();
		}

		static ::System::Void Init(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_INIT_OFFSET))(a1, a2);
		}

		static ::System::Void RegisterCast_00()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_00_OFFSET))();
		}

		static ::System::Void RegisterPushAndGetAndUpdate_00(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERPUSHANDGETANDUPDATE_00_OFFSET))(a1, a2);
		}

		static ::System::Void RegisterCast_01()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_01_OFFSET))();
		}

		static ::System::Void RegisterPushAndGetAndUpdate_01(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERPUSHANDGETANDUPDATE_01_OFFSET))(a1, a2);
		}

		static ::System::Void RegisterCast_02()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_02_OFFSET))();
		}

		static ::System::Void RegisterPushAndGetAndUpdate_02(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERPUSHANDGETANDUPDATE_02_OFFSET))(a1, a2);
		}

		static ::System::Void RegisterCast_03()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_03_OFFSET))();
		}

		static ::System::Void RegisterPushAndGetAndUpdate_03(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERPUSHANDGETANDUPDATE_03_OFFSET))(a1, a2);
		}

		static ::System::Void RegisterCast_04()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_04_OFFSET))();
		}

		static ::System::Void RegisterPushAndGetAndUpdate_04(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERPUSHANDGETANDUPDATE_04_OFFSET))(a1, a2);
		}

		static ::System::Void RegisterCast_05()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_05_OFFSET))();
		}

		static ::System::Void RegisterPushAndGetAndUpdate_05(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERPUSHANDGETANDUPDATE_05_OFFSET))(a1, a2);
		}

		static ::System::Void RegisterCast_06()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_06_OFFSET))();
		}

		static ::System::Void RegisterPushAndGetAndUpdate_06(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERPUSHANDGETANDUPDATE_06_OFFSET))(a1, a2);
		}

		static ::System::Void RegisterCast_07()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_07_OFFSET))();
		}

		static ::System::Void RegisterPushAndGetAndUpdate_07(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERPUSHANDGETANDUPDATE_07_OFFSET))(a1, a2);
		}
	};
}
