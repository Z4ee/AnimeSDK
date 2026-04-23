#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournGameLevelRoomCardLevel; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE30_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1121D180)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE30_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1121D1B0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE30_INVOKE_OFFSET UNITYSDK_OFFSET(0x1121CC20)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE30__CTOR_OFFSET UNITYSDK_OFFSET(0x11212EE0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE30_TypeDefinitionIndex = 46356;

	class InternalGlobals___GEN_DELEGATE30 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE30__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke(::RPG::Client::IRogueTournGameLevelRoomCardLevel* room)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IRogueTournGameLevelRoomCardLevel*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE30_INVOKE_OFFSET))(this, room);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournGameLevelRoomCardLevel* room, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournGameLevelRoomCardLevel*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE30_BEGININVOKE_OFFSET))(this, room, callback, object);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE30_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
