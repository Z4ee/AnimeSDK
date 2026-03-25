#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueMiracle; }
namespace RPG::Client { class IRogueMiracleInGame; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE5_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFF5AB40)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE5_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFF5AB70)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE5_INVOKE_OFFSET UNITYSDK_OFFSET(0xFF5A5E0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE5__CTOR_OFFSET UNITYSDK_OFFSET(0xFF499F0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE5_TypeDefinitionIndex = 40422;

	class InternalGlobals___GEN_DELEGATE5 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE5__CTOR_OFFSET))(this, object, method);
		}

		::RPG::Client::IRogueMiracleInGame* Invoke(::RPG::Client::IRogueMiracle* miracle)
		{
			return ((::RPG::Client::IRogueMiracleInGame*(*)(::PVOID, ::RPG::Client::IRogueMiracle*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE5_INVOKE_OFFSET))(this, miracle);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueMiracle* miracle, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueMiracle*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE5_BEGININVOKE_OFFSET))(this, miracle, callback, object);
		}

		::RPG::Client::IRogueMiracleInGame* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::RPG::Client::IRogueMiracleInGame*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE5_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
