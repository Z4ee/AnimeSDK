#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/XLua/LuaBase.h"

class Class_1_6E6FEE1E26FFD7A8;
namespace RPG::Client::LittleGame::PixAir { class PixAirLevelController; }
namespace RPG::Client::LittleGame::PixAir { class PixAirPlaneStatistics; }
namespace RPG::Client::PixAir { class PixAirGameBattleRoundData; }
namespace XLua { class LuaEnv; }

#define XLUA_CSOBJECTWRAP_RPGCLIENTPIXAIRIPIXAIRBATTLEACTIONBRIDGE_RPG_CLIENT_PIXAIR_IPIXAIRBATTLEACTION_CREATEENEMYPLANESNAPSHOTS_OFFSET UNITYSDK_OFFSET(0x188036E0)
#define XLUA_CSOBJECTWRAP_RPGCLIENTPIXAIRIPIXAIRBATTLEACTIONBRIDGE_RPG_CLIENT_PIXAIR_IPIXAIRBATTLEACTION_CREATEPLAYERPLANESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x188030F0)
#define XLUA_CSOBJECTWRAP_RPGCLIENTPIXAIRIPIXAIRBATTLEACTIONBRIDGE_RPG_CLIENT_PIXAIR_IPIXAIRBATTLEACTION_GET_BATTLEROUNDINFO_OFFSET UNITYSDK_OFFSET(0x18804240)
#define XLUA_CSOBJECTWRAP_RPGCLIENTPIXAIRIPIXAIRBATTLEACTIONBRIDGE_RPG_CLIENT_PIXAIR_IPIXAIRBATTLEACTION_RESOLVEBATTLE_OFFSET UNITYSDK_OFFSET(0x18803CC0)
#define XLUA_CSOBJECTWRAP_RPGCLIENTPIXAIRIPIXAIRBATTLEACTIONBRIDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x188030E0)
#define XLUA_CSOBJECTWRAP_RPGCLIENTPIXAIRIPIXAIRBATTLEACTIONBRIDGE___CREATE_OFFSET UNITYSDK_OFFSET(0x18803090)

namespace XLua::CSObjectWrap
{
	inline static constexpr unsigned int RPGClientPixAirIPixAirBattleActionBridge_TypeDefinitionIndex = 49375;

	class RPGClientPixAirIPixAirBattleActionBridge : public ::XLua::LuaBase
	{
	public:
		::System::Void _ctor(::System::Int32 a1, ::XLua::LuaEnv* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTPIXAIRIPIXAIRBATTLEACTIONBRIDGE__CTOR_OFFSET))(this, a1, a2);
		}

		static ::XLua::LuaBase* __Create(::System::Int32 a1, ::XLua::LuaEnv* a2)
		{
			return ((::XLua::LuaBase*(*)(::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTPIXAIRIPIXAIRBATTLEACTIONBRIDGE___CREATE_OFFSET))(a1, a2);
		}

		::Class_1_6E6FEE1E26FFD7A8* RPG_Client_PixAir_IPixAirBattleAction_CreatePlayerPlaneSnapshot(::RPG::Client::LittleGame::PixAir::PixAirLevelController* a1)
		{
			return ((::Class_1_6E6FEE1E26FFD7A8*(*)(::PVOID, ::RPG::Client::LittleGame::PixAir::PixAirLevelController*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTPIXAIRIPIXAIRBATTLEACTIONBRIDGE_RPG_CLIENT_PIXAIR_IPIXAIRBATTLEACTION_CREATEPLAYERPLANESNAPSHOT_OFFSET))(this, a1);
		}

		::Il2CppArray<::Class_1_6E6FEE1E26FFD7A8*>* RPG_Client_PixAir_IPixAirBattleAction_CreateEnemyPlaneSnapshots(::RPG::Client::LittleGame::PixAir::PixAirLevelController* a1)
		{
			return ((::Il2CppArray<::Class_1_6E6FEE1E26FFD7A8*>*(*)(::PVOID, ::RPG::Client::LittleGame::PixAir::PixAirLevelController*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTPIXAIRIPIXAIRBATTLEACTIONBRIDGE_RPG_CLIENT_PIXAIR_IPIXAIRBATTLEACTION_CREATEENEMYPLANESNAPSHOTS_OFFSET))(this, a1);
		}

		::System::Void RPG_Client_PixAir_IPixAirBattleAction_ResolveBattle(::System::Boolean a1, ::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics* a2, ::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics*, ::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTPIXAIRIPIXAIRBATTLEACTIONBRIDGE_RPG_CLIENT_PIXAIR_IPIXAIRBATTLEACTION_RESOLVEBATTLE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::PixAir::PixAirGameBattleRoundData* RPG_Client_PixAir_IPixAirBattleAction_get_BattleRoundInfo()
		{
			return ((::RPG::Client::PixAir::PixAirGameBattleRoundData*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTPIXAIRIPIXAIRBATTLEACTIONBRIDGE_RPG_CLIENT_PIXAIR_IPIXAIRBATTLEACTION_GET_BATTLEROUNDINFO_OFFSET))(this);
		}
	};
}
