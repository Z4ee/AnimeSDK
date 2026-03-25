#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyGroup.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/XLua/LuaBase.h"

namespace RPG::Client { class LuaUIController; }
namespace System { class Object; }
namespace System { class String; }
namespace XLua { class LuaEnv; }

#define XLUA_CSOBJECTWRAP_RPGCLIENTICSTOLUABRIDGE_RPG_CLIENT_ICSTOLUA_ASYNCSHOWLUAPAGE_OFFSET UNITYSDK_OFFSET(0xFBCAAF0)
#define XLUA_CSOBJECTWRAP_RPGCLIENTICSTOLUABRIDGE_RPG_CLIENT_ICSTOLUA_CREATELUAPAGE_OFFSET UNITYSDK_OFFSET(0xFBCB650)
#define XLUA_CSOBJECTWRAP_RPGCLIENTICSTOLUABRIDGE_RPG_CLIENT_ICSTOLUA_CSGC_OFFSET UNITYSDK_OFFSET(0xFBCBC30)
#define XLUA_CSOBJECTWRAP_RPGCLIENTICSTOLUABRIDGE_RPG_CLIENT_ICSTOLUA_NOTIFYPACKET_OFFSET UNITYSDK_OFFSET(0xFBCC5D0)
#define XLUA_CSOBJECTWRAP_RPGCLIENTICSTOLUABRIDGE_RPG_CLIENT_ICSTOLUA_NOTIFY_OFFSET UNITYSDK_OFFSET(0xFBCC0E0)
#define XLUA_CSOBJECTWRAP_RPGCLIENTICSTOLUABRIDGE_RPG_CLIENT_ICSTOLUA_SYNCSHOWLUAPAGE_OFFSET UNITYSDK_OFFSET(0xFBCB0A0)
#define XLUA_CSOBJECTWRAP_RPGCLIENTICSTOLUABRIDGE__CTOR_OFFSET UNITYSDK_OFFSET(0xFBCAAE0)
#define XLUA_CSOBJECTWRAP_RPGCLIENTICSTOLUABRIDGE___CREATE_OFFSET UNITYSDK_OFFSET(0xFBCAAB0)

namespace XLua::CSObjectWrap
{
	inline static constexpr unsigned int RPGClientICsToLuaBridge_TypeDefinitionIndex = 41793;

	class RPGClientICsToLuaBridge : public ::XLua::LuaBase
	{
	public:
		::System::Void _ctor(::System::Int32 reference, ::XLua::LuaEnv* luaenv)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTICSTOLUABRIDGE__CTOR_OFFSET))(this, reference, luaenv);
		}

		static ::XLua::LuaBase* __Create(::System::Int32 reference, ::XLua::LuaEnv* luaenv)
		{
			return ((::XLua::LuaBase*(*)(::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTICSTOLUABRIDGE___CREATE_OFFSET))(reference, luaenv);
		}

		::RPG::Client::LuaUIController* RPG_Client_ICsToLua_AsyncShowLuaPage(::System::String* strPagePath, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTICSTOLUABRIDGE_RPG_CLIENT_ICSTOLUA_ASYNCSHOWLUAPAGE_OFFSET))(this, strPagePath, args);
		}

		::RPG::Client::LuaUIController* RPG_Client_ICsToLua_SyncShowLuaPage(::System::String* strPagePath, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTICSTOLUABRIDGE_RPG_CLIENT_ICSTOLUA_SYNCSHOWLUAPAGE_OFFSET))(this, strPagePath, args);
		}

		::RPG::Client::LuaUIController* RPG_Client_ICsToLua_CreateLuaPage(::System::String* strPagePath, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTICSTOLUABRIDGE_RPG_CLIENT_ICSTOLUA_CREATELUAPAGE_OFFSET))(this, strPagePath, args);
		}

		::System::Void RPG_Client_ICsToLua_CSGc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTICSTOLUABRIDGE_RPG_CLIENT_ICSTOLUA_CSGC_OFFSET))(this);
		}

		::System::Void RPG_Client_ICsToLua_Notify(::RPG::Client::NotifyGroup group, ::RPG::Client::NotifyType type, ::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyGroup, ::RPG::Client::NotifyType, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTICSTOLUABRIDGE_RPG_CLIENT_ICSTOLUA_NOTIFY_OFFSET))(this, group, type, arg);
		}

		::System::Void RPG_Client_ICsToLua_NotifyPacket(::RPG::Client::NotifyGroup group, ::System::UInt16 cmdID, ::System::Object* packet)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyGroup, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTICSTOLUABRIDGE_RPG_CLIENT_ICSTOLUA_NOTIFYPACKET_OFFSET))(this, group, cmdID, packet);
		}
	};
}
