#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/XLua/LuaBase.h"

class Class_1_6B41D5D37BA0605F;
namespace RPG::Client { class IGamePhase; }
namespace XLua { class LuaEnv; }

#define XLUA_CSOBJECTWRAP_RPGCLIENTIGAMEPHASELUAHACKBRIDGE_RPG_CLIENT_IGAMEPHASELUAHACK_END_ENTER_OFFSET UNITYSDK_OFFSET(0x10E24890)
#define XLUA_CSOBJECTWRAP_RPGCLIENTIGAMEPHASELUAHACKBRIDGE_RPG_CLIENT_IGAMEPHASELUAHACK_END_LATE_UPDATE_OFFSET UNITYSDK_OFFSET(0x10E25EB0)
#define XLUA_CSOBJECTWRAP_RPGCLIENTIGAMEPHASELUAHACKBRIDGE_RPG_CLIENT_IGAMEPHASELUAHACK_END_LEAVE_OFFSET UNITYSDK_OFFSET(0x10E269A0)
#define XLUA_CSOBJECTWRAP_RPGCLIENTIGAMEPHASELUAHACKBRIDGE_RPG_CLIENT_IGAMEPHASELUAHACK_END_TICK_OFFSET UNITYSDK_OFFSET(0x10E25360)
#define XLUA_CSOBJECTWRAP_RPGCLIENTIGAMEPHASELUAHACKBRIDGE_RPG_CLIENT_IGAMEPHASELUAHACK_START_ENTER_OFFSET UNITYSDK_OFFSET(0x10E24330)
#define XLUA_CSOBJECTWRAP_RPGCLIENTIGAMEPHASELUAHACKBRIDGE_RPG_CLIENT_IGAMEPHASELUAHACK_START_LATE_UPDATE_OFFSET UNITYSDK_OFFSET(0x10E258D0)
#define XLUA_CSOBJECTWRAP_RPGCLIENTIGAMEPHASELUAHACKBRIDGE_RPG_CLIENT_IGAMEPHASELUAHACK_START_LEAVE_OFFSET UNITYSDK_OFFSET(0x10E26420)
#define XLUA_CSOBJECTWRAP_RPGCLIENTIGAMEPHASELUAHACKBRIDGE_RPG_CLIENT_IGAMEPHASELUAHACK_START_TICK_OFFSET UNITYSDK_OFFSET(0x10E24D80)
#define XLUA_CSOBJECTWRAP_RPGCLIENTIGAMEPHASELUAHACKBRIDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x10E24320)
#define XLUA_CSOBJECTWRAP_RPGCLIENTIGAMEPHASELUAHACKBRIDGE___CREATE_OFFSET UNITYSDK_OFFSET(0x10E242D0)

namespace XLua::CSObjectWrap
{
	inline static constexpr unsigned int RPGClientIGamePhaseLuaHackBridge_TypeDefinitionIndex = 47759;

	class RPGClientIGamePhaseLuaHackBridge : public ::XLua::LuaBase
	{
	public:
		::System::Void _ctor(::System::Int32 reference, ::XLua::LuaEnv* luaenv)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTIGAMEPHASELUAHACKBRIDGE__CTOR_OFFSET))(this, reference, luaenv);
		}

		static ::XLua::LuaBase* __Create(::System::Int32 reference, ::XLua::LuaEnv* luaenv)
		{
			return ((::XLua::LuaBase*(*)(::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTIGAMEPHASELUAHACKBRIDGE___CREATE_OFFSET))(reference, luaenv);
		}

		::System::Boolean RPG_Client_IGamePhaseLuaHack_start_enter(::RPG::Client::IGamePhase* gamePhase)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IGamePhase*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTIGAMEPHASELUAHACKBRIDGE_RPG_CLIENT_IGAMEPHASELUAHACK_START_ENTER_OFFSET))(this, gamePhase);
		}

		::System::Void RPG_Client_IGamePhaseLuaHack_end_enter(::RPG::Client::IGamePhase* gamePhase)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGamePhase*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTIGAMEPHASELUAHACKBRIDGE_RPG_CLIENT_IGAMEPHASELUAHACK_END_ENTER_OFFSET))(this, gamePhase);
		}

		::System::Boolean RPG_Client_IGamePhaseLuaHack_start_tick(::RPG::Client::IGamePhase* gamePhase, ::System::Single fElapsedTimeInSec)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IGamePhase*, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTIGAMEPHASELUAHACKBRIDGE_RPG_CLIENT_IGAMEPHASELUAHACK_START_TICK_OFFSET))(this, gamePhase, fElapsedTimeInSec);
		}

		::System::Void RPG_Client_IGamePhaseLuaHack_end_tick(::RPG::Client::IGamePhase* gamePhase, ::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGamePhase*, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTIGAMEPHASELUAHACKBRIDGE_RPG_CLIENT_IGAMEPHASELUAHACK_END_TICK_OFFSET))(this, gamePhase, fElapsedTimeInSec);
		}

		::System::Boolean RPG_Client_IGamePhaseLuaHack_start_late_update(::RPG::Client::IGamePhase* gamePhase, ::System::Single fElapsedTimeInSec)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IGamePhase*, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTIGAMEPHASELUAHACKBRIDGE_RPG_CLIENT_IGAMEPHASELUAHACK_START_LATE_UPDATE_OFFSET))(this, gamePhase, fElapsedTimeInSec);
		}

		::System::Void RPG_Client_IGamePhaseLuaHack_end_late_update(::RPG::Client::IGamePhase* gamePhase, ::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGamePhase*, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTIGAMEPHASELUAHACKBRIDGE_RPG_CLIENT_IGAMEPHASELUAHACK_END_LATE_UPDATE_OFFSET))(this, gamePhase, fElapsedTimeInSec);
		}

		::System::Boolean RPG_Client_IGamePhaseLuaHack_start_leave(::RPG::Client::IGamePhase* gamePhase, ::Class_1_6B41D5D37BA0605F* nextPhaseInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IGamePhase*, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTIGAMEPHASELUAHACKBRIDGE_RPG_CLIENT_IGAMEPHASELUAHACK_START_LEAVE_OFFSET))(this, gamePhase, nextPhaseInfo);
		}

		::System::Void RPG_Client_IGamePhaseLuaHack_end_leave(::RPG::Client::IGamePhase* gamePhase, ::Class_1_6B41D5D37BA0605F* nextPhaseInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGamePhase*, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTIGAMEPHASELUAHACKBRIDGE_RPG_CLIENT_IGAMEPHASELUAHACK_END_LEAVE_OFFSET))(this, gamePhase, nextPhaseInfo);
		}
	};
}
