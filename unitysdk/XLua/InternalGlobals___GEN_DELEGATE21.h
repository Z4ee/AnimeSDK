#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournGameLevel; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE21_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFF50660)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE21_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFF50690)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE21_INVOKE_OFFSET UNITYSDK_OFFSET(0xFF50100)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE21__CTOR_OFFSET UNITYSDK_OFFSET(0xFF49C10)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE21_TypeDefinitionIndex = 40438;

	class InternalGlobals___GEN_DELEGATE21 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE21__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke(::RPG::Client::IRogueTournGameLevel* level)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IRogueTournGameLevel*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE21_INVOKE_OFFSET))(this, level);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournGameLevel* level, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournGameLevel*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE21_BEGININVOKE_OFFSET))(this, level, callback, object);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE21_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
