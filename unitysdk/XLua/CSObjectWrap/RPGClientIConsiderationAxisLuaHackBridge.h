#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/XLua/LuaBase.h"

class Class_1_AC66714FF5876767;
class Class_2_21055A9FA74B791E;
namespace RPG::GameCore { class ConsiderationAxisConfig; }
namespace XLua { class LuaEnv; }

#define XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE_RPG_CLIENT_ICONSIDERATIONAXISLUAHACK_END_SCORE_OFFSET UNITYSDK_OFFSET(0x17C21E10)
#define XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE_RPG_CLIENT_ICONSIDERATIONAXISLUAHACK_END_SETUP_OFFSET UNITYSDK_OFFSET(0x17C228D0)
#define XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE_RPG_CLIENT_ICONSIDERATIONAXISLUAHACK_START_SCORE_OFFSET UNITYSDK_OFFSET(0x17C21870)
#define XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE_RPG_CLIENT_ICONSIDERATIONAXISLUAHACK_START_SETUP_OFFSET UNITYSDK_OFFSET(0x17C22350)
#define XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x17C21860)
#define XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE___CREATE_OFFSET UNITYSDK_OFFSET(0x17C21810)

namespace XLua::CSObjectWrap
{
	inline static constexpr unsigned int RPGClientIConsiderationAxisLuaHackBridge_TypeDefinitionIndex = 49370;

	class RPGClientIConsiderationAxisLuaHackBridge : public ::XLua::LuaBase
	{
	public:
		::System::Void _ctor(::System::Int32 a1, ::XLua::LuaEnv* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE__CTOR_OFFSET))(this, a1, a2);
		}

		static ::XLua::LuaBase* __Create(::System::Int32 a1, ::XLua::LuaEnv* a2)
		{
			return ((::XLua::LuaBase*(*)(::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE___CREATE_OFFSET))(a1, a2);
		}

		::System::Boolean RPG_Client_IConsiderationAxisLuaHack_start_score(::RPG::GameCore::ConsiderationAxisConfig* a1, ::Class_1_AC66714FF5876767* a2, ::RPG::GameCore::FixPoint& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ConsiderationAxisConfig*, ::Class_1_AC66714FF5876767*, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE_RPG_CLIENT_ICONSIDERATIONAXISLUAHACK_START_SCORE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::FixPoint RPG_Client_IConsiderationAxisLuaHack_end_score(::RPG::GameCore::ConsiderationAxisConfig* a1, ::Class_1_AC66714FF5876767* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::ConsiderationAxisConfig*, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE_RPG_CLIENT_ICONSIDERATIONAXISLUAHACK_END_SCORE_OFFSET))(this, a1, a2);
		}

		::System::Boolean RPG_Client_IConsiderationAxisLuaHack_start_setup(::RPG::GameCore::ConsiderationAxisConfig* a1, ::Class_2_21055A9FA74B791E* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ConsiderationAxisConfig*, ::Class_2_21055A9FA74B791E*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE_RPG_CLIENT_ICONSIDERATIONAXISLUAHACK_START_SETUP_OFFSET))(this, a1, a2);
		}

		::System::Void RPG_Client_IConsiderationAxisLuaHack_end_setup(::RPG::GameCore::ConsiderationAxisConfig* a1, ::Class_2_21055A9FA74B791E* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConsiderationAxisConfig*, ::Class_2_21055A9FA74B791E*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE_RPG_CLIENT_ICONSIDERATIONAXISLUAHACK_END_SETUP_OFFSET))(this, a1, a2);
		}
	};
}
