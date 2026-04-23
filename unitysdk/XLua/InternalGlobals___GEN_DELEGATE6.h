#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournMiracle; }
namespace RPG::Client { class IRogueTournMiracleInGame; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE6_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11228170)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE6_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x112281A0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE6_INVOKE_OFFSET UNITYSDK_OFFSET(0x11227C10)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE6__CTOR_OFFSET UNITYSDK_OFFSET(0x11212BC0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE6_TypeDefinitionIndex = 46332;

	class InternalGlobals___GEN_DELEGATE6 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE6__CTOR_OFFSET))(this, object, method);
		}

		::RPG::Client::IRogueTournMiracleInGame* Invoke(::RPG::Client::IRogueTournMiracle* miracle)
		{
			return ((::RPG::Client::IRogueTournMiracleInGame*(*)(::PVOID, ::RPG::Client::IRogueTournMiracle*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE6_INVOKE_OFFSET))(this, miracle);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournMiracle* miracle, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournMiracle*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE6_BEGININVOKE_OFFSET))(this, miracle, callback, object);
		}

		::RPG::Client::IRogueTournMiracleInGame* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::RPG::Client::IRogueTournMiracleInGame*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE6_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
