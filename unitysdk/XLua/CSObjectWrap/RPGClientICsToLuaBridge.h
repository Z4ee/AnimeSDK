#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyGroup.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/XLua/LuaBase.h"

namespace RPG::Client { class LuaUIController; }
namespace System { class Object; }
namespace System { class String; }
namespace XLua { class LuaEnv; }

#define XLUA_CSOBJECTWRAP_RPGCLIENTICSTOLUABRIDGE_RPG_CLIENT_ICSTOLUA_ASYNCSHOWLUAPAGE_OFFSET UNITYSDK_OFFSET(0x146B1670)
#define XLUA_CSOBJECTWRAP_RPGCLIENTICSTOLUABRIDGE_RPG_CLIENT_ICSTOLUA_CREATELUAPAGE_OFFSET UNITYSDK_OFFSET(0x146B21D0)
#define XLUA_CSOBJECTWRAP_RPGCLIENTICSTOLUABRIDGE_RPG_CLIENT_ICSTOLUA_CSGC_OFFSET UNITYSDK_OFFSET(0x146B27B0)
#define XLUA_CSOBJECTWRAP_RPGCLIENTICSTOLUABRIDGE_RPG_CLIENT_ICSTOLUA_NOTIFYPACKET_OFFSET UNITYSDK_OFFSET(0x146B3150)
#define XLUA_CSOBJECTWRAP_RPGCLIENTICSTOLUABRIDGE_RPG_CLIENT_ICSTOLUA_NOTIFY_OFFSET UNITYSDK_OFFSET(0x146B2C60)
#define XLUA_CSOBJECTWRAP_RPGCLIENTICSTOLUABRIDGE_RPG_CLIENT_ICSTOLUA_SYNCSHOWLUAPAGE_OFFSET UNITYSDK_OFFSET(0x146B1C20)
#define XLUA_CSOBJECTWRAP_RPGCLIENTICSTOLUABRIDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x146B1660)
#define XLUA_CSOBJECTWRAP_RPGCLIENTICSTOLUABRIDGE___CREATE_OFFSET UNITYSDK_OFFSET(0x146B1630)

namespace XLua::CSObjectWrap
{
	inline static constexpr unsigned int RPGClientICsToLuaBridge_TypeDefinitionIndex = 51121;

	class RPGClientICsToLuaBridge : public ::XLua::LuaBase
	{
	public:
		::System::Void _ctor(::System::Int32 a1, ::XLua::LuaEnv* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTICSTOLUABRIDGE__CTOR_OFFSET))(this, a1, a2);
		}

		static ::XLua::LuaBase* __Create(::System::Int32 a1, ::XLua::LuaEnv* a2)
		{
			return ((::XLua::LuaBase*(*)(::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTICSTOLUABRIDGE___CREATE_OFFSET))(a1, a2);
		}

		::RPG::Client::LuaUIController* RPG_Client_ICsToLua_AsyncShowLuaPage(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTICSTOLUABRIDGE_RPG_CLIENT_ICSTOLUA_ASYNCSHOWLUAPAGE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LuaUIController* RPG_Client_ICsToLua_SyncShowLuaPage(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTICSTOLUABRIDGE_RPG_CLIENT_ICSTOLUA_SYNCSHOWLUAPAGE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LuaUIController* RPG_Client_ICsToLua_CreateLuaPage(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTICSTOLUABRIDGE_RPG_CLIENT_ICSTOLUA_CREATELUAPAGE_OFFSET))(this, a1, a2);
		}

		::System::Void RPG_Client_ICsToLua_CSGc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTICSTOLUABRIDGE_RPG_CLIENT_ICSTOLUA_CSGC_OFFSET))(this);
		}

		::System::Void RPG_Client_ICsToLua_Notify(::RPG::Client::NotifyGroup a1, ::RPG::Client::NotifyType a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyGroup, ::RPG::Client::NotifyType, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTICSTOLUABRIDGE_RPG_CLIENT_ICSTOLUA_NOTIFY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RPG_Client_ICsToLua_NotifyPacket(::RPG::Client::NotifyGroup a1, ::System::UInt16 a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyGroup, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTICSTOLUABRIDGE_RPG_CLIENT_ICSTOLUA_NOTIFYPACKET_OFFSET))(this, a1, a2, a3);
		}
	};
}
