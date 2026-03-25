#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueMiracle; }
namespace RPG::Client { class IRogueMiracleWithCategory; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE4_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFF574D0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE4_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFF57500)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE4_INVOKE_OFFSET UNITYSDK_OFFSET(0xFF56F70)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE4__CTOR_OFFSET UNITYSDK_OFFSET(0xFF499D0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE4_TypeDefinitionIndex = 40421;

	class InternalGlobals___GEN_DELEGATE4 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE4__CTOR_OFFSET))(this, object, method);
		}

		::RPG::Client::IRogueMiracleWithCategory* Invoke(::RPG::Client::IRogueMiracle* miracle)
		{
			return ((::RPG::Client::IRogueMiracleWithCategory*(*)(::PVOID, ::RPG::Client::IRogueMiracle*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE4_INVOKE_OFFSET))(this, miracle);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueMiracle* miracle, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueMiracle*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE4_BEGININVOKE_OFFSET))(this, miracle, callback, object);
		}

		::RPG::Client::IRogueMiracleWithCategory* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::RPG::Client::IRogueMiracleWithCategory*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE4_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
